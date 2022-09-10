//Caso o código não funcione, pesquise o número de linhas e colunas do LCD usado
//e altere no codigo abaixo !!

#include <LiquidCrystal.h>

LiquidCrystal lcd(2,4,10,11,12,13); 
long duration;
int distance;
const int trig = 8;
const int echo = 9;
void setup() {
  lcd.begin(16,2); //informar o número de colunas e linhas
  lcd.print("W.A.R 8066"); // mostra a mensagem na tela
  pinMode(trig, OUTPUT); // Inicia o trigPin como saida
  pinMode(echo, INPUT); // Inicia echoPin como entrada
  Serial.begin(9600); // Inicia a comunicação
}
void loop() {
  distance = calculateDistance();
  Serial.println(distance);
}
  int calculateDistance(){
  digitalWrite(trig, LOW);
  delayMicroseconds(5);
  digitalWrite(trig, HIGH);
  delayMicroseconds(50);
  digitalWrite(trig, LOW);
  duration = pulseIn(echo, HIGH);
  distance= duration*0.034/2;
  return distance; // retorna a distancia 
} 
