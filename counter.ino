const int green = 8;
const int blue = 9;
const int yellow = 10;
const int red = 11;
const int wait = 50;
void setup() {
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);
}

void loop() {
  for(int ured = 0; ured < 10; ured++) {
    for(int uyellow = 0; uyellow < 10; uyellow++) {
      for(int ublue = 0; ublue < 10; ublue++) {
        for(int ugreen = 0; ugreen < 10; ugreen++) {
            ublink(green);
            delay(wait);
        }
        ublink(blue);
        delay(wait);
      }
      ublink(yellow);
      delay(wait);
    }
    ublink(red);
    delay(wait);
  }
}

void ublink(int led) {
  digitalWrite(led, HIGH);
  delay(wait);
  digitalWrite(led, LOW);
}

