#include<stdio.h>

int main(){
    int a, b;
    printf("este es un programa sencillo que recibe dos numeros enteros e imprime el mayor de ellos");
    printf("introduce dos numeros enteros separados por un espacio ");
    scanf("%d%d", &a, &b);
    printf("el mas grande de los dos es: ");
    a<b ? printf("%d", b): printf("%d", a);
    return 0;
}