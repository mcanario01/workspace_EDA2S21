#include <stdio.h>

int main(){
    printf("\nEste programa pedirá numeros enteros de forma continua, si ingresas 0, sumará todos los anteriores.\n\n");
    int suma = 0;
    bool end = 0;
    do
    {
        printf("Ingrese un numero entero (0 para terminar y sumarlos todos): ");
        int aux;
        scanf("%d", &aux);
        suma = suma + aux;
        if (aux == 0)
        {
            end = 1;
        }
        
    } while (end == 0);

    printf("\n\nLa sumatoria es: %d",suma);
    
    return 0;
}