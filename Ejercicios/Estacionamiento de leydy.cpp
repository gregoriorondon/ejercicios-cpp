#include <iostream.h>
#include <windows.h>
#include <string.h>

struct estacionamiento
{
	int matricula;
	char marca[100],placa[10];
};

estacionamiento esta[200];

int hab=0,desha=0,i=0,n=0,j=0;
char opc,aux[10];

void despachar()
{
	do
	{
		system("cls");
		if(n==0)
		{
			cout<<endl<<endl<<"\t\tEstacionamiento 3 Esquinas "<<endl<<endl;
			cout<<"Debes Dar una cantidad de espacios disponibles"<<endl<<endl;
		}
		else
		{
			cout<<endl<<endl<<"\t\tEstacionamiento 3 Esquinas "<<endl<<endl;
			cout<<"Placa a Consultar ";
			cin.ignore();
			cin.getline(aux,10);
			for(j=0;j<n;j++)
			{
				if(strcmp(aux,esta[j].placa)==0)
				{
					cout<<endl<<"Placa Despachada"<<endl;
					strcpy(esta[j].placa,esta[j+1].placa);
					strcpy(esta[j].marca,esta[j+1].marca);
					esta[j].matricula=esta[j+1].matricula;
					hab++;	//espacios vacios
					desha--; //espacios ocupados
				}
			}

		}
		cout<<endl<<"Desea despachar otro ";
		cin>>opc;
	}while(opc=='s' || opc=='S');
	cin.get();
	cin.get();
}

void ocupados()
{
	system("cls");
	if(n==0)
	{
		cout<<endl<<endl<<"\t\tEstacionamiento 3 Esquinas "<<endl<<endl;
		cout<<"Debes Dar una cantidad de espacios disponibles"<<endl<<endl;
	}
	else
	{
		cout<<endl<<endl<<"\t\tEstacionamiento 3 Esquinas "<<endl<<endl;
		cout<<"Existen "<<desha<<" Espacios Ocupados"<<endl<<endl;
	}
	cin.get();
	cin.get();
}

void vacios()
{
	system("cls");
	if(n==0)
	{
		cout<<endl<<endl<<"\t\tEstacionamiento 3 Esquinas "<<endl<<endl;
		cout<<"Debes Dar una cantidad de espacios disponibles"<<endl<<endl;
	}
	else
	{
		cout<<endl<<endl<<"\t\tEstacionamiento 3 Esquinas "<<endl<<endl;
		cout<<"Existen "<<hab<<" Espacios Desocupados"<<endl<<endl;
	}
	cin.get();
	cin.get();
}

void buscar()
{
	do
	{
		system("cls");
		if(n==0)
		{
			cout<<endl<<endl<<"\t\tEstacionamiento 3 Esquinas "<<endl<<endl;
			cout<<"Debes Dar una cantidad de espacios disponibles"<<endl<<endl;
			opc='n';
		}
		else
		{
			cout<<endl<<endl<<"\t\tEstacionamiento 3 Esquinas "<<endl<<endl;
			cout<<"Placa a Consultar ";
			cin.ignore();
			cin.getline(aux,10);
			for(j=0;j<n;j++)
			{
				if(strcmp(aux,esta[j].placa)==0)
				{
					cout<<endl<<"Parque "<<esta[j].matricula<<endl;
					cout<<"Placa "<<esta[j].placa<<endl;
					cout<<"Marca "<<esta[j].marca<<endl;
				}
			}
		}
		cout<<endl<<"Buscar Otro Carro ";
		cin>>opc;
	}while(opc=='s' || opc=='S');
	
	cin.get();
	cin.get();
}

void registrar()
{
	opc='s';
	do
	{
		system("cls");
		if(opc=='s')
		{
			if(n==0)
			{
				cout<<endl<<endl<<"\t\tEstacionamiento 3 Esquinas "<<endl<<endl;
				cout<<"Debes Dar una cantidad de espacios disponibles"<<endl<<endl;
				opc='n';
			}
			else
			{
				if(desha==n)
				{
					cout<<endl<<endl<<"\t\tEstacionamiento 3 Esquinas "<<endl<<endl;
					cout<<"No hay espacio Disponible"<<endl<<endl;
					opc='n';
				}
				else
				{
					cout<<endl<<endl<<"\t\tEstacionamiento 3 Esquinas "<<endl<<endl;
					cout<<"Parqueado ";
					cin>>esta[i].matricula;
					cout<<"Matricula ";
					cin.ignore();
					cin.getline(esta[i].placa,100);
					cout<<"Marca ";
					cin>>esta[i].marca;
					cout<<endl<<"Entran mas carros ";
					cin>>opc;
					i++;
					hab--; //decremento la cantidad de puestos disponibles
					desha++;//Incremento los puestos ocupados
				}
			}
		}
		else
		{
			opc='n';
		}
	}while(opc=='s' || opc=='S');

	cin.get();
	cin.get();
}

void espacios()
{
	system("cls");
	if(n!=0)
	{
		cout<<endl<<endl<<"\t\tEstacionamiento 3 Esquinas "<<endl<<endl;
		cout<<"Ya existe un limite de carros ";
	}
	else
	{
		cout<<endl<<endl<<"\t\tEstacionamiento 3 Esquinas "<<endl<<endl;
		cout<<"Cantidad de Espacios en el Estacionamiento ";
		cin>>hab;
		n=hab;
	}
	cin.get();
	cin.get();
}

void main()
{
	do
	{
		system("cls");
		system("color 0a");
		cout<<endl<<endl<<"\t\tEstacionamiento 3 Esquinas "<<endl<<endl;
		cout<<"0. Cantidad de espacios en el estacionamiento"<<endl;
		cout<<"1. Registrar Carro Estacionado"<<endl;
		cout<<"2. Buscar Carro Estacionado"<<endl;
		cout<<"3. Espacios Vacios"<<endl;
		cout<<"4. Espacios Ocupados"<<endl;
		cout<<"5. Despachar Carro"<<endl;
		cout<<"6. Abandonar Sistema"<<endl<<endl<<endl<<endl<<endl;
		cout<<"\t\t";
		cin>>opc;
		if(opc=='0')
			espacios();
		if(opc=='1')
			registrar();
		if(opc=='2')
			buscar();
		if(opc=='3')
			vacios();
		if(opc=='4')
			ocupados();
		if(opc=='5')
			despachar();
	}while(opc!='6');
}