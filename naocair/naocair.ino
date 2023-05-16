/*******************************************
Evitar borda
 
 Sparki has an array of infrared sensors
 underneath. It can use these to detect
 if there is anything underneath it. 
 
 This program detects if Sparki is about to
 fall off the edge. If it is, it turns the
 other way before continuing.
********************************************/
#include <Sparki.h> // include the sparki library

int backwardDistance = 5;
int angle = 20;

void setup()
{       
}

void loop() {
  int edgeLeft   = sparki.edgeLeft();   // Mede o sensor IR da borda esquerda
  int edgeRight  = sparki.edgeRight();  // Mede o sensor IR da borda direita
  
  int threshold = 200; // Se abaixo de ste valor, nenhuma superfíce abaixo
  
  if (edgeLeft < threshold) // Se não houver superfíce abaixo do sensor 
  {
    sparki.moveBackward(backwardDistance);
    sparki.moveRight(angle); // Vire à direita
  }

  if (edgeRight < threshold) // Se não houver superfíce abaixo do sensor direito
  {
    sparki.moveBackward(backwardDistance);
    sparki.moveLeft(angle); // Vire a esquerda
  }

  sparki.moveForward(); // Siga em frente
  delay(100); // espere 0.1 segundos
}
