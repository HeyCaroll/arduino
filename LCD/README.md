#  Projeto 01 - Display LCD
> Projeto concluído 🥳

<p>
O Display LCD possibilita a interação de dispositivos digitais por meio de elementos gráficos, e partir da combinação entre esses mecanismos, é possível visualizar as informações processadas pelo sistema.
</p>

## 🛠️ Sobre o LCD
<img src="https://www.majju.pk/assets/uploads/2020/08/16%C3%972-Character-LCD-Pinout-2048x1810.png" width="400">
O LCD possui 16 pinos, normalmente não é necessario o uso de todos.
Com o uso da biblioteca <a href="https://arduinogetstarted.com/reference/library/arduino-lcd-library">LiquidCrystal</a> é possivel fazer o uso do LCD mesmo sem saber a funcionalidade de cada pino.

## 💭 Como programar o LCD 
> No Arduino é ultilizado a linguagem c++ para programar 👩‍💻

Logo no inicio, inclua a bibliteca LiquidCrystal <br>
```#include <LiquidCrystal.h>``` <br>
Defina quais os pinos que serão conectado aos seis pinos do LCD <br>
```LiquidCrystal lcd(2,4,10,11,12,13);``` <br>
Indique o número de linhas e colunas do LCD ultilizado <br>
```LCD.begin(16, 2);``` <br>
posicione o cursor na posição desejada<br>
```LCD.setCursor(0, 2);```<br>
Ultilize o comando *print* para exibir uma mensagem na tela<br>
```LCD.print("FRC8066");```<br>

## Exemplo de código 
```
#include <LiquidCrystal.h>

LiquidCrystal lcd(2,4,10,11,12,13); 
void setup() {
  lcd.begin(16,2);
  lcd.print("W.A.R 8066");
}
void loop() { 
} 
```
## Passo rápido
- copie e cole o código acima no Arduino IDE
- Clique no botão 'Carregar' 
- E veja o resultado no LCD
- Tente por si só alterar a mensagem no LCD !

## :open_file_folder: Hardware necessários
Os itens listados abaixo foram ultilizados para a contrução do nosso LCD, outros projetos podem requerer mais ou menos itens.
|Qnt.| Componente |
| :---: | :---: | 
| 1 | arduino UNO |
| 1 | USB tipo A/B |
| 1 | LCD 16x2 |
| 1 | Breadboard |
| 14 | Cabos jumper macho-macho |
| 1 | resistor 220 ohms|

## :pencil: Vista esquemática 
<img src="/LCD/vistaEsquemática.png" width="600">

