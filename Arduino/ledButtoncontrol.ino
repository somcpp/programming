int buttonPin = 2;
int ledPin = 9;

void setup() {
    pinMode(buttonPin,INPUT_PULLUP);
    pinMode(ledPin);
}

void loop(){
    if(digitalRead(buttonPin)==LOW){
        digitalWrite(ledPin,HIGH);
    }
    else {
        digitalWrite(ledPin,LOW);
    }
}

//vcc ground output