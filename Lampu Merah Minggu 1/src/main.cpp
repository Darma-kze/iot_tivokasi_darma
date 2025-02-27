#include <Arduino.h>

int merah = 25;
int kuning = 33;
int hijau = 32;


void setup() {
    Serial.begin(115200);
    Serial.println("ESP32 LAMPU MERAH");


    pinMode(merah, OUTPUT);
    pinMode(kuning, OUTPUT);
    pinMode(hijau, OUTPUT);
}


void loop() {
    
    digitalWrite(merah, HIGH);
    digitalWrite(kuning, LOW);
    digitalWrite(hijau, LOW);
    Serial.println("MERAH ON");
    
    delay(10000); // Tunggu 10 detik


    digitalWrite(merah, LOW);
    digitalWrite(kuning, HIGH);
    digitalWrite(hijau, LOW);
    Serial.println("KUNING ON");
    
    delay(5000); // Tunggu 5 detik 

    digitalWrite(merah, LOW);
    digitalWrite(kuning, LOW);
    digitalWrite(hijau, HIGH);
    Serial.println("HIJAU ON");

    delay(10000); // Tunggu 10 detik

    
}
