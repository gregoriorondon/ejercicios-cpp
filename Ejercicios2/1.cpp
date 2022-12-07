/*escribir un programa que asigne dinamicamente un arreglo de tipo empleado.pedir al usuario 
el numero de empleado que debe crearse. Conttrate algunos empleados(llene los campos de nombre 
y numero de id) */
#include<iostream.h>
#include<string.h>
#include<stdlib.h>
#include<process.h>

struct Empleado
{
	char nom[30];
	int cedula;
};
void main()
{
	Empleado *tra,*trab;
	int num;
	char *nomb, *ced;
	cout<<"\nIntroduzca el numero de Empledos: ";
	cin>>num;
	tra=(Empleado*)malloc(num*sizeof(Empleado));
	if (tra==NULL)
		cout<<"no hay espacio para el empleado"<<endl;

	trab=tra;

	/**nomb=Empleado.nom;
	*ced=Empleado.cedula;*/
	cout<<"Introduzca el Nombre: ";
	cin.ignore();
	cin.getline(trab->nom,30);
	cout<<"Nombre: "<<trab->nom;
	cout<<endl;
	system ("pause");

}