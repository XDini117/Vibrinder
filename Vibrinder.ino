// Outputs
int vibrator = 2; // initialize digital pin 2 as an output for the vibrator.

// Delays
int duration = 750;
int pause = 250;
long randSleep;

// The setup function runs once when you press reset or power the board.
void setup() {
  pinMode(vibrator, OUTPUT);

  // if analog input pin 0 is unconnected, random analog
  // noise will cause the call to randomSeed() to generate
  // different seed numbers each time the sketch runs.
  // randomSeed() will then shuffle the random function.
  randomSeed(analogRead(18));
}

// The (froot-)loop function runs over and over again forever.
void loop() {
  digitalWrite(vibrator, HIGH);
  delay(duration);
  digitalWrite(vibrator, LOW);
  delay(pause);
  digitalWrite(vibrator, HIGH);
  delay(duration); 
  digitalWrite(vibrator, LOW);
  randSleep = random(8000, 22000);
  delay(randSleep);
}
