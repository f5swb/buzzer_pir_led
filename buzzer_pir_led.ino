#define SIGNAL_PIN 2
#define LED1 3
#define LED2 5

int Buzzer = 6;
void setup()
{
  
  pinMode(SIGNAL_PIN, INPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode (Buzzer, OUTPUT); // Initialisation comme broche de sortie
  
}

void loop() {
  if(digitalRead(SIGNAL_PIN)==HIGH) {    
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, LOW);
    digitalWrite (Buzzer, HIGH);
    delay(100);
    digitalWrite (Buzzer, LOW);
    delay(100);
    digitalWrite (Buzzer, HIGH);
    
    } else {     
     digitalWrite(LED1, LOW);
     digitalWrite(LED2, HIGH);
     digitalWrite (Buzzer, LOW);

     
  }

  
}
