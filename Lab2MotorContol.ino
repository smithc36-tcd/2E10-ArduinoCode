
const int LEYE = 2; // sets name for left eye 
const int REYE = 10; // sets name for right eye 
const int AOne = 20; // sets name for H-bridge input A1 
const int ATwo = 19; // sets name for H-brigde input A2
const int AThree = 16; // sets name for H-bridge input A3 
const int AFour = 17; // Sets name for H-brigde input A4 

void setup() {
  Serial.begin(9600); // Sets serial speed to default of 9600

  pinMode( LEYE, INPUT );
  pinMode( REYE, INPUT );// Sets eye pins as inputs 
  pinMode( AOne, OUTPUT ); // +Left Motor 
  pinMode( ATwo, OUTPUT ); // -Left Motor 
  pinMode( AThree, OUTPUT ); // +Right motpr 
  pinMode( AFour, OUTPUT ); // - Right motor // Sets motorcontol pins to outputs
}

void loop() {
  if( digitalRead( LEYE ) == HIGH ){ // if left eye is HIGH send high signal to motor input A1 and LOW to A2
    digitalWrite(AOne, HIGH);
   // digitalWrite(ATwo, LOW);
  }else{
    digitalWrite(AOne, LOW);// No power 
    //digitalWrite(ATwo, LOW);
  }

  if( digitalRead( REYE ) == HIGH ){ // if left eye is HIGH send high signal to motor input A4 and LOW to A3
    digitalWrite(AFour, HIGH);
    //digitalWrite(AThree, LOW);
  }else{
    digitalWrite(AFour, LOW); // no power 
    //digitalWrite(AThree, LOW);
  }
  delay(50); // set delay to 50ms 
}
