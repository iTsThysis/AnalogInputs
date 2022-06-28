SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);
//setting value as an integer
uint16_t value;

void setup() {
  //setting ports
  pinMode(A5, INPUT);
  pinMode(D5, OUTPUT);
}


void loop() {
  //defining value
  value = analogRead(A5);
  //printing value
  Serial.println(value);
  
  Serial.begin(9600);
  //making the lightbulb blink
  delay(value);
  digitalWrite(D5, HIGH);
  delay(value);
  digitalWrite(D5, LOW);
}
