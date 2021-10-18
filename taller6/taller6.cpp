#include <stdio.h>
#include "taller6.h"
#include "./TDA-Cola/cola.h"
#include "./TDA-Pila/pila.h"

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

void suprimeCola(int pos, Cola& c){
    if(vacia(c)){
        printf("La cola esta vacia.\n");
        return;
    }
    Cola aux;
    int contador = 1;
    while(!vacia(c)){
        if (contador == pos)
        {
            quitarDeCola(c);
        }
        contador++;       
        tipoDato x = frente(c);        
        ponerEnCola(x, aux);
        quitarDeCola(c);
    }

    while(!vacia(aux)){
        tipoDato x = frente(aux);
        ponerEnCola(x, c);
        quitarDeCola(aux); 
    }
    
}