#define GREEN   D0
#define RED     D1
#define BLUE    D2

#define REFRESH_RATE 1000

void setup() {
    pinMode(GREEN, OUTPUT);
    pinMode(RED, OUTPUT);
    pinMode(BLUE, OUTPUT);
    analogWrite(GREEN, 50, REFRESH_RATE);
    analogWrite(RED, 255, REFRESH_RATE);
    analogWrite(BLUE, 10, REFRESH_RATE);
}

void loop() {

}
