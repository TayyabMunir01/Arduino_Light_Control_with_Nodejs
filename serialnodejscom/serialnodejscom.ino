void setup() {
  pinMode(LED_BUILTIN,OUTPUT);
  Serial.begin(9600);
  Serial.setTimeout(10);
}

void loop() {
  if(Serial.available()>0)
  {
     ledFunction();
  }
}

void ledFunction(){
  String data = Serial.readString();
    Serial.println(data);
      if(data=="on"){ digitalWrite(LED_BUILTIN,HIGH);}
       if(data=="off"){ digitalWrite(LED_BUILTIN,LOW);} 
}
