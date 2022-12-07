#include <iostream.h>
#include <stdio.h>
#include <ctype.h>

struct inventario
{
	char titulo[25];
	char fecha_pub[20];
	char autor[30];
	int num;
	int pedido;
	float precio_venta;
};

void main()
{
	inventario Libro[100];
	int total=0;
	char resp;
	do
	{
		cout<<"Total de Libros: "<<(total+1)<<"\n";
		cout<<"\n¿Cual es el titulo?: ";
		gets(Libro[total].titulo);
		gets(Libro[total].titulo);
		cout<<"\n¿Cual es la Fecha de Publicacion?: ";
		gets(Libro[total].fecha_pub);
		gets(Libro[total].fecha_pub);
		cout<<"\n¿Quien es el Autor?: ";
		gets(Libro[total].autor);
		gets(Libro[total].autor);
		cout<<"\n¿Cuantos Libros existen?: ";
		cin>>Libro[total].num;
		cout<<"\n¿Cuantos Ejemplares existen pedidos?: ";
		cin>>Libro[total].pedido;
		cout<<"\n¿Cual es el Precio de Venta?: ";
		cin>>Libro[total].precio_venta;
		fflush(stdin);
		cout<<"\n¿Hay mas Libros? (S/N): ";cin>>resp;
		fflush(stdin);
		resp=toupper(resp);
		if(resp=='S')
		{
			total++;
			continue;
		}
	} while (resp=='S');
	//return 0;
}

