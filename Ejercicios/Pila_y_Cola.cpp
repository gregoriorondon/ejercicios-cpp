#include<iostream.h>
#include<stdlib.h>

#include<stdio.h>
# define n 4

typedef struct
{
	int lista[4];
	int tope;

}
Pila;
void crearpila(Pila* p)
{
	p->tope=-1;
}
void insertarpila(Pila* p, int y)
{
	if (p->tope==n)
		cout<<"pila llena"<<endl;
	else
	{
		p->tope++;
	p->lista[p->tope]=y;
	}
}

bool p_llena(Pila*p)
{
	if(p->tope==n)
		
		return true;

	else
		return false;
}

bool p_vacia (Pila*p)
{
	if (p->tope==-1)
		
		return true;
	else
		return false;

}

void eliminar(Pila *p,int y)
{
	if(p->tope==-1)
		cout<<"PIla Vacia"<<endl;

		
		else{
	
	cout<<"Valor a eliminar="<<p->lista[p->tope];
	y= p->lista[p->tope];
	p->tope--;

	}
}


void mostrar(Pila *p)
{
	if (p->tope==-1){
		cout<<endl<<"\n\nPila Vacia"<<endl;
		system("pause");
	}else
	{

	for (int i=0;i<=p->tope;i++)
		cout<<""<<p->lista[i];
	cout<<endl;
	system("pause");
	}
}



void main()
{
	Pila p;
	int x;
	int i=0;
	char opc;
	crearpila(&p);
	do{	
	
		p_llena(&p);
		p_vacia(&p);
       system ("pause");
	   system ("cls");
		cout<<"menu pila"<<endl;
		cout<<"1. insertar pila"<<endl;
		cout<<"2.eliminar"<<endl;
		cout<<"3. mostrar"<<endl;
		cout<<"opcion"<<endl;
		cin>>opc;
	   
if (opc=='1')
{

   cout<<"Ingrese un Valor entero: ";
		cin>>x;
		insertarpila(&p,x);
	
	cout<<""<<&p;
}
	   
	if (opc=='2')
	
	{	
		eliminar (&p,x);
	
	}

if (opc=='3')
{
   	mostrar (&p);	
	
}

i++;
cout<<endl<<"desea continuar";
cin>>opc;
	}
	while((opc=='s')&&(i<n));
	cin.get();
	cin.get();
}