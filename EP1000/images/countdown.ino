int ledred = 13;
int ledgreen = 12;
int ledwhite = 11;
const int button = 6;
int button_off = 0;
int button_on = 1;
void setup()
{
  pinMode(button, INPUT);
  pinMode(ledred, OUTPUT);
  pinMode(ledgreen, OUTPUT);
  pinMode(ledwhite, OUTPUT);
}

void loop()
{
  button_on = button_off;
  button_off = digitalRead(button);
  
  if (button_on == 1){
  	digitalWrite(ledred,LOW);
    digitalWrite(ledgreen,HIGH);
    digitalWrite(ledwhite,LOW);
  }
  if (button_on == 2){
  	digitalWrite(ledred,LOW);
    digitalWrite(ledgreen,LOW);
    digitalWrite(ledwhite,LOW);
  }
  else{
   	digitalWrite(ledred,HIGH);
    digitalWrite(ledgreen,LOW);
    digitalWrite(ledwhite,LOW);
    delay(1000);
  }
}