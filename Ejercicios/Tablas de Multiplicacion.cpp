/*ralizar un programa usando registro de arreglo que simule los siguientes calculos:
*tablas de multiplicar, restar, suma, y divicion,
*El promedio de cada uno de los resultados de las tablas(multiplicar, restar, suma, y divicion)
*mostrar todas las tablas*/ 

#include <iostream.h>
#include<string.h>
#include<windows.h>

struct tabla
{
	float numero;
	float med;
	float sum;
};

tabla TAB[256][256];

void Tabla();
void Tab_completa();
void Sumap();
void Restap();
void Multip();
void divip();
void suma();
void resta();
void multi();
void divi();

void main()
{
	system("color 1f");	
	char opc;
	while (opc!='5')
	{
	b:
	system ("cls");
	system ("color 1f");
	cout<<"\t\t\tMenu Calculadora.\n";
	cout<<"\n\t\t1.- Tablas.\n";
	cout<<"\n\t\t2.- Tabla completa.\n";
	cout<<"\n\t\t3.- Salir.\n";
	cout<<"\n\t\tOpcion: ";
	cin>>opc;

		switch (opc)
		{
		case '1':
			Tabla();
			break;
		case '2':
			Tab_completa();
			break;
		case '3':
			goto a;
			break;
		default:
			cout<<"\nERROR"<<endl;
			cout<<"Numero Equivocado\n"<<endl;
			system("pause");
			goto b;
		}
	}

a:
cout<<endl<<"\t\t\tFinalizado!...."<<endl;
cout<<endl<<"\t\tPresione enter para salir...."<<endl;
cin.get();
cin.get();

}

void Tabla()
{
	char opc;
	while (opc!='5')
	{
	b:

	cout<<"\t\t\tMenu Tablas.\n";
	cout<<"\n\t\t1.- Suma.\n";
	cout<<"\t\t2.- Resta.\n";
	cout<<"\t\t3.- Multiplicacion.\n";
	cout<<"\t\t4.- Divicion.\n";
	cout<<"\t\t5.- Salir.\n";
	cout<<"\n\t\tOpcion: ";
	cin>>opc;

		switch (opc)
		{
		case '1':
			Sumap();
			break;
		case '2':
			Restap();
			break;
		case '3':
			Multip();
			break;
		case '4':
			divip();
			break;
		case '5':
			goto a;
			break;
		default:
			cout<<"\nERROR"<<endl;
			cout<<"Numero Equivocado\n"<<endl;
			system("pause");
			goto b;
		}
	}

a:;

}
		
void Tab_completa()
{
	char opc;
	while (opc!='5')
	{
	b:
	system ("cls");
	cout<<"\t\t\tMenu Completas.\n";
	cout<<"\n\t\t1.- Suma.\n";
	cout<<"\t\t2.- Resta.\n";
	cout<<"\t\t3.- Multiplicacion.\n";
	cout<<"\t\t4.- Divicion.\n";
	cout<<"\t\t5.- Salir.\n";
	cout<<"\n\t\tOpcion: ";
	cin>>opc;

		switch (opc)
		{
		case '1':
			suma();
			break;
		case '2':
			resta();
			break;
		case '3':
			multi();
			break;
		case '4':
			divi();
			break;
		case '5':
			goto a;
			break;
		default:
			cout<<"\nERROR"<<endl;
			cout<<"Numero Equivocado\n"<<endl;
			system("pause");
			goto b;
		}
	}

a:;

}

void Sumap()
{
	TAB[1][1].sum=0;
	cout<<"Introduzca un numero: ";
	cin>>TAB[1][0].numero;
	for (int j=1;j<11;j++)
	{
		cout<<TAB[1][0].numero<<" + "<<j<<" = "<<TAB[1][0].numero+j<<endl;
		TAB[1][1].sum=TAB[1][1].sum+(TAB[1][0].numero+j);
	}
	TAB[1][2].med=TAB[1][1].sum/10;
	cout<<endl<<"La media de la tabla es: "<<TAB[1][2].med<<endl;
	system("pause");

}

void Restap()
{
	TAB[2][1].sum=0;
	cout<<"Introduzca un numero: ";
	cin>>TAB[2][0].numero;
	for (int j=1;j<11;j++)
	{
		cout<<TAB[2][0].numero<<" - "<<j<<" = "<<TAB[2][0].numero-j<<endl;
		TAB[2][1].sum=TAB[2][1].sum+(TAB[2][0].numero-j);
	}
	TAB[2][2].med=TAB[2][1].sum/10;
	cout<<endl<<"La media de la tabla es: "<<TAB[2][2].med<<endl;
	system("pause");
}

void Multip()
{
	TAB[3][1].sum=0;
	cout<<"Introduzca un numero: ";
	cin>>TAB[3][0].numero;
	for (int j=1;j<11;j++)
	{
		cout<<TAB[3][0].numero<<" * "<<j<<" = "<<TAB[3][0].numero*j<<endl;
		TAB[3][1].sum=TAB[3][1].sum*(TAB[3][0].numero*j);
	}
	TAB[3][2].med=TAB[3][1].sum/10;
	cout<<endl<<"La media de la tabla es: "<<TAB[3][2].med<<endl;
	system("pause");
}

void divip()
{
	TAB[4][1].sum=0;
	cout<<"Introduzca un numero: ";
	cin>>TAB[4][0].numero;
	for (int j=1;j<11;j++)
	{
		cout<<TAB[4][0].numero<<" / "<<j<<" = "<<TAB[4][0].numero/j<<endl;
		TAB[4][1].sum=TAB[4][1].sum+(TAB[4][0].numero/j);
	}
	TAB[4][2].med=TAB[4][1].sum/10;
	cout<<endl<<"La media de la tabla es: "<<TAB[4][2].med<<endl;
	system("pause");
}

void suma()
{
	for (int i=1;i<11;i++)
	{
		for (int j=1;j<11;j++)
		{
			cout<<i<<" + "<<j<<" = "<<i+j<<endl;
		}
		cout<<endl;
	}
	system("pause");
}

void resta()
{
	for (int i=1;i<11;i++)
	{
		for (int j=1;j<11;j++)
		{
			cout<<i<<" - "<<j<<" = "<<i-j<<endl;
		}
		cout<<endl;
	}
	system("pause");
}

void multi()
{	
	for (int i=1;i<11;i++)
	{
		for (int j=1;j<11;j++)
		{
			cout<<i<<" * "<<j<<" = "<<i*j<<endl;
		}
		cout<<endl;
	}
	system("pause");
}

void divi()
{
	for (float i=1;i<11;i++)
	{
		for (float j=1;j<11;j++)
		{
			cout<<i<<" / "<<j<<" = "<<i/j<<endl;
		}
		cout<<endl;
	}
	system("pause");
}
