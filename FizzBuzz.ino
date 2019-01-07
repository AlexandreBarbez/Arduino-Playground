
int fizzPin = 11;
int buzzPin = 12;
int pauseTime = 5000;

void setup() {
  //vitesse d'interaction avec arduino
  Serial.begin(9600);
  pinMode(fizzPin, OUTPUT);
  pinMode(buzzPin, OUTPUT);
  
  while(!Serial);
  Serial.println("Démarrage du FizzBuzz");
}

void loop() {
  
  int numberToCheck = random(0,100);
  if(numberToCheck % 3 == 0 && numberToCheck % 5 == 0){
    Serial.print(numberToCheck);
    Serial.println(" : FIZZBUZZ !!" );
    digitalWrite(fizzPin, HIGH);
    digitalWrite(buzzPin, HIGH);
    delay(pauseTime); 
    digitalWrite(fizzPin, LOW);
    Serial.println(digitalRead(buzzPin));
    digitalWrite(buzzPin, LOW);
  }else if(numberToCheck % 3 == 0){
    Serial.print(numberToCheck);
    Serial.println(" : FIZZ !!" );
    digitalWrite(fizzPin, HIGH);
    delay(pauseTime); 
    digitalWrite(fizzPin, LOW);
  }else if(numberToCheck % 5 == 0){
    Serial.print(numberToCheck);
    Serial.println(" : BUZZ !!" );
    digitalWrite(buzzPin, HIGH);
    delay(pauseTime); 
    digitalWrite(buzzPin, LOW);
  }else{
    Serial.print(numberToCheck);
    Serial.println(" : not a FizzBuzz number !!" );
    delay(pauseTime-2000); 
  }
  
}
