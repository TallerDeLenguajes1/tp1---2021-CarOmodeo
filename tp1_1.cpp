#include <stdio.h>

int main(){

    int x = 3;
    int *px;
    px = &x;

    printf("Contenido del Puntero: %p \n", px);  
    printf("Direccion de memoria almacenada : %p \n", px);
    printf("Direccion de memoria de la variable : %p \n", &x);
    printf("Direccion de memoria del puntero : %p \n", &px);
    printf("Tamanio de memoria utilizado por la variable : %d \n", sizeof(x));
    
    return 0;
}