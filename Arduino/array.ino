int leds[] = {8,9,10,11};
void setup()
{
    for(int i = 0; i<4; i++){
        pinMode(leds[i],OUTPUT);
    }
}

void loop()
{
    for (int i = 0; i < 4; i++) {
        digitalWrite(ledPins[i], HIGH);
        delay(500);
        digitalWrite(ledPins[i], LOW);
    }
}