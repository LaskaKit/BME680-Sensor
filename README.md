# The module with measurement of pressure, temperature and humidity BME688 with μSup connector

Accurate measurement of pressure, temperature and humidity - no weather station, indoor or outdoor, can do without it. The BME688 can also measure IAQ (Air Quality).

![Assembled module](https://github.com/LaskaKit/BME680-Sensor/blob/main/img/2-5.jpg)

However, what the IAQ value can mean for a person can be found in the table below. It is a table from the BME688 datasheet.</br>
![IAQ table](https://github.com/LaskaKit/BME680-Sensor/blob/main/img/BME688_IAQ.JPG)</br>
Source: https://www.bosch-sensortec.com/media/boschsensortec/downloads/datasheets/bst-bme688-ds000.pdf</br>

The BME688 sensor is assembled on our module with standard size and dimensions, where you will find two [uŠup connector](https://blog.laskakit.cz/predstavujeme-univerzalni-konektor-pro-propojeni-modulu-a-cidel-%CE%BCsup/)s and also a place for soldering a standard 2.54mm pitch male/female connector. This module can be conveniently connected to other modules.</br>
After breaking off the top part of the PCB, you can place the shrunken module into [such a housing](https://www.laskakit.cz/kryt-senzoru-s-kabelem--4pin--1m/).

And what another modules you can use? For example the sensor [SCD41 for measurement of CO2, temperature and humidity](https://www.laskakit.cz/laskakit-scd41-senzor-co2--teploty-a-vlhkosti-vzduchu/), sensor SHT41 [temperature nad humidity](https://www.laskakit.cz/laskakit-sht40-senzor-teploty-a-vlhkosti-vzduchu/) and [sensor of pressure, temperature, humidity BME280](https://www.laskakit.cz/arduino-senzor-tlaku--teploty-a-vlhkosti-bme280/), [RTC - Real Time Clock](https://www.laskakit.cz/laskakit-ds3231-orig--rtc-hodiny-realneho-casu/) with DS3231 or [OLED display with 1.3" dimension and 128x64px resolution](https://www.laskakit.cz/laskakit-oled-displej-128x64-1-3--i2c/?variantId=11903).

You can connect all these modules also to our evaluation boards such as [Meteo Mini with solar panel input](https://www.laskakit.cz/laskakit-meteo-mini/?variantId=10473), easily programmed [ESP32-DEVKit](https://www.laskakit.cz/laskakit-esp32-devkit/?variantId=11481), super [low power and small ESP32-C3 LPKit](https://www.laskakit.cz/laskkit-esp-12-board/?variantId=10482), [ESPInk with ESP32 and huge 4.2" ePaper](https://www.laskakit.cz/laskakit-espink-42-esp32-e-paper-pcb-antenna/?variantId=11400) or [popular eval board with ESP32 and 3.5" TFT display](https://www.laskakit.cz/laskakit-espd-35-esp32-3-5-tft-ili9488-touch/?variantId=12158). 

Finally, it is not necessary to use only our eval boards, you can use [common Arduino boards](https://www.laskakit.cz/arduino-2/), single-board computers as [Rock Pi or Raspberry Pi](https://www.laskakit.cz/mini-pc/) or another popular evaluation boards.

![Bottom side of module](https://github.com/LaskaKit/BME680-Sensor/blob/main/img/5-6.jpg)

The power supply voltage of the module and therefore of the sensor is from 1.71V up to 3.6V. The address of the sensor is 0x76 or 0x77 (default) - it depends on the solder bridge located on the back of the module. This allows you to change the sensor address and connect two modules with BME688 at the same time, each with a different I2C address set. So for one sensor you leave the default setting, for the other sensor you cut the track at the solder bridge and solder the center pad with the other side of the solder bridge.

Another solder bridge determines whether the pull-up resistors will be connected to the I2C bus or not. By default, the resistors are connected. If you want to remove them, just cut the path between the solder bridges. 

## You can buy this module on https://www.laskakit.cz/laskakit-bme688-senzor-tlaku--teploty--vlhkosti-a-kvalitu-vzduchu/

Supported libraries in Arduino IDE are </br>
[https://github.com/boschsensortec/Bosch-BME68x-Library](https://github.com/boschsensortec/Bosch-BME68x-Library)</br>
[https://github.com/adafruit/Adafruit_BME680](https://github.com/adafruit/Adafruit_BME680)</br>

We prepared also example codes what you can find on [https://github.com/LaskaKit/BME680-Sensor/tree/main/SW](https://github.com/LaskaKit/BME680-Sensor/tree/main/SW)
