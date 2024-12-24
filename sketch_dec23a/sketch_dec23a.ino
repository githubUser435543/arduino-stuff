#define RED_PIN 9
#define GREEN_PIN 6
#define BLUE_PIN 3
#define ONE_SECOND 1000


void setup() {
        pinMode(RED_PIN, OUTPUT);
        pinMode(GREEN_PIN, OUTPUT);
        pinMode(BLUE_PIN, OUTPUT);

}

void loop() {
        for (int pin = 3; pin < 10; pin += 3){
                for (int brightness = 0; brightness <= 0; brightness++){
                        analogWrite(pin, brightness);
                        delay(5);
                }
                digitalWrite(pin, 0);
        }
}
