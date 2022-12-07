/*Hacer un algoritmo que llene una matriz 10*10 y determine la posicion 
[fila,columna] del numero mayor almacenado en la matriz. Los numeros son diferentes*/
#include <iostream.h>

#define n 10

void MAY(float, int, int);

float Mat[n][n];

void main()
{
	int i,j, fil, col;
	float may=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"Introduzca un Numero: ";
			cin>>Mat[i][j];
			if(Mat[i][j]>may)
			{
				may=Mat[i][j];
				fil=i;
				col=j;
			}
		}
	}
	MAY(may,fil,col);

cin.get();
cin.get();
}
void MAY(float Num,int F,int C)
{
	int i,j;
	cout<<endl<<"Matriz incertada:"<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<Mat[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl<<"El elemento mayor es "<<Num<<" en Posicion ["<<F<<"]["<<C<<"]"<<endl;
}
