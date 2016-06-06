#include "Humedad_Suelo_Borra.h"
Sen_Hum_Suelo Sensor1;    //Crea un Sensor

int Humedad;      //Crea variable que guardara el valor de la humedad

void setup() {
  Sensor1.attach(0);   //El sensor uno estara conectado en A0
  Serial.begin(9600);  //incializa la comunicacion Serial
}

void loop() {
  Humedad = Sensor1.GetHumedad();   //Guarda la Humedad
  Serial.print("La humedad es ");   //imprime
  Serial.println(Humedad);          //La Humedad
  delay(100);                       //Espera un tiempo
}
