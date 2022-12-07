#include<iostream.h>
#include<string.h>
#include<process.h>
#include<fstream.h>

struct rsala
{
	char cod[100],nomb[100],num_s[100];
};

struct usuario
{
	char cd[100],cod[100],nomb[100],tip[100];
};

struct factura
{
	char num_s[100],h[100],fecha[100];
	int tc,num_f;
};

struct golosinas
{
	char produc[100][100];
	int monind[100],monto,num_f;
};

rsala rs[100];
usuario u[100];
factura f[100];
golosinas g[100];
int i=0,m=0,n=0,h=0;

void reg_sala()
{

	char resp;
	system("cls");
	cout<<"\n\t\t\t\tREGISTRAR SALA"<<endl;
	do
	{
		ofstream PAC("Salas.txt",ios::app);		
		cout<<endl<<"Int Codigo de la Pelicula: ";
		cin>>rs[i].cod;
		PAC<<rs[i].cod<<endl;
		cout<<endl<<"Int Nombre de la Pelicula: ";
		cin.getline(rs[i].nomb,100);
		cin.getline(rs[i].nomb,100);
		PAC<<rs[i].nomb<<endl;
		cout<<endl<<"Int Numero de la Sala: ";
		cin>>rs[i].num_s;
		PAC<<rs[i].num_s<<endl;
		PAC.close();
		cout<<endl<<"Desea registrar otra sala: ";
		cin>>resp;
		i++;
	}while(resp=='s'||resp=='S');


}


void modificar_sala()
{
	char cod[15];
	int band=1;
	system("cls");
	if(i==0)
		cout<<endl<<"No hay Salas Registradas"<<endl<<endl;
	else
	{
		cout<<"\n\t\t\t\tMODIFICAR SALA"<<endl;
	
		cout<<endl<<"Int Numero de la Sala a Modificar: ";
		cin>>cod;
		for(int j=0;j<i;j++)
		{
			if(strcmp(cod,rs[j].num_s)==0)
			{
			
				cout<<endl<<"Modifique Codigo de la Pelicula de la sala"<<cod<<":";
				cin>>rs[j].cod;
				cout<<endl<<"Modifique Nombre de la Pelicula de la sala "<<cod<<":";
				cin>>rs[j].nomb;
				system("cls");
				cout<<endl<<"\n\tDatos Modificados de la sala "<<cod<<":"<<endl;
				cin.get();
			}
		}
		if(band==0)
		{
			system("cls");
			cout<<endl<<"Número de la Sala a Modificar no Encontrado"<<endl;
		}

	}
	system("pause");

	
}

void buscar_sala()
{
	char cod[15];
	int band;
	system("cls");
	if(i==0)
		cout<<endl<<"No hay Salas Registradas"<<endl<<endl;
	else
	{
		cout<<"\n\t\t\t\tBUSCAR SALA"<<endl;
		band=0;
		cout<<endl<<"Int Numero de la Sala a Consultar: "<<endl;
		cin>>cod;
		for(int j=0;j<i;j++)
		{
			if(strcmp(cod,rs[j].num_s)==0)
			{
				band=1;
				system("cls");
				cout<<endl<<"Sala "<<rs[j].num_s;
				cout<<endl<<"Codigo de la Pelicula: "<<rs[j].cod;
				cout<<endl<<"Nombre de la Pelicula: "<<rs[j].nomb<<endl;
			}
		}
		cin.get();		
		if(band==0)
		{
			system("cls");
			cout<<endl<<"Numero de la Sala a Consultar no Encontrado"<<endl<<endl;
		}
	}
system("pause");
}

void visualizar_sala()
{
	system("cls");
	if(i==0)
		cout<<endl<<"No hay Salas Registradas"<<endl<<endl;
	else
	{
		cout<<"\n\t\t\t\tVISUALIZAR SALA"<<endl;
		for(int j=0;j<i;j++)
		{
			cout<<endl<<"Sala ("<<rs[j].num_s<<"): "<<endl;
			cout<<endl<<"Codigo de la Pelicula: "<<rs[j].cod<<endl;
			cout<<endl<<"Nombre de la Pelicula: "<<rs[j].nomb<<endl<<endl;
		}
	}
	system("pause");

}

void eliminar_sala()
{
	char cod[15];
	int band;
	system("cls");
	if(i==0)
		cout<<endl<<"No hay Salas Registradas"<<endl<<endl;
	if(i!=0)
	{
		cout<<"\n\t\t\t\tELIMINAR SALA"<<endl;
		band=0;
		cout<<endl<<"Int el Numero de la Sala a Eliminar: ";
		cin>>cod;
		for(int j=0;j<i;j++)
		{
			if(strcmp(cod,rs[j].num_s)==0)
			{
				band=1;
				cout<<endl<<"Numero de la Sala a Eliminar: "<<rs[j].num_s;
				cout<<endl<<"Codigo de la Pelicula: "<<rs[j].cod;
				cout<<endl<<"Nombre de la Pelicula: "<<rs[j].nomb<<endl<<endl;
				cin.get();
		
					for(int k=j;k<i-1;k++)
					{
					strcpy(rs[k].nomb,rs[k+1].nomb);
					strcpy(rs[k].cod,rs[k+1].cod);
					strcpy(rs[k].num_s,rs[k+1].num_s);
}
				i--;
				cin.get();
				system("cls");
				cout<<"\n\tDatos Eliminados"<<endl;

				break;		
			}
		}

		if(band==0)
		{
			system("cls");
		
			cout<<endl<<"Numero de la Sala a Eliminar no Encontrado"<<endl<<endl;
		}
		
	}
	system("pause");
}

void reg_usuario()
{
	
	char resp,opc;
	system("cls");
	cout<<"\n\t\t\t\tREGISTRAR USUARIO"<<endl;
	do
	{
		ofstream PAC("Usuarios.txt",ios::app);
		cout<<endl<<"Int Codigo del Usuario: ";
		cin>>u[m].cod;
		PAC<<u[m].cod<<endl;
		cout<<endl<<"Int Nombre del Usuario: ";
		cin.getline(u[m].nomb,100);
		cin.getline(u[m].nomb,100);
		PAC<<u[m].nomb<<endl;
		cout<<endl<<"Int Cedula del Usuario: ";
		cin>>u[m].cd;
		PAC<<u[m].cd<<endl;
		cout<<endl<<"Eliga  tipo de Usuario: ";
		PAC.close();
		cout<<endl<<"\t1._Cajeros: ";
		cout<<endl<<"\t2._Digitadores: ";
		cin>>opc;
		if(opc==1)
			strcpy(u[m].tip,"Cajeros");
		if(opc==2)
			strcpy(u[m].tip,"Digitadores");
		cout<<endl<<"Desea registrar otro Usuario: ";
		cin>>resp;
		m++;
	}while(resp=='s'||resp=='S');
}

void modificar_usuario()
{
	char cod[15];
	int band,opc;
	system("cls");
	if(m==0)
		cout<<endl<<"No hay Usuarios Registrados"<<endl<<endl;
	
	else

	{
		cout<<"\n\t\t\t\tMODIFICAR USUARIO"<<endl;
		band=0;
		cout<<endl<<"Int Cedula del Usuario a Modificar: ";
		cin>>cod;
		for(int j=0;j<m;j++)
		{
			if(strcmp(cod,u[j].cd)==0)
			{
				band=1;
				cout<<endl<<"Modifique Codigo del Usuario"<<" "<<j<<":" ;
				cin>>u[j].cod;
				cout<<endl<<"Modifique Nombre del Usuario"<<" "<<j<<":" ;
				cin.getline(u[j].nomb,100);
				cin.getline(u[j].nomb,100);
				cout<<endl<<"Modifique tipo de Usuario"<<" "<<j<<":" ;
				cout<<endl<<"\t1._Cajeros: ";
				cout<<endl<<"\t2._Digitadores: ";
				cin>>opc;
				if(opc==1)
					strcpy(u[m].tip,"Cajeros");
				if(opc==2)
					strcpy(u[m].tip,"Digitadores");
				system("cls");
				cout<<endl<<"\n\tDatos Modificados"<<endl;
				cin.get();
			}
		}
		if(band==0)
		{
			system("cls");
			cout<<endl<<"Numero del Usuario a Eliminar no Encontrado"<<endl;
		}
	}
	system("pause");

}

void buscar_usuario()
{
	char cod[15];
	int band;
	system("cls");
	if(m==0)
		cout<<endl<<"No hay Usuario Registrados"<<endl<<endl;
	else
	{
		cout<<"\n\t\t\t\tBUSCAR USUARIO"<<endl;
		band=0;
		cout<<endl<<"Int Cedula del Usuario a Consultar: "<<endl;
		cin>>cod;
		for(int j=0;j<m;j++)
		{
			if(strcmp(cod,u[j].cd)==0)
			{
				band=1;
				system("cls");
				cout<<endl<<"Cedula del Usuario: "<<u[j].cd;
				cout<<endl<<"Codigo del Usuario: "<<u[j].cod;
				cout<<endl<<"Nombre del Usuario: "<<u[j].nomb;
				cout<<endl<<"Tipo de Usuario: "<<u[j].tip<<endl;
			}
			cin.get();
		}
		if(band==0)
		{
			system("cls");
			cout<<endl<<"Cedula del Usuario a Consultar no Encontrada"<<endl<<endl;
		}
	}
	system("pause");
}

void visualizar_usuario()
{
	system("cls");
	if(m==0)
		cout<<endl<<"No hay Usuarios Registrados"<<endl<<endl;
	else
	{
		cout<<"\n\t\t\t\tVISUALIZAR USUARIO"<<endl;
		for(int j=0;j<m;j++)
		{
			cout<<endl<<"Usuario ("<<j+1<<"): "<<endl;
			cout<<endl<<"Codigo del Usuario: "<<u[j].cod<<endl;
			cout<<endl<<"Nombre del Usuario: "<<u[j].nomb<<endl;
			cout<<endl<<"Cedula del Usuario: "<<u[j].cd<<endl;
			cout<<endl<<"Tipo de Usuario: "<<u[j].tip<<endl<<endl;
		}
	}
system("pause");
}

void eliminar_usuario()
{
	char cod[15];
	int band;
	system("cls");
	if(m==0)
		cout<<endl<<"No hay Usuario Registrados"<<endl<<endl;
	else
	{
		cout<<"\n\t\t\t\tBUSCAR USUARIO"<<endl;
		band=0;
		cout<<endl<<"Int Cedula del Usuario a Consultar: "<<endl;
		cin>>cod;
		for(int j=0;j<m;j++)
		{
			if(strcmp(cod,u[j].cd)==0)
			{
				band=1;
				system("cls");
				cout<<endl<<"Cedula del Usuario a Eliminar: "<<u[j].cd;
				cout<<endl<<"Codigo del Usuario: "<<u[j].cod;
				cout<<endl<<"Nombre del Usuario: "<<u[j].nomb;
				cout<<endl<<"Tipo de Usuario: "<<u[j].tip<<endl;
				for(int k=j;k<m;k++)
				{
					strcpy(u[k].cd,u[k+1].cd);
					strcpy(u[k].cod,u[k+1].cod);
					strcpy(u[k].nomb,u[k+1].nomb);
					strcpy(u[k].tip,u[k+1].tip);
				}
				m--;
				cin.get();
				cin.get();
				system("cls");
				cout<<"\n\tDatos Eliminados"<<endl;
				break;
			}

		}
		if(band==0)
		{
			system("cls");
			cout<<endl<<"Numero de Cedula a Eliminar no Encontrado"<<endl<<endl;
		}
	}
system("pause");
}

void reg_factura()
{
	system("cls");
	char resp;
	cout<<"\n\t\t\t\tREGISTRAR FACTURAS"<<endl;
	do
	{
		ofstream PAC("Facturas.txt",ios::app);
		f[n].num_f=n+1;
		cout<<endl<<" Factura Numero "<<f[n].num_f;
		cout<<endl<<"Int Numero de Sala: ";
		cin>>f[n].num_s;
		PAC<<f[n].num_s<<endl;
		cout<<endl<<"Int Hora de la Funcion: ";
		cin>>f[n].h;
		PAC<<f[n].h<<endl;
		cout<<endl<<"Int Fecha de la Funcion: ";
		cin>>f[n].fecha;
		PAC<<f[n].fecha<<endl;
		cout<<endl<<"Int Total a Cancelar: ";
		cin>>f[n].tc;
		PAC<<f[n].tc<<endl;
		PAC.close();
		cout<<endl<<"Desea Realizar otra Factura s/n: ";
		cin>>resp;
		n++;
	}while(resp=='s');
}
void visualizar_factura_en()
{
	system("cls");

	if(n==0)
		cout<<endl<<"No hay Facturas"<<endl<<endl;
	else
	{
	system("cls");
	for(int w=0;w<n;w++)
		{
			cout<<"Factura numero :"<<f[w].num_f<<endl;
			cout<<" Sala Numero" <<f[w].num_s<<endl;
			cout<<f[w].h<<" Es la hora de la funcion"<<endl;
			cout<<f[w].fecha<<" Es la fecha de la funcion"<<endl;
			cout<<"El total a cancelar es:" <<f[w].tc<<endl;
		}


		
	}
	system ("pause");
}

void reg_golosinas()
{
	system("cls");
	ofstream PAC("Golosinas.txt",ios::app);
	char resp,resp2;
	int j=0,acum=0;
	do
	{
		system("cls");
		j=0;
		acum=0;
		g[h].num_f=h+1;
		cout<<"\n\t\t\t\tREGISTRAR GOLOSINAS"<<endl;
		do
		{
			ofstream PAC("Golosinas.txt",ios::app);
			cout<<endl<<"\nInt Nombre del Producto: "<<endl;
			cin.getline(g[h].produc[j],100);
			cin.getline(g[h].produc[j],100);
			PAC<<g[h].produc[j]<<endl;
			cout<<endl<<"Int Precio del Producto: "<<endl;
			cin>>g[h].monind[j];
			PAC<<g[h].monind[j]<<endl;
			cout<<endl<<"Desea Comprar Otro Producto s/n:";
			cin>>resp;
			j++;
		}while(resp=='s');
		for(int k=0;k<j;k++)
			acum=acum+g[h].monind[k];
		g[h].monto=acum;
		cout<<endl<<"El Total a pagar es: "<<g[h].monto<<endl;
		PAC<<g[h].monto;
		PAC.close();
		cout<<endl<<"Desea Registrar otra Venta: ";
		cin>>resp2;
		h++;
	}while(resp2=='s'||resp2=='S');
}

void mnu_sala()
{
	int opc1;  
	do
	{
		system("cls");
		cout<<endl<<"\n\n\t\t\t\t\tSALAS: "<<endl<<endl;
		cout<<endl<<"\n\t\t\t\t1._Registrar Sala: ";
		cout<<endl<<"\n\t\t\t\t2._Modificar Sala: ";
		cout<<endl<<"\n\t\t\t\t3._Eliminar Sala: ";
		cout<<endl<<"\n\t\t\t\t4._Buscar Sala: ";
		cout<<endl<<"\n\t\t\t\t5._Visualizar Salas: ";
		cout<<endl<<"\n\t\t\t\t6._Salir: "<<endl;
		cout<<endl<<"Que desea Hacer: ";
		cin>>opc1;
		if(opc1==1)
			reg_sala();
		if(opc1==2)
			modificar_sala();
		if(opc1==3)
			eliminar_sala();
		if(opc1==4)
			buscar_sala();
		if(opc1==5)
			visualizar_sala();
	}while(opc1!=6);

}

void mnu_usuario()
{

	int opc2;
	do
	{
		system("cls");
		cout<<endl<<"\n\n\t\t\t\t\tUSUARIOS: "<<endl<<endl;
		cout<<endl<<"\n\t\t\t\t1._Registrar Usuario: ";
		cout<<endl<<"\n\t\t\t\t2._Modificar Usuario: ";
		cout<<endl<<"\n\t\t\t\t3._Eliminar Usuario: ";
		cout<<endl<<"\n\t\t\t\t4._Buscar Usuario: ";
		cout<<endl<<"\n\t\t\t\t5._Visualizar Usuarios: ";
		cout<<endl<<"\n\t\t\t\t6._Menu Anterior: "<<endl;
		cout<<endl<<"Que desea Hacer: ";
		cin>>opc2; 
		if(opc2==1)
			reg_usuario();
		if(opc2==2)
			modificar_usuario();
		if(opc2==3)
			eliminar_usuario();
		if(opc2==4)
			buscar_usuario();
		if(opc2==5)
			visualizar_usuario();
	}while(opc2!=6);
}

void main()
{


	int opc;
	opc=-1;
	do
	{
	                    
		cout<<endl<<"\n\t\t\t\t1._Menu Sala: ";
		cout<<endl<<"\n\t\t\t\t2._Menu Usuario: ";
		cout<<endl<<"\n\t\t\t\t3._Facturar Entradas: ";
		cout<<endl<<"\n\t\t\t\t4._Visualizar Facturas Entradas: ";
		cout<<endl<<"\n\t\t\t\t5._Facturar Golosinas: ";
		cout<<endl<<"\n\t\t\t\t0._Salir del Programa: "<<endl;
		cout<<endl<<"Eliga una Opcion: ";
		cin>>opc;
		if(opc==1)
			mnu_sala();
		if(opc==2)
			mnu_usuario();
		if(opc==3)
			reg_factura();
		if(opc==4)
			visualizar_factura_en();
		if(opc==5)
			reg_golosinas();
	}while(opc!=0);
	cin.get();
	cin.get();
}