#include <iostream.h>
#include "reg.h"
#include <process.h>
#include <ctype.h>
#include <string.h>

estudiante alumno[256];
profesor prof[256];
bool o=true;
int i=1, sum[256], x=1, mat[256];


void regp();
void dib();
void regA();
void ingresarA();
void buscarA();
void modificarA();
void eliminarA();
void mostrarA();
void ingresarP();
void mostrarP();
void buscarP();
void modificarP();
void eliminarP();


void main()
{
	char opc;
	b:
	if (o==true)
		dib();
	

	while (opc!=3)
	{
		system("color 0f");system ("cls");
		cout<<"様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様"<<endl;
		cout<<"\n\t\t\tMenu Principal\n"<<endl;
		cout<<"\t\t1.- Reg. Estudiantes\n"<<endl;
		cout<<"\t\t2.- Reg. Profesores\n"<<endl;
		cout<<"\t\t3.- Salir"<<endl;
		cout<<"\n\t\tOpcion: ";
		cin>>opc;
	
		switch (opc)
		{
		case '1':
			regA();
			break;
		case '2':
			regp();
			break;
		case '3':
			goto a;
			break;
		default:
			cout<<"Error"<<endl<<"Numero Equivocado"<<endl;
			system("pause");
			goto b;
		}
	}
a:
cout<<endl<<"\n\t\t\tFinalizado!....";
cout<<endl<<"\n\t\tPresione enter para salir....";
cin.get();
cin.get();
}

void regA()
{

	char opc;
	while (opc!='6')
	{
	b:
	system ("cls");
	cout<<"様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様"<<endl;
	cout<<"\t\tMenu Alumno.\n";
	cout<<endl<<"1.- Ingresar.\n";
	cout<<"2.- Mostrar.\n";
	cout<<"3.- Buscar.\n";
	cout<<"4.- Modificar.\n";
	cout<<"5.- Eliminar.\n";
	cout<<"6.- Salir.\n";
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
cout<<endl<<"Finalizado!...."<<endl;
};
void ingresarA()
{
	char opc='s', op='s';
	float por;
	while (opc=='s')
	{
		
		system("cls");
		cout<<"Introducir los datos del Alumno:\n";
		cout<<"Nombre: ";
		cin.getline(alumno[i].nomA,50);
		cin.getline(alumno[i].nomA,50);
		cout<<"Apellido: ";
		cin.getline(alumno[i].apeA,50);
		cout<<"Cedula: ";
		cin>>alumno[i].CIA;
		cout<<"Sexo: ";
		cin.getline(alumno[i].sexoA,20);
		cin.getline(alumno[i].sexoA,20);	
		cout<<"Fecha de Nacimiento:\n";
		cout<<"Dia: ";
		cin>>alumno[i].fechaA.dia;
		cout<<"Mes: ";
		cin>>alumno[i].fechaA.mes;
		cout<<"A\244o: ";
		cin>>alumno[i].fechaA.ano;
		cout<<"Direccion: ";
		cin.getline(alumno[i].direccionA,100);
		cin.getline(alumno[i].direccionA,100);
		cin.get();
		cout<<"Telefono (casa): ";
		cin.getline(alumno[i].telefA,20);
		cout<<"Telefono (celular): ";
		cin.getline(alumno[i].celularA,50);
		d:
		cout<<"Desea ingresar notas: s/n ";
		cin>>op;
		op=tolower(op);
		int k=1;
		sum[i]=0;
		alumno[i].def=0;
		if (opc=='s')
		{
			system("cls");
			
			while (op=='s')
			{
		
				cout<<"Introducir la "<<k<<" nota: ";
				cin>>alumno[i].not[k].NOT;
				cout<<"Introducir el porcentaje: ";
				cin>>alumno[i].por[k];
				por=alumno[i].por[k]/100;
				alumno[i].def=alumno[i].def+(alumno[i].not[k].NOT*por);
				k++;
				sum[i]++;
				cout<<"Desea ingresar otra nota? s/n ";
				cin>>op;
				opc=tolower(op);
			}
			
		}
		if (op=='n')
			goto c;
		else
		{
			cout<<"ERROR"<<endl;
			cout<<"S o N"<<endl;
			goto d;
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

void buscarA()
{
	system("cls");
	int T;
	cout<<"Introduzca la cedula a buscar: ";
	cin>>T;
	for (int j=1;j<=i;j++)
	{
		if (alumno[j].CIA==T)
		{
			cout<<"Datos del "<<j<<" Alumno:\n";
			cout<<"Nombre: "<<alumno[j].nomA<<" "<<alumno[j].apeA<<endl;
			cout<<"Cedula: "<<alumno[j].CIA<<endl;
			cout<<"Sexo: "<<alumno[j].sexoA<<endl;	
			cout<<"Fecha de Nacimiento: "<<alumno[j].fechaA.dia<<"/"<<alumno[j].fechaA.mes<<"/"<<alumno[j].fechaA.ano<<endl;
			cout<<"Direccion: "<<alumno[j].direccionA<<endl;
			cout<<"Telefono (casa): "<<alumno[j].telefA<<endl;
			cout<<"Telefono (celular): "<<alumno[j].celularA<<endl;
			for (int l=1;l<=sum[j];l++)
			{
				cout<<l<<" nota: "<<alumno[j].not[l].NOT<<" Porcentaje: "<<alumno[j].por[l]<<"%"<<endl;
			}
			if (alumno[j].def>0)
			{
				cout<<"La definitiva es: "<<alumno[j].def<<endl;
				if ((alumno[j].def>=8) && (alumno[j].def<=9))
					cout<<endl<<"El alumno debe presentar un recuperativo"<<endl;
				if ((alumno[j].def>=10) && (alumno[j].def<=12))	
					cout<<endl<<"Puntuacion Regular"<<endl;
				if ((alumno[j].def>=13) && (alumno[j].def<=15))
					cout<<endl<<"Puntuacion Buena"<<endl;
				if ((alumno[j].def>=16) && (alumno[j].def<=18))
					cout<<endl<<"Puntuacion Eficiente"<<endl;
				if ((alumno[j].def>=19) && (alumno[j].def<=20))
					cout<<endl<<"Puntuacion Excelente"<<endl;
				j=i;
			}
			else
				cout<<endl<<"El alumno no tiene notas...."<<endl;
		}
		else
			cout<<"Cedula no encontrada"<<endl;
	}
	system("pause");
};
void modificarA()
{
		
	char opc='s', op='s';
	int T;
	int z;
	float por;
	system("cls");
	cout<<"Introduzca la cedula a buscar: ";
	cin>>T;
	for (int j=1;j<=i;j++)
	{
		if (alumno[j].CIA==T)
		{
				char opcn;
				while (opcn!='7')
				{
					b:
					system ("cls");
					cout<<"様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様"<<endl;
					cout<<"\t\tMenu Modificar.\n";
					cout<<"\nQue desea modificar?\n";
					cout<<endl<<"1.- Nombre.\n";
					cout<<"2.- Sexo.\n";
					cout<<"3.- Fecha de Nacimiento.\n";
					cout<<"4.- Direccion.\n";
					cout<<"5.- Telefonos.\n";
					cout<<"6.- Notas.\n";
					cout<<"7.- Salir.\n";
					cout<<"Opcion: ";
					cin>>opcn;

					switch (opcn)
					{
					case '1':
						system("cls");
						cout<<"Nombre: ";
						cin.getline(alumno[j].nomA,50);
						cin.getline(alumno[j].nomA,50);
						cout<<"Apellido: ";
						cin.getline(alumno[j].apeA,50);
						break;
					case '2':
						system("cls");
						cout<<"Sexo: ";
						cin.getline(alumno[j].sexoA,20);
						break;
					case '3':
						system("cls");
						cout<<"Fecha de Nacimiento:\n";
						cout<<"Dia: ";
						cin>>alumno[j].fechaA.dia;
						cout<<"Mes: ";
						cin>>alumno[j].fechaA.mes;
						cout<<"A\244o: ";
						cin>>alumno[j].fechaA.ano;
						break;
					case '4':
						system("cls");
						cout<<"Direccion: ";
						cin.getline(alumno[j].direccionA,100);
						cin.getline(alumno[j].direccionA,100);
						break;
					case '5':
						system("cls");
						cout<<"Telefono (casa): ";
						cin.getline(alumno[j].telefA,20);
						cin.getline(alumno[j].telefA,20);
						cout<<"Telefono (celular): ";
						cin.getline(alumno[j].celularA,50);
						break;
					case '6':
						system("cls");
						d:
						z=1;
						alumno[j].def=0;
						if (opc=='s')
						{
							while (op=='s')
							{
								cout<<"Introducir la "<<z<<" nota: ";
								cin>>alumno[j].not[z].NOT;
								cout<<"Introducir el porcentaje: ";
								cin>>alumno[j].por[z];
								por=alumno[j].por[z]/100;
								alumno[j].def=alumno[j].def+(alumno[j].not[z].NOT*por);
								z++;
								sum[j]++;
								cout<<"Desea ingresar otra nota? s/n ";
								cin>>op;
								op=tolower(op);
							}
						}
						if (op=='n')
							goto b;
						else
						{
							cout<<"ERROR"<<endl;
							cout<<"S o N"<<endl;
							goto d;
						}
					break;
					case '7':
						goto c;
						break;
					default:
						cout<<"\nERROR"<<endl;
						cout<<"Numero Equivocado\n"<<endl;
						system("pause");
						goto b;
				}
			}		
			j=i;
		}
		else
		{
			cout<<"Cedula invalida"<<endl;
			system("pause");
		}
	}
c:;
};
void eliminarA()
{
	int T;
	system("cls");
	cout<<"Introduzca la cedula a buscar: ";
	cin>>T;
	for (int j=1;j<=i;j++)
	{
		if (alumno[j].CIA==T)
		{	
		strcpy(alumno[j].nomA,alumno[j+1].nomA);
		strcpy(alumno[j].apeA,alumno[j+1].apeA);
		alumno[j].CIA=alumno[j+1].CIA;
		strcpy(alumno[j].sexoA,alumno[j+1].sexoA);	
		alumno[j].fechaA.dia=alumno[j+1].fechaA.dia;
		alumno[j].fechaA.mes=alumno[j+1].fechaA.mes;
		alumno[j].fechaA.ano=alumno[j+1].fechaA.ano;
		strcpy(alumno[j].direccionA,alumno[j+1].direccionA);
		strcpy(alumno[j].telefA,alumno[j+1].telefA);
		strcpy(alumno[j].celularA,alumno[j+1].celularA);
		for (int l=1;l<=sum[j];l++)
		{
			alumno[j].not[l]=alumno[j+1].not[l+1];
		}
		alumno[j].def=alumno[j+1].def;
		cout<<endl<<"Registro Eliminado\a"<<endl;
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
	int j;
	system("cls");
		cout<<"N\247\tNombre\t\tApellido\t\tCedula\t\tDefinitiva"<<endl;
		for (j=1;j<=i;j++)
			cout<<j<<"\t"<<alumno[j].nomA<<"\t\t"<<alumno[j].apeA<<"\t\t"<<alumno[j].CIA<<"\t\t"<<alumno[j].def<<endl;
		system("pause");
};




void regp()
{
	
	char opc;
	while (opc!='6')
	{
	b:
	system ("cls");
	cout<<"様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様"<<endl;
	cout<<"\t\tMenu Profesor.\n";
	cout<<endl<<"1.- Ingresar.\n";
	cout<<"2.- Mostrar.\n";
	cout<<"3.- Buscar.\n";
	cout<<"4.- Modificar.\n";
	cout<<"5.- Eliminar.\n";
	cout<<"6.- Salir.\n";
	cout<<"Opcion: ";
	cin>>opc;

		switch (opc)
		{
		case '1':
			ingresarP();
			break;
		case '2':
			mostrarP();
			break;
		case '3':
			buscarP();
			break;
		case '4':
			modificarP();
			break;
		case '5':
			eliminarP();
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
cout<<endl<<"Finalizado!...."<<endl;
};

void ingresarP()
{
	char opc='s';
	int k;
	while (opc=='s')
	{

		system("cls");
		cout<<"Introducir los datos del Profesor:\n";
		cout<<"Nombre: ";
		cin.getline(prof[x].nomP,50);
		cin.getline(prof[x].nomP,50);
		cout<<"Apellido: ";
		cin.getline(prof[x].apeP,50);
		cout<<"Cedula: ";
		cin>>prof[x].CIP;
		cout<<"Sexo: ";
		cin.getline(prof[x].sexoP,20);
		cin.getline(prof[x].sexoP,20);	
		cout<<"Fecha de Nacimiento:\n";
		cout<<"Dia: ";
		cin>>prof[x].fachaP.dia;
		cout<<"Mes: ";
		cin>>prof[x].fachaP.mes;
		cout<<"A\244o: ";
		cin>>prof[x].fachaP.ano;
		cout<<"Direccion: ";
		cin.getline(prof[x].direccionP,100);
		cin.getline(prof[x].direccionP,100);
		cin.get();
		cout<<"Telefono (casa): ";
		cin.getline(prof[x].telefP,20);
		cout<<"Telefono (celular): ";
		cin.getline(prof[x].celularP,50);
		mat[x]=1;
		k=1;
		char op='s';
		while (op=='s')
		{
			cout<<"Materia dictada: ";
			cin.getline(prof[x].M[k].materia,100);
			cin.getline(prof[x].M[k].materia,100);
			cout<<"Semestre/A\244o de la materia: ";
			cin>>prof[x].M[k].sem;
			k++;
			mat[x]++;
			d:
			cout<<"Existe otra materia? s/n ";
			cin>>op;
			op=tolower(op);
		}
		if (op=='n')
			goto c;
		else
		{
			cout<<"ERROR"<<endl;
			cout<<"S o N"<<endl;
			goto d;
		}
		
		c:
		cout<<"Desea continuar con otro Profesor? s/n ";
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

};

void mostrarP()
{
		
	int j;
	system("cls");
	cout<<"N\247\tNombre\t\tApellido\t\tCedula"<<endl;
		for (j=1;j<=x;j++)
			cout<<j<<"\t"<<prof[j].nomP<<"\t\t"<<prof[j].apeP<<"\t\t"<<prof[j].CIP<<endl;
		system("pause");

	
};

void buscarP()
{
	system("cls");
	int T;
	cout<<"Introduzca la cedula a buscar: ";
	cin>>T;
	for (int j=1;j<=x;j++)
	{
		if (prof[j].CIP==T)
		{
			cout<<"Datos del "<<j<<" profesor:\n";
	cout<<"Nombre: "<<prof[j].nomP<<" "<<prof[j].apeP<<endl;
	cout<<"Cedula: "<<prof[j].CIP<<endl;
	cout<<"Sexo: "<<prof[j].sexoP<<endl;	
	cout<<"Fecha de Nacimiento: "<<prof[j].fachaP.dia<<"/"<<prof[j].fachaP.mes<<"/"<<prof[j].fachaP.ano<<endl;
	cout<<"Direccion: "<<prof[j].direccionP<<endl;
	cout<<"Telefono (casa): "<<prof[j].telefP<<endl;
	cout<<"Telefono (celular): "<<prof[j].celularP<<endl;
	cout<<"Materia dictada: "<<endl;
	for (int z=1;z<=mat[j];z++)
			cout<<"Materia: "<<prof[j].M[z].materia<<"\tSem/a\244o: "<<prof[j].M[z].sem<<endl;
	j=x;
		}
	
		else
 			cout<<"Cedula no encontrada"<<endl;
	}
		system("pause");
};

void modificarP()
{
	char opc='s', op='s';
	int T, l;

	system("cls");
	cout<<"Introduzca la cedula a buscar: ";
	cin>>T;
	for (int j=1;j<=x;j++)
	{
		if (prof[j].CIP==T)
		{
				char opcn;
				while (opcn!='7')
				{
					b:
					system ("cls");
					cout<<"様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様"<<endl;
					cout<<"\t\tMenu Modificar.\n";
					cout<<"\nQue desea modificar?\n";
					cout<<endl<<"1.- Nombre.\n";
					cout<<"2.- Sexo.\n";
					cout<<"3.- Fecha de Nacimiento.\n";
					cout<<"4.- Direccion.\n";
					cout<<"5.- Telefonos.\n";
					cout<<"6.- Materias cursadas.\n";
					cout<<"7.- Salir.\n";
					cout<<"Opcion: ";
					cin>>opcn;

					switch (opcn)
					{
					case '1':
						system("cls");
						cout<<"Nombre: ";
						cin.getline(prof[j].nomP,50);
						cin.getline(prof[j].nomP,50);
						cout<<"Apellido: ";
						cin.getline(prof[j].apeP,50);
						break;
					case '2':
						system("cls");
						cout<<"Sexo: ";
						cin.getline(prof[j].sexoP,20);
						break;
					case '3':
						system("cls");
						cout<<"Fecha de Nacimiento:\n";
						cout<<"Dia: ";
						cin>>prof[j].fachaP.dia;
						cout<<"Mes: ";
						cin>>prof[j].fachaP.mes;
						cout<<"A\244o: ";
						cin>>prof[j].fachaP.ano;
						break;
					case '4':
						system("cls");
						cout<<"Direccion: ";
						cin.getline(prof[j].direccionP,100);
						cin.getline(prof[j].direccionP,100);
						break;
					case '5':
						system("cls");
						cout<<"Telefono (casa): ";
						cin.getline(prof[j].telefP,20);
						cin.getline(prof[j].telefP,20);
						cout<<"Telefono (celular): ";
						cin.getline(prof[j].celularP,50);
						break;
					case '6':
						system("cls");
						mat[j]=1;
						l=1;
						while (op=='s')
						{
							cout<<"Materia dictada: ";
							cin.getline(prof[j].M[l].materia,100);
							cin.getline(prof[j].M[l].materia,100);
							cout<<"Semestre/A\244o de la materia: ";
							cin>>prof[j].M[l].sem;
							l++;
							mat[j]++;
							d:
							cout<<"Existe otra materia? s/n ";
							cin>>op;
							op=tolower(op);
						}
							if (op=='n')
								goto c;
							else
							{
								cout<<"ERROR"<<endl;
								cout<<"S o N"<<endl;
								goto d;
							}
					c:;
					break;
					case '7':
						goto c;
						break;
					default:
						cout<<"\nERROR"<<endl;
						cout<<"Numero Equivocado\n"<<endl;
						system("pause");
						goto b;
					}
				}		
			j=x;
	
		}
		else
		{
			cout<<"Cedula invalida"<<endl;
			system("pause");
		}
	}
	
};

void eliminarP()
{
	system("cls");
	int T;
	cout<<"Introduzca la cedula a buscar: ";
	cin>>T;
	for (int j=1;j<=x;j++)
	{
		if (prof[j].CIP==T)
		{
			strcpy(prof[j].nomP,prof[j+1].nomP);
			strcpy(prof[j].apeP,prof[j+1].apeP);
			prof[j].CIP=prof[j+1].CIP;
			strcpy(prof[j].sexoP,prof[j+1].sexoP);	
			prof[j].fachaP.dia=prof[j+1].fachaP.dia;
			prof[j].fachaP.mes=prof[j+1].fachaP.mes;
			prof[j].fachaP.ano=prof[j+1].fachaP.ano;
			strcpy(prof[j].direccionP,prof[j+1].direccionP);
			strcpy(prof[j].telefP,prof[j+1].telefP);
			strcpy(prof[j].celularP,prof[j+1].celularP);
			for (int z=1;z<=mat[j];z++)
			{
				strcpy(prof[j].M[z].materia,prof[j+1].M[z].materia);
				prof[j].M[z].sem=prof[j+1].M[z].sem;
			}
			cout<<"\n\n\t\t\tProfesor Eliminado\a"<<endl;
			j=x;
		}
		else
		{
 			cout<<"Cedula invalida"<<endl;
			j=x;
		}
	}
	system("pause");
};

void dib()
{
	system ("cls");
	system("color 0f");
		cout<<"様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様\n";
		cout<<"\t\t   ***  *****  ***  ***** ****  *   *   ***    "<<endl;
		cout<<"\t\t  *       *   *       *   *    * * * * *   *   "<<endl;
		cout<<"\t\t   ***    *    ***    *   ***  *  *  * *****   "<<endl;	
		cout<<"\t\t      *   *       *   *   *    *     * *   *   "<<endl;
		cout<<"\t\t  ****  *****  ***    *   **** *     * *   *   "<<endl;
		cout<<"様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様\n";
		cout<<"\t\t                ****   ****   "<<endl;
		cout<<"\t\t                *   *  *      "<<endl;
		cout<<"\t\t                *   *  ***    "<<endl;	
		cout<<"\t\t                *   *  *      "<<endl;
		cout<<"\t\t                ****   ****   "<<endl;
		cout<<"様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様\n";
		cout<<"\t ****  ***  *    ***** **** *****  **** *****  ****  *   * ****  *** "<<endl;
		cout<<"\t*     *   * *      *   *      *   *       *   *    * **  * *    *    "<<endl;
		cout<<"\t*     ***** *      *   ***    *   *       *   *    * * * * ***   *** "<<endl;	
		cout<<"\t*     *   * *      *   *      *   *       *   *    * *  ** *        *"<<endl;
		cout<<"\t **** *   * **** ***** *    *****  **** *****  ****  *   * ****  *** "<<endl;
		cout<<"様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様"<<endl;

		o=false;
		system("pause");
			main();
	
}