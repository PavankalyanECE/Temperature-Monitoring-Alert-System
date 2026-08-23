#include <Wire.h>
#include <OneWire.h>
#include <DallasTemperature.h>
#include <LiquidCrystal_I2C.h>

// =====================================================
// PIN DEFINITIONS
// =====================================================

#define RED_LED       2
#define YELLOW_LED    3
#define BLUE_LED      4

#define TEMP_SENSOR   5

#define BUZZER        9

// Nano I2C:
// SDA = A4
// SCL = A5

// =====================================================
// TEMPERATURE LIMITS
// =====================================================

#define COOL_LIMIT 25.0
#define HOT_LIMIT  35.0

// =====================================================
// BUZZER TIMING
// =====================================================

#define BEEP_ON_TIME  500
#define BEEP_OFF_TIME 500

// =====================================================
// OBJECTS
// =====================================================

OneWire oneWire(TEMP_SENSOR);
DallasTemperature sensors(&oneWire);

LiquidCrystal_I2C lcd(0x27, 16, 2);

// =====================================================
// VARIABLES
// =====================================================

float temperature = 0.0;

bool buzzerState = false;

unsigned long lastBuzzerChange = 0;

// =====================================================
// SETUP
// =====================================================

void setup()
{
  // Serial Monitor
  Serial.begin(9600);

  // LED pins
  pinMode(RED_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(BLUE_LED, OUTPUT);

  // Buzzer
  pinMode(BUZZER, OUTPUT);

  // Turn everything OFF
  digitalWrite(RED_LED, LOW);
  digitalWrite(YELLOW_LED, LOW);
  digitalWrite(BLUE_LED, LOW);

  noTone(BUZZER);

  // ===================================================
  // LCD
  // ===================================================

  Wire.begin();

  // Your legacy LiquidCrystal_I2C library
  lcd.begin();
  lcd.backlight();

  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("TEMP MONITOR");

  lcd.setCursor(0, 1);
  lcd.print("Starting...");

  delay(2000);

  lcd.clear();

  // ===================================================
  // DS18B20
  // ===================================================

  sensors.begin();

  // ===================================================
  // SERIAL HEADER
  // ===================================================

  Serial.println();
  Serial.println("==============================");
  Serial.println("  ARDUINO NANO TEMP MONITOR");
  Serial.println("==============================");
  Serial.println("Blue   = COOL");
  Serial.println("Yellow = MEDIUM");
  Serial.println("Red    = HOT");
  Serial.println("==============================");
}

// =====================================================
// LOOP
// =====================================================

void loop()
{
  // ===================================================
  // READ TEMPERATURE
  // ===================================================

  sensors.requestTemperatures();

  temperature = sensors.getTempCByIndex(0);

  // ===================================================
  // SENSOR ERROR
  // ===================================================

  if (temperature == DEVICE_DISCONNECTED_C)
  {
    Serial.println("ERROR: DS18B20 DISCONNECTED!");

    lcd.setCursor(0, 0);
    lcd.print("SENSOR ERROR!   ");

    lcd.setCursor(0, 1);
    lcd.print("CHECK DS18B20   ");

    digitalWrite(RED_LED, LOW);
    digitalWrite(YELLOW_LED, LOW);
    digitalWrite(BLUE_LED, LOW);

    noTone(BUZZER);

    buzzerState = false;

    delay(1000);

    return;
  }

  // ===================================================
  // SERIAL TEMPERATURE
  // ===================================================

  Serial.print("Temperature: ");
  Serial.print(temperature, 2);
  Serial.print(" C");

  // ===================================================
  // COOL
  // ===================================================

  if (temperature < COOL_LIMIT)
  {
    // Blue ON
    digitalWrite(BLUE_LED, HIGH);

    // Other LEDs OFF
    digitalWrite(YELLOW_LED, LOW);
    digitalWrite(RED_LED, LOW);

    // Buzzer OFF
    noTone(BUZZER);
    buzzerState = false;

    // LCD
    lcd.setCursor(0, 0);
    lcd.print("Status: COOL    ");

    lcd.setCursor(0, 1);
    lcd.print("Temp: ");
    lcd.print(temperature, 1);
    lcd.print((char)223);
    lcd.print("C      ");

    Serial.println(" | Status: COOL");
  }

  // ===================================================
  // MEDIUM
  // ===================================================

  else if (temperature < HOT_LIMIT)
  {
    // Yellow ON
    digitalWrite(YELLOW_LED, HIGH);

    // Other LEDs OFF
    digitalWrite(BLUE_LED, LOW);
    digitalWrite(RED_LED, LOW);

    // Buzzer OFF
    noTone(BUZZER);
    buzzerState = false;

    // LCD
    lcd.setCursor(0, 0);
    lcd.print("Status: MEDIUM  ");

    lcd.setCursor(0, 1);
    lcd.print("Temp: ");
    lcd.print(temperature, 1);
    lcd.print((char)223);
    lcd.print("C      ");

    Serial.println(" | Status: MEDIUM");
  }

  // ===================================================
  // HOT
  // ===================================================

  else
  {
    // Red ON
    digitalWrite(RED_LED, HIGH);

    // Other LEDs OFF
    digitalWrite(BLUE_LED, LOW);
    digitalWrite(YELLOW_LED, LOW);

    // LCD
    lcd.setCursor(0, 0);
    lcd.print("Status: HOT     ");

    lcd.setCursor(0, 1);
    lcd.print("Temp: ");
    lcd.print(temperature, 1);
    lcd.print((char)223);
    lcd.print("C      ");

    Serial.println(" | Status: HOT");
  }

  // ===================================================
  // CONTINUOUS BEEP-BEEP FOR HOT
  // ===================================================

  if (temperature >= HOT_LIMIT)
  {
    // Start beep
    if (!buzzerState)
    {
      tone(BUZZER, 2000);

      buzzerState = true;
      lastBuzzerChange = millis();
    }

    // Stop beep
    else if (millis() - lastBuzzerChange >= BEEP_ON_TIME)
    {
      noTone(BUZZER);

      buzzerState = false;
      lastBuzzerChange = millis();
    }

    // Start next beep
    if (!buzzerState &&
        millis() - lastBuzzerChange >= BEEP_OFF_TIME)
    {
      tone(BUZZER, 2000);

      buzzerState = true;
      lastBuzzerChange = millis();
    }
  }
  else
  {
    noTone(BUZZER);
    buzzerState = false;
  }

  delay(500);
}