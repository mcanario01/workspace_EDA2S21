#include <stdio.h>

int main(){
    printf("Este programa pedirĂ¡ 1 numero entero y retornarĂ¡ su paridad.");
    printf("\nIngrese un numero entero: ");
    int a; scanf("%d", &a);
    if (a&1)
    {
        printf("El numero ingresado es impar.");
    }else
    {
        printf("El numero ingresado es par.");
    }
    
    

    return 0;
}