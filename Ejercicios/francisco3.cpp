/*1)_ La empresa Los Planes Reformados S.A., ha decidido automatizar la gestión de sus trabajadores.
Dicha empresa tiene un máximo de 10 trabajadores en plantilla, debiéndose almacenar la siguiente
información de cada trabajador: nombre, apellidos (ambos son cadenas de un máximo de 80
caracteres), y turno (matinal, tarde, noche) que debe implementarse obligatoriamente con un tipo
 enumerado. La aplicación deberá mostrar en pantalla un menú con las siguientes opciones:

a)	Insertar Trabajador. Se pedirá el número de trabajador, que debe ser un número entre el 1 y
el 10 y se comprobará que no hay ningún trabajador almacenado con ese número. Si el número de
trabajador no fuera válido (no esté entre 1 y 10) o ya estuviera algún trabajador almacenado con
ese número, se informará del pertinente error y se volverá al programa principal. En cambio, si 
el número es válido, se pedirán el resto de los datos (nombre, apellidos y turno) y se insertará
dicho trabajador en la estructura.
b)	Buscar Trabajador. Se pedirá por teclado el número de trabajador. Si el número de trabajador
 no fuera válido (no esté entre 1 y 10) o no hubiera algún trabajador almacenado con ese número,
 se informará del pertinente error y se volverá al programa principal. En cambio, si el número es
 válido, se mostrará por pantalla todos los datos (nombre, apellidos y turno) de dicho trabajador.
c)	Listar Trabajadores. Se mostrará por pantalla todos los datos (nombre, apellidos y turno) de
los trabajadores que están almacenados en la estructura precedidos de su número de trabajador.
(Ordena Alfabéticamente por el apellido)
d)	Borrar Trabajador. Se pedirá por teclado el número de trabajador. Si el número de trabajador
no fuera válido (no esté entre 1 y 10) o no hubiera algún trabajador almacenado con ese número,
se informará del pertinente error y se volverá al programa principal. En cambio, si el número es
válido, se mostrará por pantalla todos los datos (nombre, apellidos y turno) de dicho trabajador
y se informará de que va a ser borrado, pasándose a eliminarlo de la estructura (sin pedir
conformidad).
Salir del Programa. Se pedirá al usuario una confirmación de abandono del programa, saliendo
del mismo en caso de que sea afirmativa y mostrando el nombre, apellidos y curso del autor del
programa o volviendo al menú principal si no lo es.*/

#include<iostream.h>
#include<string.h>
#include<windows.h>

void insertar();
void buscar();
void listar();
void borrar();

typedef struct
{
	char nombre[50];
	char apellido[50];
	char turno[5];
}registro;

registro c[200];
int  i=0,j=0,kk=0;
char a;
void insertar()
{
	system("cls");
	char a='s';
	while(a=='s')
	{
		cin.ignore();
		cout<<"Ingrese el Nombre del Trabajador: ";
		cin.getline(c[i].nombre,50);
		cout<<endl;
		cout<<"Ingrese el Apellido del Trabajador: ";
		cin.getline(c[i].apellido,50);
		cout<<endl;
		cout<<"Ingrese el Turno M=mañana - T=tarde - N=noche: ";
		cin.getline(c[i].turno,5);
		cout<<endl;
		i++;
		cout<<"Desea Agregar Otro (S/N)?";
		cin>>a;
		cout<<endl;
	}
	cin.get();
}

int buscar_ci(char cadena[12])
{
	int band=-1;
	for(int k=0;k<i;k++)
	{
		if(strcmp(cadena,c[k].nombre)==0)
		{
			band=k;
		}
	}
	return(band);
}

void buscar()
{
	char opc='s';
	system ("cls");
	char aux[12];int p;
		
	cout<<"Ingrese el Nombre del Trabajador a Buscar: ";
	cin.getline(aux,12);
	cin.getline(aux,12);
	p=buscar_ci(aux);
	if(p==-1)
	{
		cout<<endl;cout<<endl;
		cout<< "\t   El Nombre No Esta Registrada!!!...";cout<<endl<<endl;
		cout<< "\t   Ingresar Nuevo Trabajador? S/N: ";
		cin>>opc;
		if ((opc=='s')||(opc=='S'))
		{
			insertar();
		}
		if (opc=='n')if (opc=='N')
		{
			void main();
		}
	}
	else
	{
		cout<<endl;cout<<endl;
		for(int k=0;k<i;k++)
		{
			if(strcmp(aux,c[k].nombre)==0)
			{
				cout << " Nombres: "   <<c[k].nombre;cout<<endl;
				cout << " Apellidos: "   <<c[k].apellido;cout<<endl;
				cout << " Turno: "   <<c[k].turno;cout<<endl;
			}
			cin.get();
		}
	}
}

void listar()
{
	system("cls");
	cout<<endl<<endl;
    cout<<"-------------------------------------------------------------------------"<< endl;
	cout<<"Nombre                              Apellido                        Turno"<< endl;
    cout<<"-------------------------------------------------------------------------"<< endl;

	for (int k=0 ; k<i ; ++k)
		cout << c[k].nombre << "/" << c[k].apellido << "/" <<c[k].turno << endl;
	cout<<"\n Presione cualquier tecla para continuar......... ";
    cin.get();
}

void borrar()
{
	char opc='s';
	system ("cls");
	char aux[12];int p;
		
	cout<<"Ingrese el Nombre del Trabajador a Buscar: ";

	cin.getline(aux,12);
	cin.getline(aux,12);
	p=buscar_ci(aux);
	if(p==-1)
	{
		cout<<endl;cout<<endl;
		cout<< "\t   El Nombre No Esta Registrada!!!...";cout<<endl<<endl;
		cout<< "\t   Presione cualquier Tecla............ ";
		cin>>opc;
	}
	else
	{
		cout<<endl;cout<<endl;

		for(int k=0;k<i;k++)
		{
			if(strcmp(aux,c[k].nombre)==0)
			{
				cout << " Nombres: "   <<c[k].nombre;cout<<endl;
				cout << " Apellidos: "   <<c[k].apellido;cout<<endl;
				cout << " Turno: "   <<c[k].turno;cout<<endl;
				cout << "Desea Eliminar el registro   (S/N)" << endl;
				cin >> opc;
				j=k;
				if ((opc=='s') || (opc=='S'))
				{
					if (j==i)
						--i;
					else
					{
					  for (int kk=j;kk<i;++kk)
					  {
						strcpy(c[kk].nombre, c[kk+1].nombre);
						strcpy(c[kk].apellido, c[kk+1].apellido);
						strcpy(c[kk].turno,c[kk+1].turno);
					  } 
					--i;
					}
				}
			}
			cin.get();
		}
        
	}

}
	
void programa_1()
{
	system("color 1f");
	int opc;
	do
	{
		system("cls");
		cout<<endl<<endl;
		cout <<"\t\t\t\t 1._Insertar Datos \n"<<endl;
		cout <<"\t\t\t\t 2._Buscar Datos  \n"<<endl;
		cout <<"\t\t\t\t 3._Listar Datos  \n"<<endl;
		cout <<"\t\t\t\t 4._Borrar Datos  \n"<<endl;
		cout <<"\t\t\t\t 5._Salir \n"<<endl<<endl;
		cout <<"\t\t INGRESE SU OPCION: ";
		cin>>opc;

		if(opc==1)
		{
			insertar();
			cin.get();
			system("cls");
		}
		if(opc==2)
		{
			buscar();
			cin.get();
			system("cls");
		}
		if(opc==3)
		{
			listar();
			cin.get();
			system("cls");
		}
		if(opc==4)
		{
			borrar();
			cin.get();
			system("cls");
		}
	}while (opc!=5);
}

struct Estudiante
{
	float nro;
};
Estudiante A[30];
int k,j,i;

void programa_2()
{   
	//Leer los datos

	float mayor=0; float menor=999999;
    int pm=0,pn=0;
   
    for(k=0;k<10;++k)
    {
		cout<<"\nNumero:   ";
        cin>>A[k].nro;
        if(A[k].nro> mayor)
		{
			mayor=A[k].nro;
			pm=k+1;
		}
		if(A[k].nro< menor)
		{
			menor=A[k].nro;
			  pn=k+1;
		}
	}
		// Salida
	cout<<"\nEl Mayor = "    <<mayor;
	cout<<"\nPosicion Mayor" << pm;
	cout<<"\nEl Menor ="     << pn;
	cout<<"\nPosicion Menor "<<menor;
	cin.get();
	cin.get();
	
}

typedef struct
{
	char apellido[20];
    char nombre[20];
    char semestre[5];
    char cedula[10];
    char email[30];
    int n1,n2,n3,n4,n5,n6,n7,prom;
}  nombres;
nombres E[30];
int k,j,i;

void programa_3()
{
	
	//Leer los datos
    for(k=0;k<30;++k)
    {
		cout <<"Apellidos:   ";
		cin >> E[k].apellido;
	    cout <<"Nombre:   ";
        cin >> E[k].nombre;
        cout<<"Semestre:   ";
        cin >>E[k].semestre;
        cout<<"Correo electronico:   ";
        cin >>E[k].email;
        cout<<"Cedula:   ";
        cin >>E[k].cedula;
        cout<<"Nota 1:   ";
        cin >>E[k].n1;
        cout<<"Nota 2:   ";
        cin >>E[k].n2;
        cout<<"Nota 3:   ";
        cin >>E[k].n3;a
        cout<<"Nota 4:   ";
        cin >>E[k].n4;
        cout<<"Nota 5:   ";
        cin >>E[k].n5;
        cout<<"Nota 6:   ";
        cin >>E[k].n6;
        cout<<"Nota 7:   ";
        cin >>E[k].n7;
	}
	// Calculos

    for(j=0; j<30;++j)
    {

		E[j].prom = E[j].n1*0.15 + E[j].n2*0.1 + E[j].n3*0.25 + E[j].n4*0.2 + E[j].n5*0.1+ E[j].n6*0.05 + E[j].n7*0.15;
	
	}

}


void main()
{
	{
	system("color 1f");
	int opc;
	do
	{
		system("cls");
		cout<<endl<<endl;
		cout <<"\t\t\t\t MENU PRINCIPAL \n"<<endl;
		cout <<"\t\t\t\t 1._Programa_1  \n"<<endl;
		cout <<"\t\t\t\t 2._Programa_2  \n"<<endl;
		cout <<"\t\t\t\t 3._Programa_3  \n"<<endl;
		cout <<"\t\t\t\t 4._Salir \n"<<endl<<endl;
		cout <<"\t\t INGRESE SU OPCION: ";
		cin>>opc;

		if(opc==1)
		{
			programa_1();
			cin.get();
			system("cls");
		}
		if(opc==2)
		{
			programa_2();
			cin.get();
			system("cls");
		}
		if(opc==3)
		{
			programa_3();
			cin.get();
			system("cls");
		}
	}while (opc!=4);
}
