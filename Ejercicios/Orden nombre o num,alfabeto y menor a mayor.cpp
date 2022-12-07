/*metodo de ordenacion por burbuja para cadenas */
//#include "stdafx.h"
//#include<conio.h>
//#include<stdio.h>
//#include<stdlib.h>
#include<iostream.h>
#include<string.h>


void main()
{
	char arreglo[100][20];
	int numeromaxelementos;
	int primero, ultimo;
	
	int i,j;
	char aux[20];
	cout<<"nombres a ordenar (1-100): ";
	cin>>numeromaxelementos;
	for(i=0;i<numeromaxelementos;i++)
	{
		cout<<"proporcione el nombre Nº "<<(i+1)<<": ";
		cin>>arreglo[i];
	}
	
	for(i=(numeromaxelementos-1);i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			if(strcmp(arreglo[j],arreglo[j+1])>0)
			{
				strcpy(aux,arreglo[j]);
				strcpy(arreglo[j],arreglo[j+1]);
				strcpy(arreglo[j+1],aux);
			}
		}
	}
	
	cout<<"Los nombres quedaron ordenados asi: "<<endl;
	for(i=0;i<numeromaxelementos;i++)
	{
		cout<<arreglo[i]<<endl;
	}
	
	cin.get();cin.get();
	return;
}

 
 
