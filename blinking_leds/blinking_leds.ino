#define RED_PIN 9
#define GREEN_PIN 6
#define BLUE_PIN 3
#define ONE_SECOND 1000


void setup() {
        pinMode(RED_PIN, OUTPUT);
        pinMode(GREEN_PIN, OUTPUT);
        pinMode(BLUE_PIN, OUTPUT);

}
// i feel sick
void loop() {
        for (int pin = 3; pin < 10; pin += 3){
                for (int brightness = 0; brightness <= 255; brightness++){
                        analogWrite(pin, brightness);
                        delay(round((51 - brightness / 5) / 4)); // bright leds hurt my eyes
                }
                digitalWrite(pin, 0);
        }
}
