#include <stdio.h>

int main(){
    printf("\nEste programa leerá 2 numeros y reponderá el mayor de los 2.\n");
    printf("Por favor, ingrese un numero entero: ");
    int a,b;
    scanf("%d",a);
    printf("\nIngrese un segundo numero entero: ");
    scanf("%d",b);
    if (a > b)
    {
        printf("\n%d es el numero más grande.", a); 
    }else if (b > a)
    {
        printf("\n%d es el numero más grande.", b); 
    }else{
        printf("\nAmbos numeros son del mismo valor.");
    }
    
    
    printf("\n%d es el numero más grande.");   
     
    return 0;
}