//Caso o código não funcione, pesquise o número de linhas e colunas do LCD usado
//e altere no codigo abaixo !!

#include <LiquidCrystal.h>

LiquidCrystal lcd(2,4,10,11,12,13); 
void setup() {
  lcd.begin(16,2); //informar o número de colunas e linhas
  lcd.print("W.A.R 8066"); // mostra a mensagem na tela
}
void loop() {

} 