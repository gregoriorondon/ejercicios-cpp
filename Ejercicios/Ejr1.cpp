#include <iostream.h>
#include <math.h>
#include <process.h>
#include <ctype.h>
#include <string.h>

void Programa2();
void Programa3();
void votante();
void salir();


void main()
{
	int opc;

		while (opc!=3)
		{
			system("cls");
			system("color f4");
			cout<<"\n\n\t\t\t1.-Programa de la empresa"<<endl;
			cout<<"\n\n\t\t\t2.-Programa de las elecciones"<<endl;
			cout<<"\n\n\t\t\t3.-Salir"<<endl;
			cin>>opc;

			if (opc==1)
				Programa2();
			if (opc==2)
				Programa3();
			if(opc==3)			
				goto a;
			
		}
		a:      
				system("cls");
				cout<<"\t!!!!ADIOS!!!!"<<endl;
				cout<<"\t\Hecho por:"<<endl;
				cout<<"****** Brice\244o Dioscar   ******"<<endl;
				cout<<"****** Fernandez Mariani ******"<<endl;
				cout<<"****** Pe\244a P. Maria A.  ******"<<endl;;
				cin.get();
				cin.get();
}

void Programa2()

{
	char opc=1;
	int tiempo, numbono=0, numaumen=0, numretiro=0;
	double sueldo, bono, porc, sueldoactual, sueldoretiro;
	

	while (opc!=3)
	{
		system("cls");
		cout<<"1.-Desea introducir los datos del trabajador?"<<endl;
		cout<<"2.-Desea imprimir los datos"<<endl;
		cout<<"3.-Desea salir?"<<endl;
		cout<<"Introduzca su opcion"<<endl;
		cin>>opc;
			switch (opc)
			{
			case '1':
				system("cls");
				cout<<"Introduzca el tiempo que lleva en la empresa"<<endl;
				cin>>tiempo;
				cout<<"Introduzca el sueldo del trabajador"<<endl;
				cin>>sueldo;
				if (tiempo<30)
				{
					bono=(sueldo*0.30);
					numbono=numbono+1;
				}
					if ((tiempo>=30)&&(tiempo<50))
					{
						porc=(sueldo*0.50);
						sueldoactual=sueldo+porc;
						numaumen=numaumen+1;
					}
						if (tiempo>=50)
						{
							sueldoretiro=sueldo*2;
							numretiro=numretiro+1;
						}
					
			break;
			case '2':
				system("cls");
				cout<<"El numero de trabajadores a los que se les va a dar bonos "<<numbono<<endl;
				cout<<"El numero de trabajadores a los que se les va a aumentar el sueldo "<<numaumen<<endl;
				cout<<"El numero de trabajadores que se van a retirar "<<numretiro<<endl;
				cin.get();
				cin.get();
			break;
			case '3':
				goto a;
			break;
			default:
				cout<<"!!!ERROR!!!. RANGO ESTABLECIDO 1-2";
			}

	}
a:;
cin.get();
}

void Programa3()
{
	
	char opc, cand;
	int numcanda=0, numcandb=0, numvn=0;
	
while (opc!=3)
{
b:
system("cls");
	cout<<"1.- Desea votar?"<<endl;
	cout<<"2.- Desea imprimir los votos?"<<endl;
	cout<<"3.- Desea salir?"<<endl;
	cout<<"Introduzca su opcion"<<endl;
	cin>>opc;

	switch (opc)
	{
	case '1':
		system("cls");
		cout<<"Por quien desea votar?"<<endl;
		cout<<"\t****A****"<<endl;
		cout<<"\t****B****"<<endl;
		cin>>cand;
		
		if ((cand=='a')||(cand=='A'))
		{
			numcanda=numcanda+1;
		}
		if ((cand=='b')||(cand=='B'))
		{
			numcandb=numcandb+1;
		}
		if (((cand!='a')&&(cand!='A'))&&((cand!='b')&&(cand!='B')))
		{
			cout<<"***VOTO NULO***"<<endl;
			numvn=numvn+1;
		}
		goto b;
	
	case '2':
		system("cls");
		
		cout<<"El candidato A obtuvo "<<numcanda<<endl;
		cout<<"El candidato B obtuvo "<<numcandb<<endl;
		cout<<"El numero de votos nulos es de "<<numvn<<endl;
		if (numcanda>numcandb)
		{
			cout<<"el ganador es el candidato:...... A con "<<numcanda<<" votos"<<endl;
		}
		if (numcanda<numcandb)
		{
			cout<<"el ganador es el candidato:...... B con "<<numcandb<<" votos"<<endl;
		}
		if (numcanda==numcandb)
		{
			cout<<"Hay un empate"<<endl;
		}
		system("pause");
		
	break;
	
	case '3':
		cout<<"****ADIOS****"<<endl;
		goto a;
	break;
	}
}
a:;
cin.get();
}