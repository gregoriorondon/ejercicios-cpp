#include <iostream.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#define n 3 

struct nevera
{
	char codigo[20];
	char descripcion[100]; 
};

struct pila
{
	int tope;
	nevera lista[n];

};

struct empresa
{
	char nombre[30];
	int numero;

};

struct cola
{

	int pi;
	int pf;
	empresa listac[n];

};

int inicio(pila *p,cola *c)
{
	p->tope=-1;
	c->pf=-1;
	c->pi=0;
	return 0;
}

void insertar_pila(pila*p)
{
	system ("cls");

	if(p->tope==n-1)
	{
			cout<<"Pila llena"<<endl;
			cin.get();
			cin.get();
			goto b;
			 }
	else
	{	
			p->tope++;
			cout<<"introduzca el codigo de la nevera"<<endl;
			cin.ignore();
			cin.getline (p->lista[p->tope].codigo,20);
			cout<<"ingrse la descripcion de la nevera"<<endl;
			cin.getline(p->lista[p->tope].descripcion,100);
			cout<<"Nevera:"<<p->tope+1<<endl;
			cout<<"codigo:"<<p->lista[p->tope].codigo<<endl;
			cout<<"Descripcion:"<<p->lista[p->tope].descripcion<<endl;
			cout<<"Nevera Insertada en Deposito"<<endl;
	}
b:
	cin.get();
	cin.get();


}

void mostrar_pila(pila *p)
{
	system ("cls");

	if (p->tope==-1)
	{
		cout<<"pila vacia"<<endl;
		cin.get();
		cin.get();
		goto b;
	}
	else
	{
		for (int i=0;i<=p->tope;i++)
		{
			cout<<"Nevera:"<<i+1<<endl;
			cout<<"Codigo:"<<p->lista[i].codigo<<endl;
			cout<<"Descripcion:"<<p->lista[i].descripcion<<endl;
		}
	}
b:
	cin.get();
	cin.get();
}

void insertar_cola(cola *c)
{
	system("cls");
	if(c->pf==n-1)
	{
		cout<<"cola llena"<<endl;
		cin.get();
		cin.get();
		goto b;
	}
	else
	{
		c->pf++;
		cout<<"ingrese el nombre de la empresa"<<endl;
		cin.ignore();
		cin.getline(c->listac[c->pf].nombre,30);
		cout<<"ingrese el numero de neveras a comprar:"<<endl;
		cin>>c->listac[c->pf].numero;
		cout<<"Empresa:"<<c->listac[c->pf].nombre<<endl;
		cout<<"Numero de neveras:"<<c->listac[c->pf].numero<<endl;
		cout<<"Empresa en la cola"<<endl;
}
b:
cin.get();
cin.get();
}


void mostrar_cola (cola * c)
{
	system("cls");
	if((c->pf==-1)||(c->pf<c->pi))
	{
		cout<<"cola vacia"<<endl;
		cin.get();
		cin.get();
		goto b;
	}
	else 
	{
		for (int i=c->pi;i<=c->pf;i++)
		{
			cout<<"Nombre de la empresa:"    <<c->listac[i].nombre<<endl;
			cout<<"Numero de Neveras a comprar:"    <<c->listac[i].numero<<endl;

		}
	}
b:
	cin.get();
	cin.get();

}

void vender (pila *p, cola * c)
{
	system("cls");
	if(p->tope==-1)
	{
		cout<<"Pila Vacia "<<endl;
		cin.get();
	}
	else
	{	
		if((c->pf==-1) || (c->pf<c->pi))
		{
			cout<<"Cola Vacia"<<endl;
			cin.get();
			goto b;
		}
		else
		{
			cout<<endl<<"Nombre de la Empresa: "<<c->listac[c->pi].nombre<<endl;
			cout<<endl<<"Numero de Neveras a Vender: "<<c->listac[c->pi].numero<<endl;
			cout<<endl<<"Codigo de las Nevera: "<<endl;
			
			for(int i=0;i<c->listac[c->pi].numero;i++)
			
				if (p->tope!=-1)
				{
					cout<<p->lista[i].codigo<<endl;
				}
				else{
					cout<<endl<<"No hay Neveras"<<endl;
					cin.get();
					goto b;
				}
			for(i=0;i<c->listac[c->pi].numero;i++)
			{
				if (p->tope!=-1)
				{
					strcpy(p->lista[i].codigo,p->lista[i+1].codigo);
					strcpy(p->lista[i].descripcion,p->lista[i+1].descripcion);
					p->tope--;
					cout<<endl<<"V E N D I D A "<<endl;
				}
				else
				{
					cout<<endl<<"No hay Neveras"<<endl;
					cin.get();
					goto b;
				}
			}
			strcpy(c->listac[c->pi].nombre,c->listac[c->pi+1].nombre);
			c->listac[c->pi].numero=c->listac[c->pi].numero;
			c->pi++;
		}
	}
b:		
cin.get();
cin.get();
}

void main()
{

	pila p;
	cola c;
	inicio(&p,&c);
	char opc;
	do{
		system("cls");
		system("color 1a");
		for (int i=0;i<80;i++)
			cout<<"Í";
		cout<<"SISTEMA PRINCIPAL"<<endl;
		for(i=0;i<80;i++)
			cout<<"Í";
		cout<<"1. introduicr nevera"<<endl;
		cout<<"2. mostrar deposito"<<endl;
		cout<<"3. insertar datos de la empresa"<<endl;
		cout<<"4. mostrar lista de empresas"<<endl;
		cout<<"5. veneder neveras"<<endl;
		cout<<"6. salir"<<endl;
		cout<<"Introduzca su opcion"<<endl;
		cin>>opc;

		if (opc=='1')
			{
				system("cls");
				insertar_pila(&p);
		
			}

		if (opc=='2')
			{
				system("cls");
				mostrar_pila(&p);
		
				}
		if (opc=='3')
			{
				system("cls");
				insertar_cola(&c);
		
				}
		if (opc=='4')
			{
				system("cls");
				mostrar_cola(&c);
		
				}
		if (opc=='5')
			{
				system("cls");
				vender(&p,&c);
		
			}


	}while(opc!=6);

	cout<<"Terminado"<<endl;
	cout<<"hecho por"<<endl;
	cout<<" Brice\2442o dioscar"<<endl;
	system("pause");
	cin.get();
	cin.get();
}