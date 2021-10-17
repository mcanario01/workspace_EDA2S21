#include <stdio.h>
#include "pila.h"

int main(){
    Pila pila;
    push(5,pila);
    push(2,pila);
    push(6,pila);
    push(12,pila);
    imprimePila(pila);
    return 0;
}