/*3)_ Realice un programa que lea un registro de arreglos de 30 Datos, y a continuación calcule el
promedio de los estudiantes de la materia programación. 
Porcentajes: Nota1=15%, Nota 2=10%, Nota 3=25%, Nota 4=20%, Nota 5=10%, Nota 6=5%, Nota 7=15%)
Datos Entradas: Apellidos, Nombres, Cedula, email, semestre.
El programa deberá emitir los siguientes reportes: Listado de Alumnos (Ordenados por la cedula),
Listados de los Alumnos aprobados (Ordenados por Apellido), Listado de los Alumnos reprobados
(Ordenados por Nombre), Listado de los Alumnos con Notas mayores e iguales de 15 a 19 puntos
(Ordenados por semestres), y un Listado de los Alumnos con promedio de 20 puntos (Ordenados por
apellidos) y emitiendo un mensaje por cada alumno "El mejor de la clase." Para este programa
deberán utilizar estructuras como parámetros.*/


#include <stdio.h>
#include <conio.h>
#include <iostream.h>

typedef struct
{
	char apellido[20];
    char nombre[20];
    char semestre[5];
    char cedula[10];
    char email[30];
    int n1,n2,n3,n4,n5,n6,n7,prom;
}  nombres;
nombres E[30];
int k,j,i;

void main()
{
	
	//Leer los datos
    for(k=0;k<30;++k)
    {
		cout <<"Apellidos:   ";
		cin >> E[k].apellido;
	    cout <<"Nombre:   ";
        cin >> E[k].nombre;
        cout<<"Semestre:   ";
        cin >>E[k].semestre;
        cout<<"Correo electronico:   ";
        cin >>E[k].email;
        cout<<"Cedula:   ";
        cin >>E[k].cedula;
        cout<<"Nota 1:   ";
        cin >>E[k].n1;
        cout<<"Nota 2:   ";
        cin >>E[k].n2;
        cout<<"Nota 3:   ";
        cin >>E[k].n3;
        cout<<"Nota 4:   ";
        cin >>E[k].n4;
        cout<<"Nota 5:   ";
        cin >>E[k].n5;
        cout<<"Nota 6:   ";
        cin >>E[k].n6;
        cout<<"Nota 7:   ";
        cin >>E[k].n7;
	}
	// Calculos

    for(j=0; j<30;++j)
    {

		E[j].prom = E[j].n1*0.15 + E[j].n2*0.1 + E[j].n3*0.25 + E[j].n4*0.2 + E[j].n5*0.1+ E[j].n6*0.05 + E[j].n7*0.15;
	
	}

//  Falta la rutina de ordenar
// Reporte de 
}
