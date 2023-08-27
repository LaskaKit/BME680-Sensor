# Modul tlaku, teploty a vlhkosti BME688 s konektorem μŠup

Přesné měření tlaku, teploty a vlhkosti - bez toho se neobejde žádná meteostanice, ať už vnitřní nebo venkovní. BME688 dokáže navíc měřit i kvalitu vzduchu - IAQ (Air Quality).

![Osazený modul](https://github.com/LaskaKit/BME680-Sensor/blob/main/img/2-5.jpg)

Co ale hodnota IAQ může znamenat pro člověka najdeš v tabulce níže. Je to tabulu z katalogového listu BME688.</br>
![IAQ tabulka](https://github.com/LaskaKit/BME680-Sensor/blob/main/img/BME688_IAQ.JPG)</br>
Zdroj: https://www.bosch-sensortec.com/media/boschsensortec/downloads/datasheets/bst-bme688-ds000.pdf</br>

Čidlo BME688 je umístěno na našem modulu s už standarní velikostí a rozměry, kde najdeš dva [uŠup konektor](https://blog.laskakit.cz/predstavujeme-univerzalni-konektor-pro-propojeni-modulu-a-cidel-%CE%BCsup/)y a také místo pro zapájení standardního hřebínku s roztečí 2.54mm. Tento modul tak můžeš pohodlně propojit s dalšími moduly.
Po horní ulomení části DPS můžeš zmenšený modul umístit například do [takového krytu](https://www.laskakit.cz/kryt-senzoru-s-kabelem--4pin--1m/).

A jaké moduly to jsou? Třeba čidlo [SCD41 pro měření CO2, teploty a vlhkosti vzduchu](https://www.laskakit.cz/laskakit-scd41-senzor-co2--teploty-a-vlhkosti-vzduchu/), čidla SHT41 [teploty a vlhkosti vzduchu](https://www.laskakit.cz/laskakit-sht40-senzor-teploty-a-vlhkosti-vzduchu/) a [čidla tlaku, teploty a vlhkosti vzduchu BME280](https://www.laskakit.cz/arduino-senzor-tlaku--teploty-a-vlhkosti-bme280/), [RTC Hodiny reálného času](https://www.laskakit.cz/laskakit-ds3231-orig--rtc-hodiny-realneho-casu/) s DS3231 nebo [OLED displej o velikosti 1.3" a rozlišení 128x64px](https://www.laskakit.cz/laskakit-oled-displej-128x64-1-3--i2c/?variantId=11903).

Připojit to můžeš nejen do našich vývojových kitů jako jsou univerzální [Meteo Mini s možností připojení solárního panelu](https://www.laskakit.cz/laskakit-meteo-mini/?variantId=10473), jednoduše programovatelný [ESP32-DEVKit](https://www.laskakit.cz/laskakit-esp32-devkit/?variantId=11481), velmi [úsporný a malý kit ESP32-C3 LPKit](https://www.laskakit.cz/laskkit-esp-12-board/?variantId=10482), [ESPInk s ESP32 a velkým 4.2" ePaper](https://www.laskakit.cz/laskakit-espink-42-esp32-e-paper-pcb-antenna/?variantId=11400) nebo [populárním kitem s ESP32 a 3.5" TFT displejem](https://www.laskakit.cz/laskakit-espd-35-esp32-3-5-tft-ili9488-touch/?variantId=12158). 

Nakonec, není nutné používat pouze naše desky - použít [můžeš téměř kterékoliv Arduino](https://www.laskakit.cz/arduino-2/), jednodeskový počítač [Rock Pi nebo Raspberry Pi](https://www.laskakit.cz/mini-pc/) či jiné vývojové kity s I2C sběrnicí.

![Zadní strana osazeného modulu](https://github.com/LaskaKit/BME680-Sensor/blob/main/img/5-6.jpg)

Napájecí napětí modulu a tedy i čidla je od 1.71V až do 3.6V. Adresa čidla je 0x76 nebo 0x77 (výchozí) - to záleží na pájecím mostu umístěném na zadní straně modulu. Tím můžeš změnit adresu čidla a zapojit tak dva moduly s BME688 najednou, každý s nastavenou jinou I2C adresou. U jednoho čidla tedy ponecháš výchozí nastavení, u druhého čidla přeřízneš cestu u pájecí mostu a kapkou pájky zapájíš středový pad s druhou stranou pájecího mostu.

Další pájecí most určuje zda budou pull-up rezistory připojeny na I2C sběrnici nebo nikoliv. Ve výchozím nastavení jsou rezistory připojeny. Pokud je chceš odstranit, stačí přeříznout cestu mezi pájecími mosty. 

## Tento modul si můžeš objednat na https://www.laskakit.cz/laskakit-bme688-senzor-tlaku--teploty--vlhkosti-a-kvalitu-vzduchu/

Podporované knihovny v Arduino IDE jsou</br>
[https://github.com/boschsensortec/Bosch-BME68x-Library](https://github.com/boschsensortec/Bosch-BME68x-Library)</br>
[https://github.com/adafruit/Adafruit_BME680](https://github.com/adafruit/Adafruit_BME680)</br>

Napsali jsme i vzorové kódy, které najdeš na [https://github.com/LaskaKit/BME680-Sensor/tree/main/SW](https://github.com/LaskaKit/BME680-Sensor/tree/main/SW)
