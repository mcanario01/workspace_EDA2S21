#include <stdio.h>

int main(){
    printf("\nEste programa leerá 3 numeros y reponderá el mayor de los 3.\n");
    printf("Por favor, ingrese un numero entero: ");
    int a,b,c;
    scanf("%d",&a);
    printf("\nIngrese un segundo numero entero: ");
    scanf("%d",&b);
    printf("\nIngrese un tercer numero entero: ");
    scanf("%d",&c);
    if (a > b && a > c)
    {
        printf("\n%d es el numero más grande.", a); 
    }else if (b > a && b > c)
    {
        printf("\n%d es el numero más grande.", b); 
    }else if (c > a && c > b){
        printf("\n%d es el numero más grande.", c);
    }else if (c == a && c == b){
        printf("\nLos tres numeros son iguales");
    }else{
        printf("\nDos de los tres numeros son iguales.");
    }
        
    return 0;
}