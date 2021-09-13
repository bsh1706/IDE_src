#define PIN_LED 13
unsigned int count, toggle;

void setup() {
  pinMode(PIN_LED, OUTPUT); // Initialize serial port
  Serial.begin(115200);
  while (!Serial) {
    ; // wait for serial port to connect  
  }
  Serial.println("Hello World!");
  count = toggle = 0;
  digitalWrite(PIN_LED, toggle); 
}

void loop() {
  Serial.println(++count);
  toggle = toggle_state(toggle); // toggle LED value.
  digitalWrite(PIN_LED, toggle);
  delay(1000); // wait for 1000 milliseconds
  
}
int toggle_state(int toggle) {
  if (toggle == 1) 
  {
    toggle = 0;
  }
  else if (toggle == 0) 
  {
    toggle = 1;
  }
  return toggle;
}
