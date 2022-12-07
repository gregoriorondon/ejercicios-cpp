#include<iostream.h>
#include <stdlib.h>
#include <stdio.h>
#include <process.h>

#define n 3

typedef struct
{
int lista[n];
int tope;
int j;
}pila;

void crearpila(pila *p)
{
	p->tope=-1;
}

void inser(pila *p)
{
	if(p->tope==n-1)
	{		
		cout<<endl;
		cout<<"no hay espacios en la cola simulada"<<endl;
		cout<<endl;
	}
	else
	{
		cout<<endl;cout<<endl;
		p->tope++;
		cout<<"introduzca numero entero:"<<endl;
		cin>>p->lista[p->tope];
	}
	cin.get();
}

void elim(pila *p1,pila *p2)
{
	for(int i=0;i<p1->tope;i++)
	{
		p2->tope++;
		p2->lista[p2->tope]=p1->lista[p1->tope];
		p1->tope--;
	}
	p1->tope=-1;
	for(i=0;i<=p2->tope;i++)
	{
		p1->tope++;
		p1->lista[p1->tope]=p2->lista[p2->tope];
		p2->tope--;
	}
	cout<<"Elemento Eliminado"<<endl;

cin.get();
cin.get();
}
void most(pila *p)
{
	cout<<"Lista: ";
	for(int i=0;i<=p->tope;i++)
		cout<<p->lista[i]<<" ";
	cout<<endl;
cin.get();
cin.get();
}

void main()
{                      
	pila p1, p2;
	crearpila(&p1);
	crearpila(&p2);
	char opc;
	do{
		system("cls");
	cout<<"Menu Principal"<<endl;
	cout<<"1. insertar"<<endl;
	cout<<"2. eliminar"<<endl;
	cout<<"3. mostrar"<<endl;
	cout<<"0. salir"<<endl;
	cout<<"opcion: ";
	cin>>opc;
	switch (opc)
	{
		case '1':
			system("cls");
			inser(&p1);
			break;
		case '2':
			system("cls");
			
			elim(&p1,&p2);
			break;
		case '3':
			system("cls");
			most(&p1);
			break;
		case '0':
			goto a;
			break;
		default:
			cout<<"ERROR    Rango(1-3)"<<endl;
	}
	}
	while(opc!='0');

a:
cin.get();
cin.get();
}


