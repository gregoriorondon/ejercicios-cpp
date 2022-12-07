#include<iostream.h>
#include<string.h>
#include<math.h>
struct alumno
{
	char cedula[11];
	char nombre[24];
	char carrera[2];
	char ultimo[3];
	char funcion;
	int horas;
};
struct profe
{
	char cedula[11];
	char nombre[24];
	char codigo[4];
};
alumno afacil[20];
alumno amedio[20];
alumno aavansado[20];
profe pfacil[20];
profe pmedio[20];
profe pavansado[20];
int i=0, b=0, c=0;
int d=0, e=0, f=0;
void insertaralu();
//void elimialu();
void modialu();
void insertarpro();
//void elimipro();
void modipro();
void consulta();
void consultapro();
void main()
{
	char t='s';
	int opc;
	while(t=='s')
	{
		cout<<"      Menu     ";
		cout<<"\n";
		cout<<"1.-Instertar alumno";
		cout<<"\n";
		cout<<"2.-Eliminar alumno";
		cout<<"\n";
		cout<<"3.-Modificar alumno";
		cout<<"\n";
		cout<<"4.-Insertar profesor";
		cout<<"\n";
		cout<<"5.-Eliminar profesor";
		cout<<"\n";
		cout<<"6.-Modificar profesor";
		cout<<"\n";
		cout<<"7.-Consulta de algun curso";
		cout<<"\n";
		cout<<"8.-Consulta de un profesor de cierto curso";
		cout<<"\n";
		cout<<"9.-Salir";
		cout<<"\n";
		cin>>opc;
		if(opc==1)
		{
			insertaralu();
		}
		else
		{
			if(opc==2)
			{
		//	elimialu();
			}
			else
			{
				if(opc==3)
				{
					modialu();
				}
				else
				{
					if(opc==4)
					{
						insertarpro();
					}
					else
					{
						if(opc==5)
						{
					//		elimipro;
						}
						else
						{
							if(opc==6)
							{
						//		modipro;
							}
							else
							{
								if(opc==7)
								{
								consulta();
								}
								else
								{
									if(opc==8)
									{
									consultapro();
									}
									else
									{
										if(opc==9)
										{
											t='n';
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}
void insertaralu()
{
	char opca;
	char t='s';
	cout<<"Indique el nivel del curso:";
	cout<<"\n";
	cout<<"A.-Nivel basico";
	cout<<"\n";
	cout<<"B.-Nivel medio";
	cout<<"\n";
	cout<<"C.-Nivel avansado";
	cout<<"\n";
	cin>>opca;
	while((opca=='a')&&(t=='s'))
		{
			cin.ignore();
			cout<<"Introduzca la cedula del estudiante:";
			cin.getline(afacil[i].cedula,11);
			cout<<"Introduzca el nombre y apellido del estudiante:";
			cin.getline(afacil[i].nombre,24);
			cout<<"Introduzca el codigo de la carrera que cursa:";
			cin.getline(afacil[i].carrera,2);
			cout<<"Introduzca el ultimo semestre cursado:";
			cin.getline(afacil[i].ultimo,3);
			cin.getline(afacil[i].ultimo,3);
			cout<<"Introduzca la funcion de la materia:";
			cin>>afacil[i].funcion;
			cin>>afacil[i].funcion;
			cout<<"Introduzca el total de horas semanales:";
			cin>>afacil[i].horas;
			cout<<"Desea ingresar otro alumno en este curso S/N";
			cin>>t;
			i++;
		}
			while((opca=='b')&&(t=='s'))
			{
			cin.ignore();
			cout<<"Introduzca la cedula del estudiante:";
			cin.getline(amedio[b].cedula,11);
			cout<<"Introduzca el nombre y apellido del estudiante:";
			cin.getline(amedio[b].nombre,24);
			cout<<"Introduzca el codigo de la carrera que cursa:";
			cin.getline(amedio[b].carrera,2);
			cout<<"Introduzca el ultimo semestre cursado:";
			cin.getline(amedio[b].ultimo,3);
			cin.getline(amedio[b].ultimo,3);
			cout<<"Introduzca la funcion de la materia:";
			cin>>amedio[b].funcion;
			cin>>amedio[b].funcion;
			cout<<"Introduzca el total de horas semanales:";
			cin>>amedio[b].horas;
			cout<<"Desea ingresar otro alumno en este curso S/N";
			cin>>t;
			b++;
			}
				while((opca=='c')&&(t=='s'))
				{
				cin.ignore();
				cout<<"Introduzca la cedula del estudiante:";
				cin.getline(aavansado[c].cedula,11);
				cout<<"Introduzca el nombre y apellido del estudiante:";
				cin.getline(aavansado[c].nombre,24);
				cout<<"Introduzca el codigo de la carrera que cursa:";
				cin.getline(aavansado[c].carrera,2);
				cout<<"Introduzca el ultimo semestre cursado:";
				cin.getline(aavansado[c].ultimo,3);
				cin.getline(aavansado[c].ultimo,3);
				cout<<"Introduzca la funcion de la materia:";
				cin>>aavansado[c].funcion;
				cin>>aavansado[c].funcion;
				cout<<"Introduzca el total de horas semanales:";
				cin>>aavansado[c].horas;
				cout<<"Desea ingresar otro alumno en este curso S/N";
				cin>>t;
				c++;
				}
}
void insertarpro()
{
	char opca;
	char t='s';
	cout<<"Indique el nivel del curso:";
	cout<<"\n";
	cout<<"A.-Nivel basico";
	cout<<"\n";
	cout<<"B.-Nivel medio";
	cout<<"\n";
	cout<<"C.-Nivel avansado";
	cout<<"\n";
	cin>>opca;
	while((opca=='a')&&(t=='s'))
	{
		cin.ignore();
		cout<<"Introduzca la cedula del profesor:";
		cin.getline(pfacil[d].cedula,11);
		cout<<"Introduzca el nombre del profesor:";
		cin.getline(pfacil[d].nombre,24);
		cout<<"Introduzca el codigo del profesor";
		cin.getline(pfacil[d].codigo,4);
		cout<<"¿Otro profesor en este curso?S/N:";
		cin>>t;
		d++;
	}
	while((opca=='b')&&(t=='s'))
	{
		cin.ignore();
		cout<<"Introduzca la cedula del profesor:";
		cin.getline(pmedio[e].cedula,11);
		cout<<"Introduzca el nombre del profesor:";
		cin.getline(pmedio[e].nombre,24);
		cout<<"Introduzca el codigo del profesor";
		cin.getline(pmedio[e].codigo,4);
		cout<<"¿Otro profesor en este curso?S/N:";
		cin>>t;
		e++;
	}

	while((opca=='c')&&(t=='s'))
	{
		cin.ignore();
		cout<<"Introduzca la cedula del profesor:";
		cin.getline(pavansado[f].cedula,11);
		cout<<"Introduzca el nombre del profesor:";
		cin.getline(pavansado[f].nombre,24);
		cout<<"Introduzca el codigo del profesor";
		cin.getline(pavansado[f].codigo,4);
		cout<<"¿Otro profesor en este curso?S/N:";
		cin>>t;
		f++;
	}
}
void consulta()
{
	int opc;
	cout<<"1.-Consultar nivel basico:";
	cout<<"\n";
	cout<<"2.-Consultar nivel medio:";
	cout<<"\n";
	cout<<"3.-Consultar nivel avansado:";
	cin>>opc;
	if(opc==1)
	{
		for(int j=0;j<d;j++)
		{
			cout<<"Profesor:";
			cout<<pfacil[j].nombre; cout<<" ";cout<<pfacil[j].cedula; cout<<" "; cout<<pfacil[j].codigo;
			cout<<"\n";
		}
		for(int k=0;k<i;k++)
		{
			cout<<afacil[k].cedula; cout<<"  "<<afacil[k].nombre; cout<<"  "<<afacil[k].carrera; cout<<"  "<<afacil[k].ultimo; cout<<"  "<<afacil[k].funcion; cout<<"  "<<afacil[k].horas;
			cout<<"\n";
		}
	}
	if(opc==2)
	{
		for(int q=0;q<e;q++)
		{
			cout<<"Profesor:";
			cout<<pmedio[q].nombre; cout<<" ";cout<<pmedio[q].cedula; cout<<" "; cout<<pmedio[q].codigo;
			cout<<"\n";
		}
		for(int l=0;l<b;l++)
		{
			cout<<amedio[l].cedula; cout<<"  "<<amedio[l].nombre; cout<<"  "<<amedio[l].carrera; cout<<"  "<<amedio[l].ultimo; cout<<"  "<<amedio[l].funcion; cout<<"  "<<amedio[l].horas;
			cout<<"\n";
		}
	}
	if(opc==3)
	{
		for(int u=0;u<f;f++)
		{
			cout<<"Profesor:";
			cout<<pavansado[u].nombre; cout<<" ";cout<<pavansado[u].cedula; cout<<" "; cout<<pavansado[u].codigo;
			cout<<"\n";
		}
		for(int r=0;r<c;r++)
		{
			cout<<aavansado[r].cedula; cout<<"  "<<aavansado[r].nombre; cout<<"  "<<aavansado[r].carrera; cout<<"  "<<aavansado[r].ultimo; cout<<"  "<<aavansado[r].funcion; cout<<"  "<<aavansado[r].horas;
			cout<<"\n";
		}
	}
}
void consultapro()
{
	int h, f, r;
	char t='s';
	char clave[11];
	int opc;
	cout<<"1.-Consultar nivel basico:";
	cout<<"\n";
	cout<<"2.-Consultar nivel medio:";
	cout<<"\n";
	cout<<"3.-Consultar nivel avansado:";
	cin>>opc;
	while((opc==1)&&(t=='s'))
	{
	cout<<"Introduzca la cedula del profesor";
	cin>>clave;
	for(int i=0;i<d;i++)
	{
		h=stricmp(pfacil[i].cedula, clave);
		if(h==0)
		{
			cout<<"\n";
			cout<<pfacil[i].cedula; cout<<"  "<<pfacil[i].nombre; cout<<"  "<<pfacil[i].codigo;
			cout<<"\n";
			cout<<"\n";
			t='n';
		}
		}
	}
	while((opc==2)&&(t=='s'))
		{
	cout<<"Introduzca la cedula del profesor";
	cin>>clave;
	for(int x=0;x<e+1;x++)
	{
		f=stricmp(pmedio[x].cedula, clave);
		if(f==0)
		{
			cout<<"\n";
			cout<<pmedio[x].cedula; cout<<"  "<<pmedio[x].nombre; cout<<"  "<<pmedio[x].codigo;
			cout<<"\n";
			cout<<"\n";
			t='n';
		}
		}
	}
	while((opc==3)&&(t=='s'))
	{
	cout<<"Introduzca la cedula del profesor";
	cin>>clave;
	for(int w=0;w<d+1;w++)
	{
		r=stricmp(pavansado[w].cedula, clave);
		if(r==0)
		{
			cout<<"\n";
			cout<<pavansado[w].cedula; cout<<"  "<<pavansado[w].nombre; cout<<"  "<<pavansado[w].codigo;
			cout<<"\n";
			cout<<"\n";
			t='n';
		}
		}
	}

}
void modialu()
{
	int h, f, r;
	char t='s';
	char clave[11];
	int opc;
	cout<<"1.-Modificar datos de un alumno del nivel basico:";
	cout<<"\n";
	cout<<"2.-Modificar Datos de un alumno del nivel medio:";
	cout<<"\n";
	cout<<"3.-Modificar un alumno del nivel avansado:";
	cin>>opc;
	while((opc==1)&&(t=='s'))
	{
		cout<<"Introduzca la cedula del alumno";
		cin>>clave;
		for(int p=0;p<i;p++)
		{
		h=stricmp(afacil[p].cedula, clave);
			if(h==0)
			{
			cout<<"\n";
			cout<<"Los datos del alumno son:"<<afacil[p].cedula; cout<<"  "<<afacil[p].nombre; cout<<"  "<<afacil[p].carrera; cout<<"  "<<afacil[p].ultimo; cout<<"  "<<afacil[p].funcion; cout<<"  "<<afacil[p].horas;
			cout<<"\n";
			cout<<"Introduzca los nuevos Datos:";
			cout<<"\n";
			cin.ignore();
			cout<<"Introduzca la cedula del estudiante:";
			cin.getline(afacil[p].cedula,11);
			cout<<"Introduzca el nombre y apellido del estudiante:";
			cin.getline(afacil[p].nombre,24);
			cout<<"Introduzca el codigo de la carrera que cursa:";
			cin.getline(afacil[p].carrera,2);
			cout<<"Introduzca el ultimo semestre cursado:";
			cin.getline(afacil[p].ultimo,3);
			cin.getline(afacil[p].ultimo,3);
			cout<<"Introduzca la funcion de la materia:";
			cin>>afacil[p].funcion;
			cin>>afacil[i].funcion;
			cout<<"Introduzca el total de horas semanales:";
			cin>>afacil[p].horas;
			cout<<"\n";
			t='n';
			}
		}
	}
	while((opc==2)&&(t=='s'))
	{
		cout<<"Introduzca la cedula del alumno";
		cin>>clave;
		for(int x=0;x<b;x++)
		{
		f=stricmp(amedio[x].cedula, clave);
		if(f==0)
		{
			cout<<"\n";
			cout<<"Los datos del alumno son:"<<amedio[x].cedula; cout<<"  "<<amedio[x].nombre; cout<<"  "<<amedio[x].carrera; cout<<"  "<<amedio[x].ultimo; cout<<"  "<<amedio[x].funcion; cout<<"  "<<amedio[x].horas;
			cout<<"\n";
			cout<<"Introduzca los nuevos Datos:";
			cout<<"\n";
			cin.ignore();
			cout<<"Introduzca la cedula del estudiante:";
			cin.getline(amedio[x].cedula,11);
			cout<<"Introduzca el nombre y apellido del estudiante:";
			cin.getline(amedio[x].nombre,24);
			cout<<"Introduzca el codigo de la carrera que cursa:";
			cin.getline(amedio[x].carrera,2);
			cout<<"Introduzca el ultimo semestre cursado:";
			cin.getline(amedio[x].ultimo,3);
			cin.getline(amedio[x].ultimo,3);
			cout<<"Introduzca la funcion de la materia:";
			cin>>amedio[x].funcion;
			cin>>amedio[x].funcion;
			cout<<"Introduzca el total de horas semanales:";
			cin>>amedio[x].horas;
			cout<<"\n";
			t='n';
			}
		}
	}
	while((opc==3)&&(t=='s'))
	{
		cout<<"Introduzca la cedula del alumno";
		cin>>clave;
		for(int w=0;w<c;w++)
		{
		r=stricmp(aavansado[w].cedula, clave);
		if(r==0)
		{
			cout<<"\n";
			cout<<"Los datos del alumno son:"<<aavansado[w].cedula; cout<<"  "<<aavansado[w].nombre; cout<<"  "<<aavansado[w].carrera; cout<<"  "<<aavansado[w].ultimo; cout<<"  "<<aavansado[w].funcion; cout<<"  "<<aavansado[w].horas;
			cout<<"\n";
			cout<<"Introduzca los nuevos Datos:";
			cout<<"\n";
			cin.ignore();
			cout<<"Introduzca la cedula del estudiante:";
			cin.getline(aavansado[w].cedula,11);
			cout<<"Introduzca el nombre y apellido del estudiante:";
			cin.getline(aavansado[w].nombre,24);
			cout<<"Introduzca el codigo de la carrera que cursa:";
			cin.getline(aavansado[w].carrera,2);
			cout<<"Introduzca el ultimo semestre cursado:";
			cin.getline(aavansado[w].ultimo,3);
			cin.getline(aavansado[w].ultimo,3);
			cout<<"Introduzca la funcion de la materia:";
			cin>>aavansado[w].funcion;
			cin>>aavansado[w].funcion;
			cout<<"Introduzca el total de horas semanales:";
			cin>>aavansado[w].horas;
			cout<<"\n";
			t='n';
			}
		}
	}
}
void modipro()
{
{
	int h, f, r;
	char t='s';
	char clave[11];
	int opc;
	cout<<"1.-Modificar datos de un Profesor del nivel basico:";
	cout<<"\n";
	cout<<"2.-Modificar datos de un Profesor del nivel medio:";
	cout<<"\n";
	cout<<"3.-Modificar datos de un profesor del nivel avansado:";
	cin>>opc;
	while((opc==1)&&(t=='s'))
	{
		cout<<"Introduzca la cedula del profesor:";
		cin>>clave;
		for(int p=0;p<d;p++)
		{
		h=stricmp(pfacil[p].cedula, clave);
			if(h==0)
			{
				cout<<"Los datos del profesor son:";
				cout<<"\n";
				cout<<pfacil[p].cedula; cout<<"  "<<pfacil[p].nombre; cout<<"  "<<pfacil[p].codigo;
				cout<<"\n";
				cout<<"Introduzca las modificaciones:";
				cout<<"\n";
				cin.ignore();
				cout<<"Introduzca la cedula del profesor:";
				cin.getline(pfacil[d].cedula,11);
				cout<<"Introduzca el nombre del profesor:";
				cin.getline(pfacil[d].nombre,24);
				cout<<"Introduzca el codigo del profesor";
				cin.getline(pfacil[d].codigo,4);
			}
		}
	}
	while((opc==2)&&(t=='s'))
	{
		cout<<"Introduzca la cedula del alumno";
		cin>>clave;
		for(int x=0;x<e;x++)
		{
		f=stricmp(pmedio[x].cedula, clave);
		if(f==0)
		{
			cout<<"Los datos del profesor son:";
			cout<<"\n";
			cout<<pmedio[x].cedula; cout<<"  "<<pmedio[x].nombre; cout<<"  "<<pmedio[x].codigo;
			cout<<"\n";
			cout<<"Introduzca las modificaciones:";
			cout<<"\n";	
			cin.ignore();
			cout<<"Introduzca la cedula del profesor:";	
			cin.getline(pmedio[x].cedula,11);
			cout<<"Introduzca el nombre del profesor:";
			cin.getline(pmedio[x].nombre,24);
			cout<<"Introduzca el codigo del profesor";
			cin.getline(pmedio[x].codigo,4);
		}
		}
	}
	while((opc==3)&&(t=='s'))
	{
		cout<<"Introduzca la cedula del alumno";
		cin>>clave;
		for(int w=0;w<f;w++)
		{
		r=stricmp(aavansado[w].cedula, clave);
		if(r==0)
		{
			cout<<"Los datos del profesor son:";
			cout<<"\n";
			cout<<pavansado[w].cedula; cout<<"  "<<pavansado[w].nombre; cout<<"  "<<pavansado[w].codigo;
			cin.ignore();
			cout<<"Introduzca la cedula del profesor:";
			cin.getline(pavansado[w].cedula,11);
			cout<<"Introduzca el nombre del profesor:";
			cin.getline(pavansado[w].nombre,24);
			cout<<"Introduzca el codigo del profesor";
			cin.getline(pavansado[w].codigo,4);
		}
		}
	}
}




}