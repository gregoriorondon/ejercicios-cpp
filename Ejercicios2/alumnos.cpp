/*La universidad ABC esta culminando su periodo academico, los alumnos del 4to
semestre ya conocen sus notas por cada materia. se requiere elaborar un programa
que tome como dato de entrada las 5 notas por materias de n alumnos de la univ.
se quiere emitir la siguiente salida
A-) si el alumno aprobo la materia
B-) El Nro de alumnos procesados
C-) Cantidad de alumnos Aprobados
D-) El promedio mas alto del semestre
*/
#include <iostream.h>
#include <process.h>
#include <ctype.h>
struct nota
{
	float NOT;
	
};
struct mate
{
	char materia[100];
	int sem;
};
struct estudiante
{
	char nomA[50];
	char apeA[50];
	mate M[256];
	float def;
	nota not[256];
	float Tot;

};


estudiante alumno[256];


int i=1, sum[256], x=1, mat[256];



void ingresarA();
void mostrarA();



void main()
{

	char opc;
	while (opc!='0')
	{
	b:
	system ("cls");
	cout<<"様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様"<<endl;
	cout<<"\t\tMenu Alumno.\n";
	cout<<endl<<"1.- Ingresar.\n";
	cout<<"2.- Mostrar.\n";
	cout<<"0.- Salir.\n";
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
		case '0':
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
cout<<endl<<"\n\t\t\tFinalizado!....";
cout<<endl<<"\n\t\tPresione enter para salir....";
cin.get();
cin.get();
};
void ingresarA()
{
	char opc='s', op='s';
	while (opc=='s')
	{
		
		system("cls");
		cout<<"Introducir los datos del Alumno:\n";
		cout<<"Nombre: ";
		cin.getline(alumno[i].nomA,50);
		cin.getline(alumno[i].nomA,50);
		cout<<"Apellido: ";
		cin.getline(alumno[i].apeA,50);
		cout<<"Desea ingresar notas: s/n ";
		cin>>op;
		op=tolower(op);
		int l=1;
		
		sum[i]=0;
		alumno[i].def=0;
		alumno[i].Tot=0;
		while (op=='s')
		{
			system("cls");
			cout<<"Materia: ";
			cin.getline(alumno[i].M[l].materia,100);
			cin.getline(alumno[i].M[l].materia,100);

			
				int k=1;
				
				while (op=='s')
				{
			
					cout<<"Introducir la "<<k<<" nota: ";
					cin>>alumno[i].not[k].NOT;
					alumno[i].def=alumno[i].def+alumno[i].not[k].NOT;
					k++;
					sum[i]++;
					cout<<"Desea ingresar otra nota? s/n ";
					cin>>op;
					op=tolower(op);
				}
				
			
				l++;
				mat[i]++;
				alumno[i].Tot=alumno[i].def/sum[i];
				cout<<"Existe otra materia? s/n ";
				cin>>op;
				op=tolower(op);
		}
		
c:
			system("cls");
			cout<<"\n\t\tDesea continuar con otro alumno? s/n ";
			cin>>opc;
			opc=tolower(opc);
			if (opc=='s')
			i++;
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


void mostrarA()
{
	int j;
	float may=0;
	int pos;
	system("cls");
		cout<<"N\247\tNombre\t\tApellido\t  Definitiva"<<endl<<endl;
		for (j=1;j<=i;j++)
		{
			cout<<j<<"\t"<<alumno[j].nomA<<"\t\t"<<alumno[j].apeA<<"\t\t"<<alumno[j].Tot;
		if (alumno[j].Tot>9)
			cout<<"\tAprobado"<<endl<<endl;
		else
			cout<<"\tReprobado"<<endl<<endl;
		}
		for (j=1;j<=i;j++)
			if (alumno[j].Tot>may){
				may=alumno[j].Tot;
				pos=j;
			}

		cout<<endl<<endl<<"El Alumno con mayor nota es "<<alumno[pos].nomA<<" "<<alumno[pos].apeA<<" con: \a"<<alumno[pos].Tot<<endl<<endl;
		
		system("pause");
};