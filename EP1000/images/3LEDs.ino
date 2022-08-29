int Rled = 10;
int Yled = 11;
int Gled = 12;
int button = 2;
int button_off = 0;
int button_on = 1;

void setup()
{
  pinMode(Rled, OUTPUT);
  pinMode(Yled, OUTPUT);
  pinMode(Gled, OUTPUT);
  pinMode(button, INPUT);
}

void loop()
{
  button_on = button_off;
  button_off = digitalRead(button);
  
   while(button_on == 1){ //while loop start
    digitalWrite(Rled, HIGH);
    delay(200);
    digitalWrite(Rled, LOW); 
    
 	digitalWrite(Yled, HIGH);
  	delay(200); 
  	digitalWrite(Yled, LOW);
  
  	digitalWrite(Gled, HIGH);
  	delay(200); 
  	digitalWrite(Gled, LOW);
  	delay(200);
    button_on = digitalRead(button);
   }
  

}