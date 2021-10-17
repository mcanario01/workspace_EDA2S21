#include "prueba1.h"

// RESPUESTA b - 1

void caniSort(Lista &lista, Lista &lista_ordenada, int cuenta){
    tipoDato minimo = 0;
    //declaramos el termino de una funcion recursiva
    if(lista != NULL){
        return;
    }
    //sentencia por defecto
    else
    {
        //analizamos el minimo de una lista recorriendola, guardaremos el valor y lo insertamos en otra lista con la posicion dada de la cantidad de minimos encontrados.
        for(int i = primero(lista) ; i < fin(lista) ; i = siguiente(i, lista)){
            int cuenta = 1;
            tipoDato valor = recupera(i, lista);
            if(valor < minimo){
                minimo = valor;
                inserta(minimo, cuenta, lista_ordenada);
                cuenta++;
                caniSort(lista, lista_ordenada, cuenta);
            }
        }
    }
}

//RESPUESTA b -2

void imprimirCuartoRegistro(char* arch){
    //apertura de archivo
    FILE* a = fopen(arch, "r");
    //variables en las que se guardan datos.
    char nombre[50];
    int cuenta = 0;
    //iteración que se ejecuta mientras no se llegue al fin del archivo
    while (feof(a) == 0){
        //en cada iteración obtenemos la linea cuenta-esima con fgets e incrementamos su valor en 1 hasta que sea 3, entonces imprimimos esa linea.
        fgets(nombre, sizeof(nombre), a);
        if (cuenta == 3){
            //impresion y cierre del archivo.
            printf("\nCuarto registro:\n\n\t%s", nombre);
            fclose(a);
            return;
        }else
        {
            //contador
            cuenta++;
        }
        
    }
    fclose(a);
    return;
}