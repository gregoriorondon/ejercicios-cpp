#include<iostream.h>
#include<string.h>
#include<windows.h>
void main()
{
	system("color 1f");
	int a;
	int band;
	typedef struct
	{
		char Nombre[25];
		char Cedula[12];
		char Edad[3];
	}datos;
	datos alumnos[25];
	char r='s',opc;
	int i=0;
	while(r=='s')
	{
		cout<<"1._Insertar Datos \n";
		cout<<"2._Mostrar Datos \n";
		cout<<"3._Eliminar Datos \n";
		cout<<"4._Modificar Datos \n";
		cout<<"5._Salir \n";
		cin>>
			opc;
		if(opc=='5')
		{
			r='n';
		}
		if(opc=='1')
		{
			char a='s';
			if(i==25)
			{
				cout<<"No Caben Mas!!";
			}
			else
			{
				while(a=='s')
				{
					cin.ignore();
					cout<<"Ingrese el Nombre: ";
					cin.getline(alumnos[i].Nombre,25);
					cout<<endl;
					cout<<"Ingrese la Cedula: ";
					cin.getline(alumnos[i].Cedula,12);
					cout<<endl;
					cout<<"Ingrese la Edad: ";
					cin.getline(alumnos[i].Edad,3);cout<<endl;
					i++;
					cout<<"Desea Agregar Otro (S/N)?";
					cin>>a;
					cout<<"leo a";
					cout<<endl;
				}
			}
		}
		if(opc=='2')
		{
			if(i==0)
			{
				cout<<"No Hay Valores"<<endl<<endl;
			}
			else
			{
				for(int j=0;j<i;j++)
				{
					cout<<"Cedula   "<<alumnos[j].Cedula<<endl<<endl;
					cout<<"Nombre   "<<alumnos[j].Nombre<<endl<<endl;
					cout<<"Edad     "<<alumnos[j].Edad<<endl<<endl;
				}
			}
		}
		if(opc=='3')
		{
			if(i==0)
			{
				cout<<"No Se Puede Eliminar";
			}
			else
			{
				char aux[12];band='n';int j=0;
				cout<<endl<<"Ingrese la Cedula que Quiere Eliminar  ";
				cin.getline(aux,12);
				cin.getline(aux,12);
				while(band=='n')
				{
					if(strcmp(aux,alumnos[j].Cedula)==0)
					{
						cout<<"Desea Eliminar a:  "<<alumnos[j].Nombre;
						cin>>r;
						if(r=='n')
							cout<<"Datos no Tocados";
						else
						{
							for(int k=j;k+1<i;k++)
							{
								strcpy(alumnos[k].Nombre,alumnos[k+1].Nombre);
								strcpy(alumnos[k].Cedula,alumnos[k+1].Cedula);
								strcpy(alumnos[k].Edad,alumnos[k+1].Edad);
							}
							i--;
						}
						cout<<endl<<"DATO ELIMINADO"<<endl<<endl;
						band='s';
					}
					else
					{
						if((band=='n')&&(j==i))
						{
							cout<<"DATO NO ENCONTRADO";
						}
					}
				}
			}
		}
		if(opc=='4')
		{
			if(i==0)
			{
				cout<<"NO SE PUEDE ELIMINAR";
			}
			else
			{
				char r='s';
				char aux[12];band='n';int j=0;
				cout<<endl<<"Ingrese la Cedula que Quiere Modificar  ";
				cin.getline(aux,12);
				cin.getline(aux,12);
				while(band=='n')
				{
					if(strcmp(aux,alumnos[j].Cedula)==0)
					{
						cout<<"Desea Modificar a:  "<<alumnos[j].Nombre;
						cin>>r;
						if(r=='n')
							cout<<"Datos no Tocados";
						else
						{
							cout<<endl<<"Ingrese Nuevo Nombre"<<endl;
							cin.getline(alumnos[j].Nombre,25);
							cin.getline(alumnos[j].Nombre,25);
							cout<<"INFORMACION MODIFICADA CORRECTAMENTE"<<endl<<endl;
							band='s';
						}
					}
					else
					{
						j++;
					}
				}
			}
		}	
	}
}	