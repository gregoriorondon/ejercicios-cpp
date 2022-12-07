/*1.) Hacer un programa que registre 100 números en un array en un dimensión y
 luego  mostrar los elementos que cotiene números impares.

2.) hacer un programa que regristre 150 números en un array y luego
      muestre los múltiplos de 3 ó 5 ó 7.

Utilizar:

Funciones, Arreglos, Estructuras de Control y Repetición, y ademas ubicar los 
dos programas en uno solo por medio de un menu.*/


#include<iostream.h>
#include<math.h>
#include<windows.h>
# include <process.h>
int opc;
int i=0;
int imp[100];
int m[150];
void impares();
void multiplos();
void impar2();
void multiplos2();
void main()
{
	system ("color 9b");
	system("cls");
	do
	{
		cout<<"\t\t\t...::::MENU PRINCIPAL::::..."<<endl;
		cout<<"1. Numeros impares"<<endl;
		cout<<"2. Multiplos de <3> <5> <7>"<<endl;
		cout<<"3. Salir"<<endl;
		cout<<"Elija su opcion";
		cin>>opc;
		if(opc==1)
		{
			impares();
			system("cls");
		}
		if(opc==2)
		{
			multiplos();
			system("cls");
		}
	}while(opc!=3);
}
void impares()
{
	system("cls");
	for(i=0;i<100;i++)
	{
		cout<<"Ingrese el "<<i+1<<" Numero "<<endl;
		cin>>imp[i];
	}
	impar2();
	cin.get();	
}
void impar2()
{
	system("cls");
	cout<<"Numeros Impares: "<<endl;
	for(i=0;i<100;i++)
	{	
		if(fmod(imp[i],2)!=0)
		{
			cout<<""<<imp[i]<<endl;
		}
		else
		{
			cout<<imp[i]<<" No es impar"<<endl;
		}
	}
	
	cin.get();
}

void multiplos()
{
	system("cls");
	for(i=0;i<150;i++)
	{
		cout<<"Ingrese el "<<i+1<<" multiplo "<<endl;
		cin>>m[i];
	}
	multiplos2();
	cin.get();
}
void multiplos2()
{
	system("cls");
	cout<<"...:::Multiplos :::..."<<endl;
	for(i=0;i<150;i++)
	{
		cout<<m[i]<<" Es multiplo de "<<endl;
		if(fmod(m[i],7)==0)
		{
			cout<<"\t"<<"7"<<endl;
		}
		if(fmod(m[i],5)==0)
		{
			cout<<"\t"<<"5"<<endl;
		}
		if(fmod(m[i],3)==0)
		{
			cout<<"\t"<<"3"<<endl;
		}
	}
	cin.get();
}