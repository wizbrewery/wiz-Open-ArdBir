Open ArdBir 2012-2016
===========
##[Version 2.8.3-Wiz](https://github.com/wizbrewery/wiz-Open-ArdBir)
##modded from[Version 2.8.3-RC](https://github.com/ArdBir/Open-ArdBir/archive/v2.8.3-RC.zip)

####[Source, PCB, Manual (English, Italian, Russian)](http://goo.gl/qMhPgu)

####Avaible Language: Italian, English, Spanish, Portuguese, Russian (20x4), Norwegian (20x4).

####Compiled on [Arduine IDE v1.6.5](http://www.arduino.cc/en/Main/Software).

brauduino semi automated single vessel RIMS
created by s.mathison
Copyright (C) 2012  Stephen Mathison

###Modified by wizbrewery.wordpress.com (2016)
 - Added ONEWIRE bus to support second temperaure probe
 - Amended display to show reding of second temperature probe for both auto and manual
 - Auto shows temp readings to 2 decimal place vertically aligned
 - Manual shows temp readings to 1 dp side by side
 - Implemented new GetTemperature() which takes probe i2c address as an argument,  so that it can be called for each probe
 - Currently implemented so that you have to enter your probes specific i2c address

 - To do ..  fix 1 decimal place for manual mode
 - IOT implementation for connection to thingspeak.com
 - Incorporate second temp probe into control.  Any ideas on a plan to do this?
 
###Modified BY Oddvar S. Næss (2014)
 - Ported to Arduino Mega 2650
 - Implemented I2C Serial Display (use I2C Scanner sketch to determend I2C address)
 - Added PCB_OSN.h Library for prototyping (not an actual circutboard)
 - Added 4 status LEDs (Heater, Pump, 12Vdc, 220Vac ON/OFF)
 - Added 1 additional pump for circulation (work in progress)
 - Added 1 manual on/off button for circulation pump (work in progress)
 - Added 1 additional temperature sensor for monitoring (work in progress)
 
###Modified by Mike Wilson

 - Added INPUT_PULLUP to button inputs
 - swapped I/O ports for Buzz and Pump
 - changed to faherenheit
 - added heat and pump (H and P) indicators to the LCD
 - turned off pump during boil stage
 - added direct output% control and display during boil
 - saved boil heat % in EEPROM
 - 2v5 fixed hop addition when hoptime == boiltime
 - changed boil stage temp to 201 deg F.

###Modified by Massimo Nevi (2014/2015)

 - Added Buzzer Modulation (NumBeep, Period)
 - Added Stage CountDown in Automatic Mode
 - Added Stage Watch in Manual Mode
 - Modified Max Number of Hops (10)
 - Modified stage Wait in Active Pause (PID Control On)
 - Modified H e P indicator for ON-OFF and Active-Disactive Modulation
 - Added Some Control Parameter in Configuration Menu
 - Added Temp Pump Stop in Manual Mode
 - Dual Scale Temp (°C-°F)
 - Reorganized EEPROM
 - Reorganized Configuration
 - Added Delayed Start
 - Added Alert before Mash In
 - Jump Step whit Button Press in Automatic Mode
 - Added Cooling Procedure
 - Added Whirlpool Procedure

 Added more configuration on PID Menu
 - Added Use Gas section
 - Set Histeresy for Gas Use
 - Set Calibration Temp
 - Modified PID on BOIL

 - Added Second Menu Configuration
   - Set Scale Temp (°C-°F)
   - Set Location of Temp Sensor
   - Set Temp of Boil (°C-°F)
   - Set Set Time Pump Cycle and Time Rest
   - Set Pump ON-OFF before Mash In
   - Set Pump ON-OFF during Mash
   - Set Pump ON-OFF at Mash Out
   - Set Pump ON-OFF at Boil
   - Set Temp Pump Stop (°C-°F)
   - Set Skip Pause at Add Malt
   - Set Skip Pause at Remove Malt
   - Set Skip Pause at Iodine Test
   - Set Time Max Iodine Test
   - Set Manage Whirlpool

 - Reorganized Automation
   - Removed Number of Stages Setting
   - Fixed Name of Stages (8)
   - Dual A-Amylase Stage
   - Correct Mash In Stage
   - Auto Mash Design
   - Correct Time Reset of Pump
   - Added Iodine Test (Active Pause)
   - Added WHIRLPOOL control
   - Added COOLING control

 - Stage Managing
   - Load Stage Set
   - Save Stage Set
   - Delete Stage Set
   - Initialize EEPROM

 - LCD 16x2 wiew
 - LCD 20x4 wiew

 - ####Avaible Language:
  - Italian Language     (Both)
  - English Language     (Both)
  - Spanish Language     (Both)
  - Portuguese Language  (Both)
  - Russian Language     (20x4)
  - Norwegian Language   (20x4)

 compiled on Arduino V1.6
