#include <Arduino.h>

#define CS_WAKE 2

void setup() {
    Serial1.begin(9600, SERIAL_8E1);
    pinMode(LED_BUILTIN, OUTPUT);
    pinMode(CS_WAKE, OUTPUT);
    digitalWrite(CS_WAKE, HIGH);
}

void loop() {
    digitalWrite(LED_BUILTIN, HIGH);
    // IKE Ignition ACC Position message
    byte message[] = {0x80, 0x04, 0xBF, 0x11, 0x01, 0x2B};
    Serial.write(message, sizeof(message));
    digitalWrite(LED_BUILTIN, LOW);
    delay(3500);
}