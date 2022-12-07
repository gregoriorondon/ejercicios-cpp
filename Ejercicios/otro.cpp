#include<iostream.h>
#include<process.h>
#include<windows.h>

struct empleado
{
	char nombre[25];
	
	
	float sueldo_base;
	
	
};
int i=0;
int resp;
float sueldo_base;
empleado emplea[100];

float SF;
float Bm; 
float Ss; 
float LPH;
float Pf;

void ingresar();
void imprimir();
void main()
{
	system("cls");
	system("color 0a");
	do
	{
		
		cout<<"\t\tNOMINA DE EMPRESA AB"<<endl;
		cout<<"1. Ingresar datos"<<endl;
		cout<<"2. Imprimir datos"<<endl;
		cout<<"3. Salir del sistema"<<endl;
		cout<<"Ingrese su opcion ";
		cin>>resp;
		if(resp==1)
		{
			ingresar();
			system("cls");
		}
		if(resp==2)
		{
			imprimir();
			system("cls");
		}
		if(resp==3)
			cout<<"Adios";
	}while(resp!=3);
		cin.get();
		cin.get();
}
void ingresar()
{
	system ("cls");
	char opc;
	do
	{
		cout<<"Ingrese el nombre del empleado ";
		cin.getline(emplea[i].nombre,25);
		cin.getline(emplea[i].nombre,25);	
		cout<<"ingrese el sueldo base"<<endl;
		cin>> emplea[i].sueldo_base;		
	
		
		
		Bm= emplea[i]. sueldo_base*0.20;
		Ss= emplea[i]. sueldo_base*0.10;
		LPH=emplea[i]. sueldo_base*0.03;
		Pf=emplea[i].sueldo_base*0.01; 		
		SF=emplea[i].sueldo_base - (Ss+LPH+Pf)+(Bm);
		
		
		
		cout<<"Desea de nuevo s/n "<<endl;
		cin>>opc;
		i++;
	
	}while(opc=='s' || opc=='S');
	
	cin.get();

}
void imprimir()
{
	system ("cls");
	
	

		cout<<"el sueldo final es:"<<SF<<endl;	
		cout<<"el bono mensual es:"<<Bm<<endl;
		cout<<"el seguro social es:"<<Ss<<endl;
		cout<<"La LPH  es:"<<LPH<<endl;
		cout<<"el paro forzo es:"<<Pf<<endl;
	
	

	cin.get();
	cin.get();
}