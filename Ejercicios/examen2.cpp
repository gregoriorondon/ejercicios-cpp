#include <iostream.h>
#include <ctype.h>
#include <process.h>
#include <string.h>

struct trabajador
{
	char nomt[80];
	char apet[80];  
	char turno[20];
		
};
struct matriz
{
	float num;
};
struct nota
{
	float NOT;
};
struct estudiante
{
	char nomA[50];
	char apeA[50];  
	char email[50];
	int CIA;
	float def;
	int sem;
	nota not[256];

};

void programa1();
void programa2();
void programa3();
void salir();
void ingresart();
void buscart();
void eliminart();
void mostrart();
void ingresarA();
void buscarA();
void modificarA();
void eliminarA();
void mostrarA();

trabajador traba[11];

matriz mat[256][256];

estudiante alumno[256];

int i=1, x=1;

void main()
{
	char opc;
	
b:
	
	while (opc!=3)
	{
		
		system ("cls");
		cout<<"-----------------------------------------------"<<endl;
		cout<<"\t\t\tMenu Principal\n"<<endl;
		cout<<"\t\t1.- Programa. 1\n"<<endl;
		cout<<"\t\t2.- Programa. 2\n"<<endl;
		cout<<"\t\t3.- Programa. 3\n"<<endl;
		cout<<"\t\t4.- Salir."<<endl;
		cout<<"\n\t\tOpcion: ";
	
		cin>>opc;
	
		switch (opc)
		{
		case '1':
			programa1();
			break;
		case '2':
			programa2();
			break;
		case '3':
			programa3();
			break;
		case '4':
			goto a;
			break;
		default:
			cout<<"Error"<<endl<<"Numero Equivocado"<<endl;
			goto b;
		}
	}
a:
	system("cls");
	cout<<"\n\t\tDesea Salir del programa? ";
	cin>>opc;
	opc=tolower(opc);
	switch (opc)
		{
		case 's':
			cout<<endl<<"\n\t\tMateria: Programacion.";
			cout<<endl<<"\n\t\tCurso: III semestre.\n";
			cout<<endl<<"\n\t\t\trealizado!....";
			cout<<endl<<"\n\t\tPresione enter para salir....";
			
			goto c;
			
			break;
		
		case 'n':
		
			goto b;
			
			break;
		
		default:
			cout<<"Error"<<endl<<"Letra Equivocada"<<endl;
			
			goto a;
		}
c:;
cin.get();
cin.get();

}

void programa1()
{
	
	char opc;
	while (opc!='5')
	{
	b:
	system ("cls");
cout<<"----------------------------------------------"<<endl;
	cout<<"\t\tEmpresa Los Planes Reformados C.A..\n";
	cout<<"\n\t\t\tMenu Trabajador.\n";
	cout<<"\n\t\t\t1.- Ingresar.\n";
	cout<<"\t\t\t2.- Mostrar.\n";
	cout<<"\t\t\t3.- Buscar.\n";
	cout<<"\t\t\t4.- Eliminar.\n";
	cout<<"\t\t\t5.- Salir.\n";
	cout<<"\n\t\t\tOpcion: ";
cout<<"-----------------------------------------------"<<endl;
	cin>>opc;


	switch (opc)
		{
		case '1':
			ingresart();
			break;
		
		case '2':
			mostrart();
			break;
		case '3':
			buscart();
			break;
		case '4':
			eliminart();
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
};
void ingresart()
{
	char opc='s', op='s';

	while (opc=='s')
	{
		system("cls");
		cout<<"Introducir los datos del trabajador:\n";
		cout<<"Nombre: ";
		cin.getline(traba[i].nomt,80);
		cin.getline(traba[i].nomt,80);
		cout<<"Apellido: ";
		cin.getline(traba[i].apet,80);
		cout<<"Turno de trabajo: ";
		cout<<"1. matutino"<<endl;
		cout<<"2. diurno"<<endl;
		cout<<"3. nocturno"<<endl;
		cin.getline(traba[i].turno,20);		
		c:
		cout<<"Desea continuar con otro trabajador? s/n ";
		cin>>opc;
		opc=tolower(opc);
		if (opc=='s')
			i++;
			if (i>10)
			{
				cout<<"se exedio de los limites de trabajadores"<<endl;
				cout<<"Maximo 10 trabajadores"<<endl;
				system("pause");
				goto b;
			}
		else
			if (opc=='n')
				goto b;
			else
			{
				cout<<"ERROR"<<endl;
				cout<<"S o N"<<endl;
				goto c;
			}
	}
b:;
};

void buscart()
{
	system("cls");
	int T;
	cout<<"Introduzca el numero de trabajador buscar: ";
	cin>>T;
	for (int j=1;j<11;j++)
	{
		if (j==T)
		{
			cout<<"Datos del "<<j<<" Trabajador:\n";
			cout<<"Nombre: "<<traba[j].nomt<<endl;
			cout<<"Apellido: "<<traba[j].apet<<endl;
			cout<<"Turno de trabajo: "<<traba[j].turno<<endl;
			j=11;
		}
		else
			cout<<"Trabajador no encontrado"<<endl;
	}
	system("pause");
};


void eliminart()
{
	int T;
	system("cls");
	cout<<"Introduzca el trabajador a buscar: ";
	cin>>T;
	for (int j=1;j<=i;j++)
	{
		if (j==T)
		{
			cout<<"Datos del "<<j<<" Trabajador:\n";
			cout<<"Nombre: "<<traba[j].nomt<<endl;
			cout<<"Apellido: "<<traba[j].apet<<endl;
			cout<<"Turno de trabajo: "<<traba[j].turno<<endl;
			strcpy(traba[j].nomt,traba[j+1].nomt);
			strcpy(traba[j].apet,traba[j+1].apet);
			strcpy(traba[j].turno,traba[j+1].turno);	
			cout<<endl<<"Registro Eliminado"<<endl;
			system ("pause");
		
		}
		
		else
		{
			cout<<endl<<"Registro Equvocado"<<endl;
			system ("pause");
		}

	}
};


void mostrart()
{
	
	system("cls");
	cout<<"Nombre\t"<<"Apellido\t"<<"Turno de trabajo\t"<<endl;
	for (int j=1;j<11;j++)
	{
		cout<<traba[j].nomt<<"\t"<<traba[j].apet<<"\t"<<traba[j].turno<<endl;
	
	}
	system("pause");
}



void programa2()

{
	float sum=0, may=0;
	int pM1, pM2, pm1, pm2;
	for (int j=0;j<5;j++)
	{
		for (int k=0;k<2;k++)
		{
			cout<<"Introduzca un numero: ";
			cin>>mat[j][k].num;
			sum=sum+mat[j][k].num;
		
		}
	}
	float med;
	med=sum/10;
	for (j=0;j<5;j++)
	{
		for (int k=0;k<2;k++)
		{
			if (mat[j][k].num>may)
			{
				pM1=j;
				pM2=k;
				may=mat[j][k].num;
			}
			
		}
	}
	
	float men=may;
	
	for ( j=0;j<5;j++)
	{
		for (int k=0;k<2;k++)
		{

			if (mat[j][k].num<men)
			{
				pm1=j;
				pm2=k;
				men=mat[j][k].num;
			}
			
		}
	}
	system("cls");
	for (j=0;j<5;j++)
	{
		for (int k=0;k<2;k++)
		{
			cout<<mat[j][k].num<<" ";
		}
		cout<<endl;
	}
	
	cout<<endl;
	cout<<"El numero mayor es: "<<may<<" Posiciones ("<<pM1<<","<<pM2<<")"<<endl;
	cout<<"El numero menor es: "<<men<<" Posiciones ("<<pm1<<","<<pm2<<")"<<endl;
	cout<<"La media de la matriz es: "<<med<<endl;
	system("pause");
}

void programa3()

{
	char opc;
	while (opc!='6')
	{
	b:
	system ("cls");
	cout<<"-----------------------"<<endl;
	cout<<"\t\tMenu Alumno.\n";
	cout<<"1.- Ingresar.\n";
	cout<<"2.- Mostrar.\n";
	cout<<"3.- Buscar.\n";
	cout<<"4.- Modificar.\n";
	cout<<"5.- Eliminar.\n";
	cout<<"6.- Salir.\n";
	cout<<"-----------------------"<<endl;
	cout<<"Opcion: ";
	cin>>opc;

		switch (opc)
		{
	
		case '1':
			ingresarA();
			break;
		
		case '2':
		
			mostrarA();
			break;
		case '3':
	
			buscarA();
			break;
		case '4':
			modificarA();
			break;
		case '5':
			eliminarA();
			break;
		case '6':
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
cout<<endl<<"realizado!...."<<endl;

}
void ingresarA()
{
	char opc='s', op='s';
	while (opc=='s')
	{
		system("cls");
		cout<<"Introducir los datos del Alumno:\n";
		
		cout<<"Nombre: ";	
		cin.getline(alumno[x].nomA,50);
		cin.getline(alumno[x].nomA,50);
		cout<<"Apellido: ";
		cin.getline(alumno[x].apeA,50);
		cout<<"Cedula: ";
		cin>>alumno[x].CIA;
		cout<<"Email: ";
		cin.getline(alumno[x].email,20);
		cin.getline(alumno[x].email,20);	
		cout<<"Semestre: ";
		cin>>alumno[x].sem;
		cout<<"Introduzca Nota1: ";
		cin>>alumno[x].not[1].NOT;
		alumno[x].def=alumno[x].def+(alumno[x].not[1].NOT*0.15);
		cout<<"Introduzca Nota2: ";
		cin>>alumno[x].not[2].NOT;
		alumno[x].def=alumno[x].def+(alumno[x].not[2].NOT*0.10);
		cout<<"Introduzca Nota3: ";
		cin>>alumno[x].not[3].NOT;
		alumno[x].def=alumno[x].def+(alumno[x].not[3].NOT*0.25);
		cout<<"Introduzca Nota4: ";
		cin>>alumno[x].not[4].NOT;
		alumno[x].def=alumno[x].def+(alumno[x].not[4].NOT*0.20);
		cout<<"Introduzca Nota5: ";
		cin>>alumno[x].not[5].NOT;
		alumno[x].def=alumno[x].def+(alumno[x].not[5].NOT*0.10);
		cout<<"Introduzca Nota6: ";
		cin>>alumno[x].not[6].NOT;
		alumno[x].def=alumno[x].def+(alumno[x].not[6].NOT*0.05);
		cout<<"Introduzca Nota7: ";
		cin>>alumno[x].not[7].NOT;
		alumno[x].def=alumno[x].def+(alumno[x].not[7].NOT*0.15);
		c:
			
			cout<<"Desea continuar con otro alumno? s/n ";
			cin>>opc;
			opc=tolower(opc);
			if (opc=='s')
			x++;
		else
			
			if (opc=='n')
				goto b;
			
			else
			
			{
				cout<<"ERROR"<<endl;
				cout<<"S o N"<<endl;
				goto c;
			}
	}
b:;


		

}

void buscarA()


{
	system("cls");
	int Y;
	cout<<"Introduzca el numero de alumnos a buscar: ";
	cin>>Y;
	for (int J=1;J<25;J++)
	{
		if (J==Y)
		{
			cout<<"Datos del "<<J<<" alumnos:\n";
			cout<<"Nombre: "<<alumno[J].nomA<<endl;
			cout<<"Apellido: "<<alumno[J].apeA<<endl;
			;
			J=25;
		}
		else
			cout<<"alumno no encontrado"<<endl;
	}
	system("pause");
};

void modificarA()

{
	int q;
	system("cls");
	cout<<"Introduzca los alumno a modificar: ";
	cin>>q;
	for (int k=1;k<=i;k++)
	{
		if (k==q)
		{
			cout<<"Datos del "<<k<<" alumno:\n";
			cout<<"Nombre: "<<alumno[k].nomA<<endl;
			cout<<"Apellido: "<<alumno[k].apeA<<endl;
			
			strcpy(alumno[k].nomA,alumno[k+1].nomA);
			strcpy(alumno[k].apeA,alumno[k+1].apeA);
	
		
			system ("pause");
		
		}
		
		else
		{
			cout<<endl<<"Registro Equvocado"<<endl;
			system ("pause");
		}

	}
};




void eliminarA()
{
	int q;
	system("cls");
	cout<<"Introduzca el alumno a eliminar: ";
	cin>>q;
	for (int k=1;k<=i;k++)
	{
		if (k==q)
		{
			cout<<"Datos del "<<k<<" alumno:\n";
			cout<<"Nombre: "<<alumno[k].nomA<<endl;
			cout<<"Apellido: "<<alumno[k].apeA<<endl;
			
			strcpy(alumno[k].nomA,alumno[k+1].nomA);
			strcpy(alumno[k].apeA,alumno[k+1].apeA);
	
			cout<<endl<<"Registro Eliminado"<<endl;
			system ("pause");
		
		}
		
		else
		{
			cout<<endl<<"Registro Equvocado"<<endl;
			system ("pause");
		}

	}
};


void mostrarA()
{
	cout<<"\t\t\t..::Listado de alumnos::..\n";
	cout<<"Nombre	Apellido	Cedula 	Email  	Semestre	Notas	Definitiva\n";
	for(int z=1;z<=x;z++)	
		cout<<alumno[x].nomA<<" "<<alumno[x].apeA<<" | "<<alumno[x].CIA<<" | "<<alumno[x].email<<" | "<<alumno[x].sem<<" | "<<alumno[x].not[1].NOT<<" "<<alumno[x].not[2].NOT<<" "<<alumno[x].not[3].NOT<<" "<<alumno[x].not[4].NOT<<" "<<alumno[x].not[5].NOT<<" "<<alumno[x].not[6].NOT<<" "<<alumno[x].not[7].NOT<<" | "<<alumno[x].def<<endl;

	system("pause");
}