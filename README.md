# Blynk Water Level Sensor
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
![architecture](https://cloud.githubusercontent.com/assets/18737539/24123343/1a23def8-0de5-11e7-8fb4-637e6474bf60.png)

## Raspberry Pi - 3
I will be using a local server rather than the cloud server provided by Blynk.

Main advantages of a local server over cloud server are
1. Better security. You are the only one who knows about the server. You can setup security policies tied to your specific needs (MAC, IPs, login names, etc). You can also make it accessible only within your private network.
2. Better stability. No need to rely on 3rd party Cloud solution. You have the full control.
3. Lower latency. Server is as close to you as it could be.
4. Maximum privacy. All data is stored locally and is not shared with anyone.
5. The local server will be able transfer data over the router and without the internet.
## Hardware Requirements
1. Water Level Sensor
2. Nodemcu
3. Blynk App on your smartphone
4. Raspberry pi 

## Connections
1. A0 from nodemcu to S of water level sensor
2. 3V from nodemcu to + of water level sensor
3. G from nodemcu to - of water level sensor

![20170321_025609](https://cloud.githubusercontent.com/assets/18737539/24123421/77803ea2-0de5-11e7-842b-36254b4c583c.jpg =250x250)

## Widgets Used 
1. Horizontal Level for A0(water level)
2. Value for V1(percentage of water)

![screenshot_2017-03-21-03-22-21](https://cloud.githubusercontent.com/assets/18737539/24123511/cac20744-0de5-11e7-9944-cb424530d534.png =250x250)
