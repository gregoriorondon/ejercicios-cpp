/*Hacer un algoritmo quue llene una matriz de 7*7. Calcular la suma de cada renglon y almacenarla en
un vector, la suma de cada columna y almacenarla en otro vector.*/

#include <iostream.h>

#define n 7

void suma();

float mat[n][n], vc[n], vf[n];

void main()
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"Introduzca un numero: ";
			cin>>mat[i][j];
		}
	}
	
	suma();
	cout<<endl<<"Matriz Ingrasada: \n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<mat[i][j]<<" ";
		}cout<<endl;
	}
	cout<<endl<<"Vector Suma de Columnas: ";
	for(i=0;i<n;i++)
	{
		cout<<vc[i]<<" ";
	}
	cout<<endl<<"Vector Suma de Filas: ";
	for(i=0;i<n;i++)
	{
		cout<<vf[i]<<" ";
	}
	
cin.get();
cin.get();
}

void suma()
{
	int i,j;
	for(i=0;i<n;i++)
	{
		vc[i]=0;
		vf[i]=0;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			vf[i]+=mat[i][j];
			vc[i]+=mat[j][i];
		}
	}

}