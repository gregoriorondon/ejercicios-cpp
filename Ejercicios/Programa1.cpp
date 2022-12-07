#include <iostream.h>
#include <process.h>
void main()
{
	char opc=1;
	int ne, nm, n, pm, mayor=0, P, acumn=0,numap=0, numar=0, i;

	while (opc!=3)
	{
		cout<<"1.-Desea ingresar datos"<<endl;
		cout<<"2.-Desea mostrar datos"<<endl;
		cout<<"3.-Desea salir"<<endl;
		cin>>opc;

		switch (opc)
		{
		case '1':
			cout<<"Ingrese el numero de estudiantes"<<endl; 
			cin>>ne;
			for (i=0; i<=ne; i++)
			{
				cout<<"Ingrese el numero de materias del primer estudiante"<<endl;
				cin>>nm;
				for (int j=0; j<=nm; j++)
				{
					for (int k=0; k<=5;k++)
					{
						cout<<"Ingrese la "<<k+1<<" nota"<<endl;
						cin>>n;
						
						acumn= acumn+1;
					}
					P= acumn/k;
					if (P>=10)
					{
						cout<<"El alumno aprobo la materia"<<endl;
						numap=numap+1;
					}
					else
						cout<<"El alumno reprobo la materia"<<endl;
						numar=numar+1;
				}
				pm=pm+P;
			}
			if (pm>mayor)
			{
				mayor=pm;
			}
			break;

		case '2':
			system("cls");
			cout<<"El numero de los alumnos procesados es "<<ne<<endl;
			cout<<"El numero de los alumnos aprobados es "<<numap<<endl;
			cout<<"El numero de los alumnos reprobados es "<<numar<<endl;
			cout<<"El promedio mas alto es "<<mayor<<endl;
		break;
			
		case '3':
				cout<<"Adios"<<endl;
				goto a;
		break;

			default:
				cout<<"ERROR___________ RANGO ESTABLECIDO 1-3"<<endl;
		}
	}
a:;
cin.get();
}



