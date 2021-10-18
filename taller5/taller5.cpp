#include <stdio.h>
#include "./TDA-Lista-v2/lista.h"

/*
1)
Un TDA de Lista es un Tipo de Dato Abstracto, su objetivo es encapsular una estructura 
de datos en una lógica de de los mismos que operarán sobre ella de una forma determinada. 
Está compuesto de elementos o "nodos", los cuales no tienen limite sobre cuantos pueden 
existir en un TDA de Lista y están relacionados ya que en un nodo se guarda la dirección 
en la que se ubica el siguiende nodo en la lista. 
*/

tipoDato max(Lista lista){
	tipoDato maximo = recupera(1, lista);
	for(int i = primero(lista) ; i < fin(lista) ; i = siguiente(i, lista)){
		tipoDato elemento = recupera(i, lista);
		if(elemento > maximo){
			maximo = elemento;
		}
	}
	return maximo;
}
