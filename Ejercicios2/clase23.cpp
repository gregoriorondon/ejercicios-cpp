/* Estructura con parametros*/
// estruc.cpp

# include <iostream.h>
# include <process.h>



struct infpersona
system(")
{
	char nombre[30];
	char calle[50];
	char ciudad[20];
	char provincia[25];
	char codigo_postal[5];
};
	infpersona datos;
void verinfo (infpersona) 
{
	cout<<datos.nombre<<endl;
	cout<<datos.calle<<endl;
	cout<<datos.provincia<<endl;
	cout<<datos.codigo_postal<<endl;

	cin.get();
	cin.get();
}


void insertar (infpersona )
{
	cout<<"ingrese nombre";
	cin>>datos.nombre;
	cout<<"ingres calle";
	cin>> datos.calle;
	cout<<"ingrese la ciudad";
	cin>> datos.ciudad;
	cout<<"ingrese el codigo postal";
	cin>> datos.codigo_postal;
	
	cin.get();
	cin.get();
}

void main ()
{
	int opc;
	do
	{cout<<"estructuras con parametros"<<endl;
	cout<<"1.Insertar datos"<<endl;
	cout<<"2. ver informacion de los datos"<<endl;
	cout<<"3.salir"<<endl;
	cout<<"ingrese su opcion"<<endl;
	cin>> opc;

	if (opc==1)
		insertar(datos);
	if(opc==2)
		verinfo(datos);
	if(opc==3)
		cout<<"usted ha terminado con el programa";

	}while (opc!=3);

	cin.get();
	cin.get();
}
	
