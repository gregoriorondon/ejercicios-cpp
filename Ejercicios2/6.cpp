/*Diseñe un algoritmo que lea dos vectores A y B de 20 elementos cada uno 
y multiplique el pirmer elemento de A con el ultimo elemento de B y luego
el segundo elemento de A por el diecinueveavo de B y asi sucesivamente hasta 
llegar al veinteavo elemento de A por el primer elemento de B. El resultado 
almacenerlo en en un vector C.*/
#include <iostream.h>

#define n 20

void suma();

float A[n],B[n],C[n];

void main()
{
	int i;
	cout<<"Vector A:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"Insertar un numero: ";
		cin>>A[i];
	}
	cout<<"\nVector B:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"Insertar un numero: ";
		cin>>B[i];
	}
	suma();
	cout<<"\nVector A: ";
	for(i=0;i<n;i++)
	{
		cout<<A[i]<<" ";
	}
	cout<<"\nVector B: ";
	for(i=0;i<n;i++)
	{
		cout<<B[i]<<" ";
	}
	cout<<"\nA * B: ";
	for(i=0;i<n;i++)
	{
		cout<<C[i]<<" ";
	}

cin.get();
cin.get();
}
void suma()
{
	int i,aux=n-1;
	for(i=0;i<n;i++)
	{
		C[i]=A[i]*B[aux];
		aux--;	
	}

}