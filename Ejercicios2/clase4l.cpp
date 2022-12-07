/* Se desea registrar una estructura personempleado que contenga como miembro los daros
de una persona empleado que a su vez contenga los datos de la fecha de nacimiento*/

# include <iostream.h>


struct fecha 
{
	int dia;
	int mes;
	char año[10];
}
;

struct persona
{
	char nombre [20];
	int edad;
	float altura;
	float peso;
	fecha fec;
};

struct persona_empelado
{
	persona persona;
	float salario;
	int horas_semanales;
};

void main()
{
	char persona_empleado_pe,pe_persona_nombre,pe_persona_altura,pe_persona_edad,pe_persona_peso;
	int pe_persona_fec_dia;
	int pe_persona_fec_mes;
	char pe_persona_fec_año[10];
	float aux_salario,aux_horas_semanales,pe_sueldo; 
	int pe_persona_fec_año
	persona_empleado_pe;
	
	cout<<"introduzca su nombre";
	cin>>pe_persona_nombre;

	cout<<"introduzca su edad";
	cin>>pe_persona_edad;

	cout<<"introduzca su altura";
	cin>>pe_persona_altura;

	cout<<"introduzca su peso";
	cin>>pe_persona_peso;

	cout<<"introduzca fecha de nacimiento";
	cin>>pe_persona_fec_dia;
	cin>>pe_persona_fec_mes;
	cin>>pe_persona_fec_año;

	cout<<"introduzca su salario";
	cin>>pe_salario;

	cout<<"introduzca el numero de horas semanales";
	cin>>pe_horas_semanales;
	
	cout<<endl;
	
	cout<<"nombre"<<pe_persona_nombre<<endl;
	cout<<"edad"<<pe_persona_edad<<endl;



	aux_salario=pe_salario;
	aux_horas=pe_horas_semales;
	pe_sueldo= aux_salrio*aux_horas_semanales;
	cout<<"el sueldo es:"<<pe_sueldo;

	cin.get();
	cin.get();



}