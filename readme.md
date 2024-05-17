# Arduino Transistor Controller

## Items needed
    * Transistor: 3
    * Transformer(220v to 12v): 1
    * Diode ‌bridge(Diode: 4): 1
    * Capacitor(i use 16v 3300uF): 1
    * Regulator 7812: 1
    * Triac: 1
    * Arduino(i use Arduino UNO): 1

## Eplantion
 ### Step One:
  Transformer convert 220v ac to 12v ac.
 ### Step Two:
  Diode bridge makes DC voltage.
 ### Step Three:
  Capacitor filter noise
 ### Step Four:
  Regulator make porven 12v DC voltage and send to Transistor

## Usage

NOTE: I config this code for `Arduino UNO`!

### Step One:
#### Clone source code:
```sh
git clone https://github.com/mobinJahanii/arduino-transistor-controller
```
### Step Two:
#### Complie and Upload:
  Open Arduino-IDE and at the menu select`File>Open File`.
  After that if you need config port config ,Then upload the code into Arduino bord.
### Step Three:
#### Serial connection:
  In this part you can press `ctrl+shift+m` or `Tools>Sreial Manitoring` and enter the commands
# License
MIT license
