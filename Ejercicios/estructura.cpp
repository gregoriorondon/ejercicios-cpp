#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<string.h>
#define dim 2

/* Desarrolle un programa que pida al usuario un array de estructura llamado
cliente y dimensión 4 y que tenga los siguientes miembros: Nombre, Apellidos, DNI,
Localidad, Empresa, saldo y un miembro tipo estructurado llamado ultimo pago
este tirne Mes, Año y dia. Además el programa pide al usuario de que cliente quiere
visualizar los datos.*/

void main()
{
int x,bandera=0;
char aux[20];
struct pago
{
	char dia[10];
   char mes[10];
   char ano[10];
};

struct cliente
{
	char nombre[20];
	char apellidos[30];
	char cedula[10];
	char localidad[20];
	char empresa[20];
	float saldo;
	struct pago ultimo_pago;

}dato[dim];

for(x=0;x<dim;x++)
{
  printf("Nombre cliente[%d]: ",x+1);
  gets(dato[x].nombre);
  printf("Apellidos: ");
  gets(dato[x].apellidos);
  printf("Cedula: ");
  gets(dato[x].cedula);
  printf("Localidad: ");
  gets(dato[x].localidad);
  printf("Empresa: ");
  gets(dato[x].empresa);
  printf("Saldo: ");
  scanf("%f",&dato[x].saldo);
  printf("Dia ultimo pago: ");
  fflush(stdin);
  gets(dato[x].ultimo_pago.dia);
  printf("Mes ultimo pago: ");
  fflush(stdin);
  gets(dato[x].ultimo_pago.mes);
  printf("Ano ultimo pago: ");
  fflush(stdin);
  gets(dato[x].ultimo_pago.ano);
 }

do
{
   printf("Cliente del que quieres visualizar datos: ");
   fflush(stdin);
	gets(aux);
	for(x=0;x<dim;x++)
	{
   	if (strcmp(dato[x].nombre,aux)==0)
         {
     
		bandera=1;
         printf("Datos Cliente\n");
         printf("*****************************************\n");
         printf("Nombre cliente:dato[x].nombre");
         printf("Apellidos: %s\n",dato[x].apellidos);
         printf("Cedula: %s\n",dato[x].cedula);
         printf("Localidad: %s\n",dato[x].localidad);
         printf("Empresa: %s\n",dato[x].empresa);
         printf("Saldo: %.2f\n",dato[x].saldo);
         printf("Ultimo pago: %s-%s-%s\n",dato[x].ultimo_pago.dia,dato[x].ultimo_pago.mes,dato[x].ultimo_pago.ano);
         break;
         }
      else
      	{
         if (x==3)
         	{
            printf("Cliente no encontrado\n");
	         break;
            }
         }

   }
}while(bandera==0);



gets(dato[x].ultimo_pago.ano);
}
