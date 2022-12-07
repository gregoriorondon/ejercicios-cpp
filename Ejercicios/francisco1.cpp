/*2)_ Escribir un programa que lea un registro de arreglos (10) de números reales, y a continuación
encuentre el mayor y el menor elemento de la matriz y sus posiciones, y la media aritmética.*/

#include <stdio.h>
#include <iostream.h>
#include <windows.h>
struct Estudiante
{
	float nro;
};
Estudiante A[30];
int k,j,i;

void main()
{   
	//Leer los datos

	float mayor=0; float menor=999999;
    int pm=0,pn=0;
   
    for(k=0;k<10;++k)
    {
		cout<<"\nNumero:   ";
        cin>>A[k].nro;
        if(A[k].nro> mayor)
		{
			mayor=A[k].nro;
			pm=k+1;
		}
		if(A[k].nro< menor)
		{
			menor=A[k].nro;
			  pn=k+1;
		}
	}
		// Salida
	cout<<"\nEl Mayor = "    <<mayor;
	cout<<"\nPosicion Mayor" << pm;
	cout<<"\nEl Menor ="     << pn;
	cout<<"\nPosicion Menor "<<menor;
	cin.get();
	cin.get();
	
}