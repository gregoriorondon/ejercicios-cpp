/*Escribir un programa que asigne dinámicamente un arreglo de tipo Empleados. 
Pedir al usuario el numero de empleados que debe crearse. 
Contrate algunos empleados (llene los campos de nombre y numero de id.)*/



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct empleado_st {
    char nombre[40];
    int id;
} Empleado;
int main()
{

    Empleado *trabajadores, *trab;
    int num;

    printf("Escriba el número de empleados que desee ingresar\n");
    scanf("%d",&num);

    trabajadores = (Empleado *) malloc(num * sizeof(Empleado));
    if (trabajadores == NULL)
    {
        printf("No se ha localizado espacio para empleado\n");
        return 1; 
        /* Un retorno a no cero es usualmente usado para indicar un error */
    }

    trab = trabajadores;

    strcpy(trab->nombre,"John");
    trab->id = 12345;

    trab++;
    strcpy(trab->nombre,"Justin");
    trab->id = 12346;

    trab = trabajadores;
    printf("Empleado %d es %s\n", trab->id, trab->nombre);
    trab++;
    printf("Empleado %d es %s\n", trab->id, trab->nombre);

    free(trabajadores);
    trabajadores = NULL;

    return 0;
}







