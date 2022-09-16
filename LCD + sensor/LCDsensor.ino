#include <LiquidCrystal.h>

int trigPin = 8;    
int echoPin = 9;    

float duraçao_us, distancia_cm;

LiquidCrystal lcd(2,4,10,11,12,13); // portas do arduino ultilizadas
void setup() {
   Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  lcd.begin(16,2); 
   
}
void loop() {
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duraçao_us = pulseIn(echoPin, HIGH); // emite o pulso do ultrassonico
  distancia_cm = 0.017 * duraçao_us;
  lcd.clear(); // limpa a tela do lcd
  lcd.setCursor(1,2); // posição da mensagem na tela
  lcd.print("distancia:" );
  lcd.print(distancia_cm);
  lcd.print(" cm");

  delay(1000);
} 