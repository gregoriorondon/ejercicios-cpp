/*una empresa x tiene un numero desconocido de vendedores, al final del mes dichos
vendedores realizan la facturacion de todas sus venta. se pide que realize un
programa que permita realizar lo siguiente:
1-) la comision(30%) que se debe pagar al vendedor,considerado que la venta mensual
deve ser mayor 1.000.000,00 Bs

2-) EL vendedor con mayor ventas*/
#include<iostream.h>
#include<process.h>
float vm[12],ma;
int opc,i=0,j=0;
char n[50],resp;
void registro()
{
	system("cls");
	cout<<"\t...:::Registro:::..."<<endl;
	cout<<endl;
	do
	{
		system("cls");
		cout<<"Nombre ";
		cin.getline(n,50);
		cin.getline(n,50);
		cout<<"Ventas mensual ";
		cin>>vm[i];
		cout<<endl;
		cout<<"\t\tDesea Registrar de nuevo s/n";
		cin>>resp;
		i++;
	}while(resp=='s' ||resp=='S');
	system("pause");
}
void ventas()
{
	if(vm[i]>1000000)
	{
		vm[i]=(vm[i] * 30)/100;
	}
	else
	{
		for(j=0;j<i;j++)
		{
			if(vm[j]>ma)
			{
				ma=vm[j];
			}
		}
	}
	system("cls");
	cout<<"\t\t...Las ventas mayores de "<<endl;
	cout<<n;
	cout<<"Sus ventas fueron de "<<ma;
	system("pause");
}
void main()
{
	system("cls");
	do
	{
		system("cls");
		cout<<"\t\t\t...:::Agro-Empresa:::..."<<endl;
		cout<<"1. Registro "<<endl;
		cout<<"2. Vendedor con mayor ventas"<<endl;
		cout<<"3. Salir"<<endl;
		cout<<"Opcion ";
		cin>>opc;
		if(opc==1)
			registro();
		if(opc==2)
			ventas();
	}while(opc!=3);
}

