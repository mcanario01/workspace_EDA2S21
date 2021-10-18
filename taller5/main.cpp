#include <stdio.h>
#include "./TDA-Lista-v2/lista.h"
#include "taller5.h"

int main()
{
    Lista lista;
    inserta(10, 1, lista);
    inserta(9, 2, lista);
    inserta(45, 3, lista);
    inserta(36, 4, lista);
    inserta(53, 5, lista);
    inserta(27, 6, lista);
    inserta(4, 7, lista);
    int maximo = max(lista);
    printf("%d", maximo);
    return 0;
}

