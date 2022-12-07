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


void programa_2()
{   
	//Leer los datos
	system("color 1e");
	float mayor=0; float menor=999999;
    int pm=0,pn=0;
	double ac=0,media;
   
    for(int k=0;k<10;++k)
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
		ac = ac + A[k].nro;
	}

	media = ac / 10;
		// Salida
	cout<<"\nEl Mayor = "    <<mayor;
	cout<<endl;
	cout<<"\nPosicion Mayor" << pm;
	cout<<endl;
	cout<<"\nEl Menor ="     << pn;
	cout<<endl;
	cout<<"\nPosicion Menor "<<menor;
	cout<<endl;
	cout<<"\nLa Media es "<<media;
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
    double n1,n2,n3,n4,n5,n6,n7,prom;
}  nombres;
nombres E[2];

void programa_3()
{
	//Leer los datos
	system("color 1a");
    for(int k=0;k<2;++k)
    {
		cout <<"Ingrese los Apellidos:   ";
		cin >> E[k].apellido;
		cout<<endl;
	    cout <<"Ingrese el Nombre:   ";
        cin >> E[k].nombre;
		cout<<endl;
        cout<<"Ingrese el Semestre:   ";
        cin >>E[k].semestre;
		cout<<endl;
        cout<<"Correo electronico:   ";
        cin >>E[k].email;
		cout<<endl;
        cout<<"Cedula:   ";
        cin >>E[k].cedula;
		cout<<endl;
        cout<<"Nota 1:   ";
        cin >>E[k].n1;
		cout<<endl;
        cout<<"Nota 2:   ";
        cin >>E[k].n2;
        cout<<endl;
		cout<<"Nota 3:   ";
        cin >>E[k].n3;
		cout<<endl;
        cout<<"Nota 4:   ";
        cin >>E[k].n4;
		cout<<endl;
        cout<<"Nota 5:   ";
        cin >>E[k].n5;
		cout<<endl;
        cout<<"Nota 6:   ";
        cin >>E[k].n6;
		cout<<endl;
        cout<<"Nota 7:   ";
        cin >>E[k].n7;
		cout<<endl;
		cout<<"El Promedio es :"<<E[j].prom;
		cout<<endl;
	}
	// Calculos

    for(j=0; j<2;++j)
    {
		E[j].prom = (E[j].n1*0.15/100 + E[j].n2*0.10/100 + E[j].n3*0.25/100 + E[j].n4*0.20/100 + E[j].n5*0.10/100+ E[j].n6*0.05/100 + E[j].n7*0.15/100);
	}
	cin.get();
	cin.get();

}

void main()
{
	system("color 0a");
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

