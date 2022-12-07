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
# define h 7000
float ht ;
char nom[30]  ;
 float he ;
 float hne;

float sex;
int edad;
char ced;

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
void salir ();
void Salir();
//****************
void main()
{
	
	int opc;
	cout<<"Menu principal"<<endl;
	cout<<"1. Gerente"<<endl;
	cout<<"2. Administrativo"<<endl;
	cout<<"3. Obrero"<<endl;
	cout<<"4. Salir:"<<endl; 
	cout<<"Int. su opcion"<<endl;
	cin>>opc;
	if(opc==1)
		gerente();
	if(opc==2)
		administrativo();
	if(opc==3)
		obrero();


cin.get ();
cin.get ();
}

void gerente()
{
	
	int opc;
	cout<<"Menu gerente"<<endl;
	cout<<"1. Insertar Datos"<<endl;
	cout<<"2. Modificar Datos"<<endl;
	cout<<"3. Eliminar Datos"<<endl;
	cout<<"4. Calcular Sueldo"<<endl;
	cout<<"5. salir"<<endl;
	cout<<"Int. su opcion:"<<endl;
	cin>>opc;

	if(opc==1)
		insertar  ();
	if(opc==2)
		modificar  ();
	if(opc==3)
		eliminar  ();
	if(opc==4)
		calcular1   ();
	if(opc==5)
		salir();
cin.get ();
cin.get ();
}

void obrero()
{
	
	int opc;
	cout<<"Menu obrero"<<endl;
	cout<<"1. Insertar Datos"<<endl;
	cout<<"2. Modificar Datos"<<endl;
	cout<<"3. Eliminar Datos"<<endl;
	cout<<"4. Calcular Sueldo"<<endl;
	cout<<"5. Salir"<<endl;
	cout<<"Int. su opcion:"<<endl;
	cin>>opc;

	if(opc==1)
		insertar ();
	if(opc=='2')
		modificar ();
	if(opc==3)
		eliminar ();
	if(opc==4)
		calcular2();
	if(opc==5)
		Salir();

cin.get ();
cin.get ();
}

void administrativo()
{
	int opc;
	cout<<"Menu administrativo"<<endl;
	cout<<"1. Insertar Datos"<<endl;
	cout<<"2. Modificar Datos"<<endl;
	cout<<"3. Eliminar Datos"<<endl;
	cout<<"4. Calcular Sueldo"<<endl;
	cout<<"5. Salir"<<endl;
	cout<<"Int. su opcion:"<<endl;
	cin>>opc;

	if(opc==1)
		insertar ();
	if(opc==2)
		modificar  ();
	if(opc==3)
		eliminar ();
	if(opc==4)
		calcular3  ();
	if(opc==5)
		Salir();

cin.get ();
cin.get ();
}
void salir()
{
	cout<<"no realizar ninguna tarea";

cin.get ();
cin.get ();
}
void insertar()
{
	cout<<"introducir el nombre"<<endl;
	cin.getline(nom,30);
	cin.getline(nom,30);
	cout<<"introduzca el sexo del empleado:"<<endl;
	cout<<"1.masculino";
	cout<<"2.femenino";
	cin>> sex;
	cout<<"introduzca la edad del trabajador"<<endl;
	cin>> edad;
	cout<<"Int cedula del trabajador"<<endl;
	cin>>ced;

cin.get ();
cin.get ();
}
void modificar()
{
	

	cout<<"introducir el nombre del trabajador"<<endl;
	cin.get(nom,30);
	cin.getline(nom,30);
	cout<<"introduzca el sexo del trabajador"<<endl;
	cout<<"1.masculino";
	cout<<"2.femenino";
	cin>> sex;
	cout<<"introduzca la edad del trabajador"<<endl;
	cin>> edad;
	cout<<"Int cedula del trabajador"<<endl;
	cin>>ced;
	
cin.get ();
cin.get ();
}
void eliminar()
{
	
	cout<<"introducir el nombre"<<endl;
	cin.getline(nom,30);
	cin.getline(nom,30);
	cout<<"introduzca el sexo del empleado:"<<endl;
	cout<<"1.masculino";
	cout<<"2.femenino";
	cin>> sex;
	cout<<"introduzca la edad del trabajador"<<endl;
	cin>> edad;
	cout<<"Int cedula del trabajador"<<endl;
	cin>>ced;

cin.get ();
cin.get ();
}
void buscar()

{
	
	cout<<"introducir el nombre"<<endl;
	cin.getline(nom,30);
	cin.getline(nom,30);
	cout<<"introduzca el sexo del empleado:"<<endl;
	cout<<"1.masculino";
	cout<<"2.femenino";
	cin>> sex;
	cout<<"introduzca la edad del trabajador"<<endl;
	cin>> edad;
	cout<<"Int cedula del trabajador"<<endl;
	cin>>ced;

cin.get ();
cin.get ();
}
void calcular1()
{
	double sueldobase, deduccionss,bonificacion, deduccionlph ;
	float horast;
	float horase;	
	cout<<"introducir el nombre"<<endl;
	cin.getline (nom,70);
	cout<<"introduzca el sexo del empleado:"<<endl;
	cout<<"1.masculino";
	cout<<"2.femenino";
	cin>> sex;
	cout<<"introduzca la edad del trabajador"<<endl;
	cin>> edad;
	cout<<"Int cedula del trabajador"<<endl;
	cin>>ced;	
	cout<<"introduzca las horas trabajadas:"<<endl;
		cin>>horast;
		cout<<"introduza las horas extra:"<<endl;
		cin>>horase;
		sueldobase=(3*ht)+(he*horast);
		cout<<"el sueldo base es:"<<sueldobase<<endl;
		deduccionlph=(sueldobase*10)/100;
		deduccionss=sueldobase*0.15;
		bonificacion=(he*horast)*0.20;
		cout<<"la bonificacion es:"<<bonificacion<<endl;
		cout<<"la deduccion por lph es:"<<deduccionlph<<endl;
	cout<<"el sueldo base es:"<<sueldobase<<endl;
	cout<<"la deducciones del sueldo es:"<<deduccionss<<endl;
	
cin.get ();
cin.get ();
}

void calcular2()

{
double sueldobase, deduccionss,bonificacion, deduccionlph;
float horase;	
float horast;
	cout<<"introducir el nombre"<<endl;
	cin.getline (nom, 70);
	cout<<"introduzca el sexo del empleado:"<<endl;		
	cout<<"1.masculino";
	cout<<"2.femenino";
	cin>> sex;
	cout<<"introduzca la edad del trabajador"<<endl;
	cin>> edad;
	cout<<"Int cedula del trabajador"<<endl;
	cin>>ced;

	

		cout<<"introduzca las horas trabajadas:"<<endl;
		cin>>horast;
		cout<<"introduza las horas extra:"<<endl;
		cin>>horase;	
		sueldobase=(3*ht)+(he*horast);
		deduccionlph=(sueldobase*10)/100;
		deduccionss=sueldobase*0.15;
		bonificacion=(he*horast)*0.20;
		cout<<"la bonificacion es:"<<bonificacion<<endl;
		cout<<"la deduccion por lph es:"<<deduccionlph<<endl;
	cout<<"el sueldo base es:"<<sueldobase<<endl;
	cout<<"la deducciones del sueldo es:"<<deduccionss<<endl;
cin.get ();
cin.get ();
}

void calcular3()
{
	double sueldobase, deduccionss,bonificacion, deduccionlph;
float horase;
float horast;
	cout<<"introducir el nombre"<<endl;
	cin.getline (nom, 70);
	cout<<"introduzca el sexo del empleado:"<<endl;
	cout<<"1.masculino";
	cout<<"2.femenino";
	cin>> sex;
	cout<<"introduzca la edad del trabajador"<<endl;
	cin>> edad;
	cout<<"Int cedula del trabajador"<<endl;
	cin>>ced;
		cout<<"introduzca las horas trabajadas:"<<endl;
		cin>>horast;
		cout<<"introduza las horas extra:"<<endl;
		cin>>horase;
		sueldobase=(3*ht)+(he*horast);
		deduccionlph=(sueldobase*10)/100;
		deduccionss=sueldobase*0.15;
		bonificacion=(he*horast)*0.20;
cout<<"la bonificacion es:"<<bonificacion<<endl;
		cout<<"la deduccion por lph es:"<<deduccionlph<<endl;
	cout<<"el sueldo base es:"<<sueldobase<<endl;
	cout<<"la deducciones del sueldo es:"<<deduccionss<<endl;

cin.get ();
cin.get ();
}




void Salir ()
{
	cout<<"dios";

cin.get ();
cin.get ();
}


	










