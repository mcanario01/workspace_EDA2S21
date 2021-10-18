#include <stdio.h>
#include "taller6.h"
#include "./TDA-Pila/pila.h"
#include "./TDA-Cola/cola.h"

int main(){
    /*
    Pila pila;
    push(10, pila);
    push(12, pila);
    push(4, pila);
    push(16, pila);
    push(15, pila);
    push(20, pila);
    push(45, pila);

    imprimePila(pila);
    printf("Ingrese un dato para ubicar en la pila: ");
    int dato;    scanf("%d", &dato);
    printf("\\nEl dato está ubicado en la posición: %d", localizaPila(pila, dato)); 
    return 0;
    */
   Cola cola;
   ponerEnCola(4, cola);
   ponerEnCola(3, cola);
   ponerEnCola(16, cola);
   ponerEnCola(14, cola);
   ponerEnCola(35, cola);
   ponerEnCola(67, cola);
   ponerEnCola(2, cola);
   imprimeCola(cola);
   suprimeCola(3, cola);
   imprimeCola(cola);

}

