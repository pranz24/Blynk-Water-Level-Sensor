# Blynk-Water-Level-Sensor
Monitoring water level in a small glass using nodemcu and Blynk

## Nodemcu
The NodeMcu is an open-source firmware and development kit that helps you to prototype your IOT product within a few Lua script lines or C code(using Arduino IDE).
To download nodemcu library on your Arduino IDE you can refer to the given link:
http://www.instructables.com/id/Quick-Start-to-Nodemcu-ESP8266-on-Arduino-IDE/

## About Blynk
Blynk is a Platform with iOS and Android apps to control Arduino, Raspberry Pi and the likes over the Internet.
It's a digital dashboard where you can build a graphic interface for your project by simply dragging and dropping widgets.

## How does Blynk Work
Blynk was designed for the Internet of Things. It can control hardware remotely, it can display sensor data, it can store data, vizualize it and do many other cool things.

There are three major components in the platform:

Blynk App - allows to you create amazing interfaces for your projects using various widgets we provide.

Blynk Server - responsible for all the communications between the smartphone and hardware. You can use our Blynk Cloud or run your private Blynk server locally. It’s open-source, could easily handle thousands of devices and can even be launched on a Raspberry Pi.

Blynk Libraries - for all the popular hardware platforms - enable communication with the server and process all the incoming and outcoming commands.

Every time you press a Button in the Blynk app, the message travels to space the Blynk Cloud, where it magically finds its way to your hardware. It works the same in the opposite direction and everything happens in a blink of an eye.
https://cloud.githubusercontent.com/assets/18737539/24123343/1a23def8-0de5-11e7-8fb4-637e6474bf60.png

## Hardware Requirements
1. Water Level Sensor
2. Nodemcu
3. Blynk App on your smartphone

## Connections
1. A0 from nodemcu to S of water level sensor
2. 3V from nodemcu to + of water level sensor
3. G from nodemcu to - of water level sensor
https://cloud.githubusercontent.com/assets/18737539/24123421/77803ea2-0de5-11e7-842b-36254b4c583c.jpg

## Widgets Used 
1. Horizontal Level for A0(water level)
2. Value for V1(percentage of water)
https://cloud.githubusercontent.com/assets/18737539/24123511/cac20744-0de5-11e7-9944-cb424530d534.png
