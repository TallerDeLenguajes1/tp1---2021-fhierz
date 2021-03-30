#include <stdio.h>

//funcion cuadrado
int cuadrado(int base);

//funcion void cuadrado
void cuadradoVoid(int base);

//funcion memoria
void memoria(int num);

//funcion invertir
void Invertir(int a, int b);

//funcion orden
void orden(int a, int b);



int main () {
    int a,num1,num2,num3,num4;
    //int cuad;
    //cuad = cuadrado(a);
    printf("****FUNCION CUADRADO DE UN NUMERO****\n");
    printf("Ingrese un numero para saber su cuadraro: ");
    scanf("%d",&a);

    printf("El cuadrado de %d es %d\n", a, cuadrado(a)); //funcion cuadrado
    
    cuadradoVoid(a);//funcion cuadrado void

    memoria(a);//funcion direccion de memoria

    printf("Ingrese dos numeros cualesquiera separados por espacio: ");
    scanf("%d %d",&num1, &num2);
    Invertir(num1,num2);//funcion invertir

    printf("Ingrese dos numeros cualesquiera separados por espacio: ");
    scanf("%d %d", &num3, &num4);
    orden(num3,num4);//funcion orden
    
    
    getchar();


    return 0;
}

int cuadrado(int base){
    /*int potencia;
    potencia = base*base;
    return potencia;*/
    return(base*base);
}

void cuadradoVoid(int base){
    printf("El cuadrado de %d por funcion void es: %d\n\n", base, (base*base));
}

void memoria(int num){
    printf("****FUNCION DIRECCION Y CONTENIDO****\n");
    printf("La direccion de memoria de la variable es: %u\n", &num);
    printf("El contenido de la variable es: %d\n\n", num);
}

void Invertir(int a, int b){
    printf("****FUNCION INVERTIR NUMEROS****\n");
    int aux, *punt_a;
    printf("Al inicio los valores son: %d y %d\n", a,b);
    punt_a = &a;
    aux = *punt_a;
    *punt_a = b;
    b = aux;

    printf("Los valores invertidos son: %d y %d\n\n", a,b);
}

void orden(int a, int b){
    printf("****FUNCION ORDEN NUMEROS****\n");
    int aux, *punt_a;
    printf("Los valores ingresados son: %d y %d\n", a,b);

    if (a < b) {
        printf("El primer numero es menor que el segundo\n");
        printf("Ordenados en forma decreciente: %d, %d\n", a,b);

    } else if (a == b) {
        printf("Los numeros igresados son iguales\n");
        printf("Ordenados en forma decreciente: %d, %d\n", a,b);
    } else {
        punt_a = &a;
        aux = *punt_a;
        *punt_a = b;
        b = aux;
        printf("El primer numero es mayor que el segundo\n");
        printf("Ordenados en forma decreciente: %d, %d\n", a,b);
    }


}




