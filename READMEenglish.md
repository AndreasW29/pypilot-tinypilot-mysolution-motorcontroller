# pypilot-tinypilot-mysolution-motorcontroller
The Arduino sketches and binary files for the motorcontroller of pypilot

The programs are for an Arduino Nano
It is enough to simply flash the corresponding binary file on the Arduino. The sketch is only required if you want to program yourself.

The folder usbdriver contains a small file which you can use to install a usb driver for the Arduino Nano under Windows.
Download and run the file.

The xloader folder contains a program to flash the binary files onto the Arduino.
Download and unzip the zip folder.

The binary files folder contains two binary files.
pypilotmotorcontrollerwithoutrudder. **** Binary file if no rudder angle sensor is used
pypilotmotorcontrollerwithrudder. **** Binary file if a rudder angle sensor is used

Download the appropriate file

Connect the Arduino to the computer via USB, start the XLoader, select the COM port, specify the storage location of the binary file, select "Duemilanove / Nano (ATmega328)" as the board.
Start the flash process with upload.

For programmers
The arduino sketch folder contains the entire program for the Arduino Nano.
Download the folder and open it with the Arduino IDE for editing.
You may have to download libraries and integrate them into the Arduino IDE.
