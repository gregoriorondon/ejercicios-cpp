
//Programa que usa la recursividad para pasar un decimal a binario.

//En el código tienes la opción de activar (DEBUG 1) el debug para ir siguiendo la recursividad del programa.

//Código:

// Funciones Recursivas:
//
//      Pasa un decimal a binario recursivamente con la funcion DaB() 
//      

#include <stdio.h>

#define DEBUG 0 // 1 acá para mostrar los ciclos de la recursividad
 
int DaB(int);

int main(void)
{
        int numero = 155;
        int a,R;
        
        printf("\nIngrese un numero para pasar a binario: ");
        scanf("%d",&numero);
        
        if(DEBUG == 0)
                printf("Binario = ");
        
        DaB(numero);
        
        printf("\nCoded For \"C++ con clase\" Funciones recursivas by "
           "Section[One] <section_one_@hotmail.com>\n\n");

        getchar();
        getchar();
        return 0;
}

int DaB(int numero)
{       
        int a,R;

        R = numero % 2;
        a = numero / 2;

        if(DEBUG != 0)
        {       
                printf("a = %i\n",a);
                fflush(stdout); 
        }
        
        if (a > 0)
                DaB(a);

        if(DEBUG != 0)
        {
                printf("R = %d\n",R);
                fflush(stdout);
        }
        else
                printf("%d",R);

        return 0;
}

