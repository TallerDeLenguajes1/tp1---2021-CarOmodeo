#include <stdio.h>
#include <math.h>

int cuadrado(int x);
void cuadrado2(int *px);
void invertir(int *pa, int *pb);
void ordenar(int *pa, int *pb);

int main(){
    
    int x, y, a, b, *px, *pa, *pb;
    px = &x;
    pa = &a;
    pb = &b;

    printf("Inserte 3 numero positivos (num1 num2 num3): ");
    scanf("%d %d %d", &x, &a, &b);

    //Apartado c
    printf("Las variables ingresadas son: x = %d, a = %d y b = %d \n", x, a, b);
    printf("La direccion de memoria de la variable x es: %p \n", px);

    y = cuadrado(x);
    cuadrado2(px);
    printf("El cuadrado de la variable x por pasaje por valor es: %d \n", y);
    printf("El cuadrado de la variable x por pasaje por referencia es: %d \n", *px);

    invertir(pa, pb);
    printf("a = %d, b = %d \n", *pa, *pb);

    ordenar(pa, pb);
    printf("a = %d, b = %d \n", *pa, *pb);
    return 0;
}

//Apartado a
int cuadrado(int x)
{
    return pow(x,2);
}

//Apartado b
void cuadrado2(int *px){
    *px = pow(*px,2);
}

//Apartado d
void invertir(int *pa, int *pb)
{
    int aux = *pa;
    *pa = *pb;
    *pb = aux;
}

//Apartado e
void ordenar(int *pa, int *pb)
{
    int aux;
    if(*pa > *pb){
        invertir(pa, pb);
    }
}
