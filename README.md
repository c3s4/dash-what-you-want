# dash-what-you-want

An Arduino project based on ESP8266 board to emulate Amazon® Dash Buttons to do everything you want.

The project use [platfromIO](http://platformio.org/) and an ESP-201 board, a board built around the ESP8266 wireless chip.

## About the library

To work with the ESP8266 chip family writing arduino code we need a library, the [ESP8266 Arduino](http://arduino-esp8266.readthedocs.io/en/latest/index.html) provide a set of libraries to use with the ESP chip. We mainly need the [ESP8266WiFi library](http://arduino-esp8266.readthedocs.io/en/latest/esp8266wifi/readme.html). The [documentation](http://arduino-esp8266.readthedocs.io/en/latest/esp8266wifi/readme.html) explains anything we need to know to write our code.

We need to use the board as Station to connect to our access point and the Client class to send requests to our webservices. In addition we want to confg board wifi setting via smartphone, to not hardcode ssid and password directly in the codebase, so we use the [ESPTouch protocol](http://espressif.com/en/products/software/esp-touch/overview) using the [Smart Config mode](http://arduino-esp8266.readthedocs.io/en/latest/esp8266wifi/station-class.html#smart-config).


## Flash and other tricks

The trickies part, at least for me, was the flashing phase. Is not a difficult task when you understand main concepts. 

[Schema dove ci sono definiti i pin che deveono sempre essere messi a GND o 3.3v](https://www.letscontrolit.com/forum/viewtopic.php?t=289)

[Giare antenna e info su pin per flash](http://www.14core.com/wiring-and-flashing-the-esp8266-esp201-wifi-transceiver-with-arduino/)

[Boot process and pins needed](https://github.com/esp8266/esp8266-wiki/wiki/Boot-Process)

## Make the board work