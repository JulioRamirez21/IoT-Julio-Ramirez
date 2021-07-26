#include<stdio.h>

int maximo(int a, int b){
    return (a > b)?a:b;
}

int main(){
    int a, b;
    printf("este es un programa sencillo que recibe dos numeros enteros e imprime el mayor de ellos");
    printf("introduce dos numeros enteros separados por un espacio ");
    scanf("%d%d", &a, &b);
    printf("el mas grande de los dos es: ");
    printf("%d", maximo(a, b));
    return 0;
}