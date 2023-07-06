/*
* This example code for Temperature, Humidity and Pressure BME680 module
* is used with ESP32 LPkit board.
* ESP32-LPkit reads Temperature, Humidity and Pressure from BME680 sensor 
* and shows on OLED display
*
* SDA - GPIO21
* SCL - GPIO22
*
* Made by (c) laskakit.cz 2023
*
* Libraries
* https://github.com/adafruit/Adafruit_BME680
* https://github.com/adafruit/Adafruit_Sensor
* https://github.com/adafruit/Adafruit-GFX-Library
* https://github.com/adafruit/Adafruit_SH110X
*/

#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>     // https://github.com/adafruit/Adafruit-GFX-Library
#include <Adafruit_SH110X.h>  // https://github.com/adafruit/Adafruit_SH110X
#include <Adafruit_Sensor.h>  // https://github.com/adafruit/Adafruit_Sensor
#include "Adafruit_BME680.h"  // https://github.com/adafruit/Adafruit_BME680

#define SEALEVELPRESSURE_HPA (1013.25)
#define DELAYTIME 1000
#define BME680_ADDRESS (0x77)   // (0x76) cut left and solder left pad on board
#define i2c_Address 0x3c

Adafruit_BME680 bme; //Nastaví čidlo 
Adafruit_SH1106G display = Adafruit_SH1106G(128, 64, &Wire, -1); //Nastavý display


void setup() {
    Serial.begin(115200);
    while(!Serial);    // time to get serial running
    
  // initilizace BME680 | BME680 Initialization
  Wire.begin (21, 22); // for ESP32 + uŠup

  if (!bme.begin()) {
    Serial.println("Could not find a valid BME680 sensor, check wiring!");
    while (1);
  }

  // Set up oversampling and filter initialization
  bme.setTemperatureOversampling(BME680_OS_8X);
  bme.setHumidityOversampling(BME680_OS_2X);
  bme.setPressureOversampling(BME680_OS_4X);
  bme.setIIRFilterSize(BME680_FILTER_SIZE_3);
  bme.setGasHeater(320, 150); // 320*C for 150 ms

  delay(250);
  
  display.begin(i2c_Address, true); 
  display.clearDisplay(); 
  display.setTextColor(SH110X_WHITE); 
  display.setTextSize(1); 
}

void loop() {
  // put your main code here, to run repeatedly:
  if (! bme.performReading()) {
    Serial.println("Failed to perform reading :(");
    return;
  }
   display.setCursor(0,0);
   display.println((String)"Teplota:"+bme.temperature+"C");       //Zobrazí na displeji teplotu z čidla
   display.println((String)"Tlak:"+bme.pressure / 100.0F+"hPa");  //Zobrazí na displeji tlak z čidla
   display.println((String)"Vlhkost:"+bme.humidity+"%");          //Zobrazí na displeji vlhkost z čidla
   display.println((String)"Gas:"+bme.gas_resistance+"KOhms");          //Zobrazí na displeji Gas Resistance z čidla
   display.println((String)"Nadmorska vyska:"+String(bme.readAltitude(SEALEVELPRESSURE_HPA),0) + "m"); //Zobrazí na displeji nadmořskou výšku vypočtenou z údajů z čidla
   display.display(); 
   delay(500);
   display.clearDisplay();
}  
