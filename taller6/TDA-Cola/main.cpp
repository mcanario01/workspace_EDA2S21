#include <stdio.h>
#include "cola.h"

int main(){
    Cola cola;
    ponerEnCola(2, cola);
    ponerEnCola(3, cola);
    ponerEnCola(24, cola);
    ponerEnCola(5, cola);
    ponerEnCola(1, cola);
    quitarDeCola(cola);
    quitarDeCola(cola);
    imprimeCola(cola);
    return 0;
}
