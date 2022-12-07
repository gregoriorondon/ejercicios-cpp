/*ralizar un programa usando registro de arreglo que simule los siguientes calculos:
*tablas de multiplicar, restar, suma, y divicion,
*El promedio de cada uno de los resultados de las tablas(multiplicar, restar, suma, y divicion)
*mostrar todas las tablas*/ 

#include <iostream.h>
#include<string.h>
#include<process.h>

struct tabla
{
	float numero;
	float med;
	float sum;
};

tabla TAB[256][256];

void Tabla();
void Tab_completa();

void suma();
void resta();
void multiplicacion();
void division();

void suma_s();
void resta_r();
void multi_m();
void divi_d();


void Tabla()
{
	system("cls");
	char opc;

	cout<<endl;
	cout<<"\t\t\t\tMENU DE TABLAS\n";
	cout<<"\t\t\t\t=============="<<endl<<endl;
	cout<<"\n\t\t\t1.- Suma\n";
	cout<<"\t\t\t2.- Resta\n";
	cout<<"\t\t\t3.- Multiplicacion\n";
	cout<<"\t\t\t4.- Division\n";
	cout<<"\t\t\t5.- Regresar al Menu Principal\n";
	cout<<"\n\t\t\tOpcion: ";
	cin>>opc;

	if(opc=='1')
	{
		suma();
		cin.get();
	}
	if(opc=='2')
	{
		resta();
		cin.get();
	}
	if(opc=='3')
	{
		multiplicacion();
		cin.get();
	}
	if(opc=='4')
	{
		division();	
		cin.get();
	}
	if(opc=='5')
	{
		void main();
	}
}
		
void Tab_completa()
{
	system ("cls");
	char opc;
	cout<<endl;
	cout<<"\t\t\t\t TABLAS COMPLETAS\n";
	cout<<"\t\t\t\t ================"<<endl<<endl;
	cout<<"\n\t\t\t1.- Suma\n";
	cout<<"\t\t\t2.- Resta\n";
	cout<<"\t\t\t3.- Multiplicacion\n";
	cout<<"\t\t\t4.- Division"<<endl;
	cout<<"\t\t\t5.- Regresar al Menu Principal\n"<<endl<<endl;
	cout<<"\n\t\t INGRESE OPCION: ";
	cin>>opc;

	if(opc=='1')
	{
		suma_s();
		cin.get();
	}
	if(opc=='2')
	{
		resta_r();
		cin.get();
	}
	if(opc=='3')
	{
		multi_m();
		cin.get();
	}
	if(opc=='4')
	{
		divi_d();	
		cin.get();
	}
	if(opc=='5')
	{
		void main();
	}
}

void suma()
{
	system("cls");
	TAB[1][1].sum=0;
	cout<<" Introduzca Numero Para La Tabla: ";
	cin>>TAB[1][0].numero;cout<<endl<<endl;
	for (int j=1;j<11;j++)
	{
		cout<<"    "<<j+1<<TAB[1][0].numero<<" + "<<j<<" = "<<TAB[1][0].numero+j<<endl;
		TAB[1][1].sum=TAB[1][1].sum+(TAB[1][0].numero+j);
	}
	TAB[1][2].med=TAB[1][1].sum/10;
	cout<<endl<<"\tLa Media De La Tabla Es: "<<TAB[1][2].med<<endl;

}

void resta()
{
	system("cls");
	TAB[2][1].sum=0;
	cout<<" Introduzca Numero Para La Tabla: ";
	cin>>TAB[2][0].numero;
	for (int j=1;j<11;j++)
	{
		cout<<TAB[2][0].numero<<" - "<<j<<" = "<<TAB[2][0].numero-j<<endl;
		TAB[2][1].sum=TAB[2][1].sum+(TAB[2][0].numero-j);
	}
	TAB[2][2].med=TAB[2][1].sum/10;
	cout<<endl<<"\tLa Media De La Tabla Es: "<<TAB[2][2].med<<endl;
}

void multiplicacion()
{
	system("cls");
	TAB[3][1].sum=0;
	cout<<" Introduzca Numero Para La Tabla: ";
	cin>>TAB[3][0].numero;
	for (int j=1;j<11;j++)
	{
		cout<<TAB[3][0].numero<<" * "<<j<<" = "<<TAB[3][0].numero*j<<endl;
		TAB[3][1].sum=TAB[3][1].sum*(TAB[3][0].numero*j);
	}
	TAB[3][2].med=TAB[3][1].sum/10;
	cout<<endl<<"\tLa Media De La Tabla Es: "<<TAB[3][2].med<<endl;
}

void division()
{
	system("cls");
	TAB[4][1].sum=0;
	cout<<" Introduzca Numero Para La Tabla: ";
	cin>>TAB[4][0].numero;
	for (int j=1;j<11;j++)
	{
		cout<<TAB[4][0].numero<<" / "<<j<<" = "<<TAB[4][0].numero/j<<endl;
		TAB[4][1].sum=TAB[4][1].sum+(TAB[4][0].numero/j);
	}
	TAB[4][2].med=TAB[4][1].sum/10;
	cout<<endl<<"\tLa Media De La Tabla Es: "<<TAB[4][2].med<<endl;
}

void suma_s()
{
	system("cls");
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

void resta_r()
{
	system("cls");
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

void multi_m()
{
	system("cls");
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

void divi_d()
{
	system("cls");
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

void main()
{
	char opc;
	do
	{
		system ("cls");
		
		system("color 0a");	
		cout<<endl;
		cout<<"\t\t\t\t TABLAS MATEMATICAS\n";
		cout<<"\t\t\t\t =================="<<endl<<endl;
		cout<<"\n\t\t\t1.- Tipos de Tablas"<<endl;
		cout<<"\n\t\t\t2.- Tablas Completas\n";
		cout<<"\n\t\t\t3.- Salir Del Programa"<<endl<<endl;
		cout<<"\n\t\t Ingrese Opcion: ";
		cin>>opc;

		if(opc=='1')
		{
			Tabla();
			cin.get();
		}
		if(opc=='2')
		{
			Tab_completa();
			cin.get();
		}
	}while(opc!='3');
}


		
