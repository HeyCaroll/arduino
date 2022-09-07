//Caso o código não funcione, pesquise o número de linhas e colunas do LCD usado
//e altere no codigo abaixo !!

#include <LiquidCrystal.h>

LiquidCrystal lcd(2,4,10,11,12,13); 

void setup() {
  
  lcd.begin(16,2); //informar o número de colunas e linhas
  lcd.print("Ola Mundo!"); // mostra a mensagem na tela
  
  lcd.setCursor(0,1);//mostra a próxima mensagem na parte inferior 
  lcd.write('LCD 16x4');

} 

void loop() {
  

}
