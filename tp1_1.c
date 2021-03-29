#include <stdio.h>

int main (){

    int a = 10;
    int *punt_a;

    punt_a = &a;

    printf("a) Contenido del puntero: %d\n", *punt_a);
    printf("b) Direccion de memoria almacenada por el puntero: %u\n", punt_a);
    printf("c) Direccion de memoria de la variable: %u\n", &a);
    printf("d) Direccion de memoria del puntero: %u\n", &punt_a);
    printf("e) Tamanio de memoria utilizado por la variable: %d\n", sizeof(a));

    getchar();

    return 0;
}