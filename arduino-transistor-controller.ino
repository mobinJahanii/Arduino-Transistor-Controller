int transistor1= 1;
int transistor2= 2;
int transistor3= 3;
int triac= 4;

String command;

void setup() {
  pinMode(transistor1,OUTPUT);
  pinMode(transistor2,OUTPUT);
  pinMode(transistor3,OUTPUT);
  pinMode(triac,OUTPUT);


  Serial.begin(9600);
  Serial.println("Plase inetert a number as char  [one-on,one-off] -  [two-on,two-off] - [three-on,three-off] - [four-on,four-off] : ");
}

void loop() {
   if(Serial.available()){
        command = Serial.readStringUntil('\n');
         
        if(command.equals("one-on")){
          digitalWrite(transistor1,HIGH);
        }else if(command.equals("two-on")){
          digitalWrite(transistor2,HIGH);
        }else if(command.equals("three-on")){
          digitalWrite(transistor3,HIGH);
        }else if(command.equals("four-on")){
          digitalWrite(triac,HIGH);
        }else if(command.equals("on-off")){
          digitalWrite(transistor1,LOW);
        }else if(command.equals("two-off")){
          digitalWrite(transistor2,LOW);
        }else if(command.equals("three-off")){
          digitalWrite(transistor3,LOW);
        }else if(command.equals(("four-off"))){
          digitalWrite(triac,LOW);
        }else{
          Serial.println("Invalid command");
        }
    }
}
