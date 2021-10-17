#include <stdio.h>
#include "./TDA-Pila/pila.h"

int localizaPila(Pila& p, tipoDato x);

int main(){
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
}

int localizaPila(Pila& p, tipoDato x){
    if(vacia(p)){
        printf("La pila está vacía.\n");
    }
    Pila aux;
    int contador1 = 0;
    int contador2 = 0;
    int posicion_pila;
    while(!vacia(p)){
        tipoDato dato_recuperado = top(p);
        contador2++;
        if (x == dato_recuperado)
        {
            posicion_pila = contador2;
        }
        else
        {
            contador1++;
        }
        push(x, aux);
        pop(p);
    }
    while(!vacia(aux)){
        push(top(aux), p);
        pop(aux);
    }
    if (contador1 == contador2)
    {
        printf("El dato no existe en la pila.");
    }
    else
    {
        return posicion_pila;
    }  
}