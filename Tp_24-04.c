//Alumno Mateo Coiro K2006

#include <stdio.h>
#include <stdlib.h> 

int main (int argc, char *argv[])
{
    int edad;
    char nombre[25];
    printf("Ingrese su edad\n");
    scanf("%d",&edad);
    printf("Ingrese su nombre\n");
    scanf("%s",&nombre);

    printf("Hola %s tenes %d anios", nombre, edad);

    return 0;
}