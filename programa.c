#include<stdio.h>

int main(){
    int a, b, c;
    printf("Programa que recibe dos numeros enteros, los suma e imprime el mayor de ellos");
    printf("Introduce dos numeros enteros separados por un espacio ");
    scanf("%d%d", &a, &b);
    printf("El mas grande de los dos es: ");
    a<b ? printf("%d", b): printf("%d", a);
    c=a+b;
    printf("La suma de los dos numeros es: %d", c);
    return 0;
}