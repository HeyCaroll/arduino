int trigPin = 2;    
int echoPin = 3;    

float duracao_us, distancia_cm;

void setup() {
  Serial.begin (9600);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duracao_us = pulseIn(echoPin, HIGH);
  distancia_cm = 0.017 * duracao_us;
  Serial.print("distancia: "); // Mostra no monitor serial a distancia em cm
  Serial.print(distancia_cm);
  Serial.println(" cm");

  delay(500);
}
