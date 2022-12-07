/*Elabore un algoritmo que calcule el sueldo base de un trabajador así como el sueldo total al 
mes, tomando en cuenta los siguientes requerimientos:

El valor de una hora de trabajo es de 7000,00 Bs.
El valor de una hora extra es de dos veces una hora de trabajo
El valor de la hora extra nocturna es de dos veces y media hora de trabajo
La escala de sueldos es la siguiente:
Un gerente gana por hora 3 veces el valor de una hora de trabajo.
Un empleado administrativo gana por hora 2 veces el valor de una hora de trabajo.
Un empleado obrero gana por hora una hora de trabajo.
La deducción por ley política habitacional es de 10% del total del sueldo base.
La deducción por seguro social obligatorio es de 15% del total del sueldo base.
Las bonificaciones son del 20% sobre las horas extras trabajadas.
La deducción para caja de ahorro es de 15% del total del sueldo.
Nota: Para la elaboración de este algoritmo, deberán utilizar Estructura Condicional, Estructuras
Repetitivas, Arreglos, Funciones, Validaciones.

Pueden consultar, en internet los siguientes modulos:

Insertar, Modificar, Eliminar, Buscar. */

#include <iostream.h>
#include <math.h>
#define (int ht=7000)
#define (int he=14000)
#define (int hne=17500)

char nombre[100][100];

void gerente();
void obrero();
void administrativo();
void salir();
void insertar();
void modificar();
void eliminar();
void buscar();
void calcular1();
void calcular2();
void calcular3();


void main()
{
	cout<<Menu;
	cout<<1. Gerente;
	cout<<2. Administrativo;
	cout<<3. Obrero;
	cout<<4. Salir
	cout<<Int. su opcion: ;
	cin>>opc;

	if(opcc=='1')
		gerente();
	if(opcc=='2')
		administrativo();
	if(opcc=='3')
		obrero();
	if(opcc=='4')
		Salir();
}

void gerente()
{
	cout<<Menu;
	cout<<1. Insertar Datos;
	cout<<2. Modificar Datos;
	cout<<3. Eliminar Datos;
	cout<<4. Calcular Sueldo;
	cout<<5. Salir
	cout<<Int. su opcion: ;
	cin>>opc;

	if(opcc=='1')
		insertar();
	if(opcc=='2')
		modificar();
	if(opcc=='3')
		eliminar();
	if(opcc=='4')
		calcular1();
	if(opcc=='5')
		Salir();
}
void obrero()
{
	cout<<Menu;
	cout<<1. Insertar Datos;
	cout<<2. Modificar Datos;
	cout<<3. Eliminar Datos;
	cout<<4. Calcular Sueldo;
	cout<<5. Salir
	cout<<Int. su opcion: ;
	cin>>opc;

	if(opcc=='1')
		insertar();
	if(opcc=='2')
		modificar();
	if(opcc=='3')
		eliminar();
	if(opcc=='4')
		calcular2();
	if(opcc=='5')
		Salir();
}
void administrativo()
{
	cout<<Menu;
	cout<<1. Insertar Datos;
	cout<<2. Modificar Datos;
	cout<<3. Eliminar Datos;
	cout<<4. Calcular Sueldo;
	cout<<5. Salir
	cout<<Int. su opcion: ;
	cin>>opc;

	if(opcc=='1')
		insertar();
	if(opcc=='2')
		modificar();
	if(opcc=='3')
		eliminar();
	if(opcc=='4')
		calcular3();
	if(opcc=='5')
		Salir();
}
void salir()
{
	
}
void insertar()
{
	cout<<Int cedula del trabajador;
	cin>>ced;
	buscar(ced);
	
}
void modificar()
{
	cout<<Int cedula del trabajador;
	cin>>ced;
	buscar(ced);
}
void eliminar()
{
	cout<<Int cedula del trabajador;
	cin>>ced;
	buscar(ced);
}
void buscar()
{
}
void calcular1()
{
	cout<<Int cedula del trabajador;
	cin>>ced;
	buscar(ced);
	if()

		cout<<"introduzca las horas trabajadas:";
		cin>>horast;
		cout<<"introduza las horas extra:";
		cin>>horase;
		sueldobase=(3*ht)+(he*horast);
		deduccionlph=(sueldobase*10)/100;
		deduccionss=sueldobase*0.15;
		bonificacion=(he*horast)*0.20
	else
		cout<<No existe trabajador;
}
void calcular2()
{
	cout<<Int cedula del trabajador;
	cin>>ced;
	buscar(ced);
	if()

		cout<<"introduzca las horas trabajadas:";
		cin>>horast;
		cout<<"introduza las horas extra:";
		cin>>horase;
		sueldobase=(3*ht)+(he*horast);
		deduccionlph=(sueldobase*10)/100;
		deduccionss=sueldobase*0.15;
		bonificacion=(he*horast)*0.20
	else
		cout<<No existe trabajador;
}
void calcular3()
{
	cout<<Int cedula del trabajador;
	cin>>ced;
	buscar(ced);
	if()

		cout<<"introduzca las horas trabajadas:";
		cin>>horast;
		cout<<"introduza las horas extra:";
		cin>>horase;
		sueldobase=(3*ht)+(he*horast);
		deduccionlph=(sueldobase*10)/100;
		deduccionss=sueldobase*0.15;
		bonificacion=(he*horast)*0.20
	else
		cout<<No existe trabajador;
}


void datos (a)
{
	cout<<"introduzca el nombre del empleado:"<<endl;
	cin.getline (nom,50);
	cin.getline(nom,50);
	cout<<"introduzca la edad del empleado:"<<endl;
	cin>>edad;
	cout<<"ingrese la cedula del empleado:"<<endl;
	cin>>ced;
	cout<<"introuzca el sexo del empleado:";
	cin.getline(sexo,50);
cin.get();
cin.get();
}







	










