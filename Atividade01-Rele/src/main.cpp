#include <Arduino.h>

// put function declarations here:
// VARIAVEL LEITURA ANALOGICA
int sensorValue = 0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // Inicia a comunicação serial
  pinMode(7, OUTPUT); // Saida Relé
}

void loop() {

  //Serial.println("Ligando o Relé"); // Mensagem no Monitor Serial
  //digitalWrite(7, LOW); // Liga o Relé
  //delay(5000); // Espera 5 segundos
  //Serial.println("Desligando o Relé"); // Mensagem no Monitor Serial
  //digitalWrite(7, LOW); // Desliga o Relé
  //delay(5000); // Espera 5 segundos
  sensorValue = analogRead(A0);

  Serial.println(sensorValue);

  if(sensorValue < 500){
    digitalWrite(7, LOW);

  }else{
    digitalWrite(7, HIGH);
  }


}
