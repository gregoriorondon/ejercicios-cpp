/* La empresa "xyz" es distribuidora de los productos A,B,C dichos productos llegan de la 
fabrica principal de uno en uno, la empresa para distribuirlos maneja la politica de que el
primero que entra al deposito es el primero q debe distribuirse. se venden aproximadamente
100 productos mensuales. el dueño desea conocer:
	1-) los productos q se encuentran en el negocio.
	2-) El producto mas vendido.
	3-) El lugar del deposito donde se ubica el ultimo q llego producto q llego de la fabrica.(direccion de Memoria)


  ...Se quiere mostrar un pequeño reporte con la informacion que debe aparecer en un menu de
  opciones....  */

#include <iostream.h>
#include <process.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	char producto[100];
	int pi;
	int pf;
	int j;

}cola;
char x;
int i;

int opc;
	int a;
	int b;
	int c;
void crear_pila(cola *i)
{
	i->pf=-1;		i->pi=0;
}
void ingresar(cola *i)
{
	system("cls");
	if(i->pf==99)
	{
		cout<<"Cola Llena"<<endl;
		cin.get();cin.get();
	}
	else
	{
		i->pf++;
		i->producto[i->pf]=x;
	}
	cin.get();

}

void negocio (cola *i)
{
	system("cls");
	cout<<"\t\tTotal Productos  "<<endl;
	cout<<endl;
	cout<<"\tA\tB\tC"<<endl;
	cout<<endl;
	cout<< "\t" <<a<< "\t" <<b<< "\t" <<c<<endl;
	cin.get();cin.get();
}
void vendido(cola *i)
{
	system("cls");
			cout<<"\t\t\tProducto mas vendido"<<endl;
	if((a>b)&&(a>c))
	{
		cout<<endl;
		cout<<"Producto mas Vendido A con "<<a;
	}
	else
	{
		if((a<b)&&(b>c))
		{
			cout<<endl;
			cout<<"Producto mas Vendido B con "<<b;
		}
		else
		{
			if((a<b)&&(b<c))
			{
				cout<<endl;
				cout<<"Producto mas Vendido C con "<<c;
			}
			else
			{
				cout<<endl;
				cout<<"Existe Un empate"<<endl;
				cin.get();
				
			}

		}
	}
	cin.get();cin.get();
}
void depositos(cola *i)
{
	system("cls");
	if(i->pf==-1)
	{
		cout<<"Cola Vacia"<<endl;
	}
	else
	{
		cout<<" valor "<<i->pf<<" hp"<<endl;
		cout<<endl;
	}
	cin.get();
	cin.get();


}
void main()
{
	cola i;
	crear_pila(&i);

	do
	{
		system("color 9a");
		system("cls");
		cout<<"\t\t\t*******Empresa XYZ**************"<<endl;
		cout<<endl;
		cout<<"1. Ingresar Producto"<<endl;
		cout<<"2. Productos en el negocio"<<endl;
		cout<<"3. El producto mas vendido"<<endl;
		cout<<"4. Depositos"<<endl;
		cout<<"5. Salir"<<endl;
		cout<<"Opcion "<<endl;
		cin>>opc;
		if(opc==1)
		{
			system("cls");
			cout<<" \t\t\tRegistro Productos "<<endl;
			cout<<endl;
			cout<<"\tA\tB\tC"<<endl;
			cin>>x;
			
			if(x=='a'||x=='A')
				a=a+1;
			
			if(x=='b'||x=='B')
				b=b+1;
			
			if(x=='c'||x=='C')
				c=c+1;
			
			ingresar(&i);
		}

		
		if(opc==2)
			negocio(&i);
		
		if(opc==3)
			vendido(&i);
		
		if(opc==4)
		
			depositos(&i);
	
	}while(opc!=5);


system ("pause");


cout<<"*******************************************"<<endl;
cout<<"realizado por"<<endl;
cout<<endl;
cout<<"Brice\244o Dioscar "<<endl;
cout<<"Saez Carmen"<<endl;
cout<<"Jose Daboin"<<endl;
cout<<"*******************************************"<<endl; 

cin.get();

cin.get();
}