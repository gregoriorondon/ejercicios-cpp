/* desarrollar un programa para gestionar una agenda de direcciones los datos de la
 agenda se almacenan en memoria en un arreglo de estructura cada una de las cuales
tienen los siguientes campos :nombre ,direccion ,telefono fijo, nombre y eliominar una entrada
 determinada por el nombre*/ 

#include <iostream.h>
#include <string.h>

 struct persona
 {
	 char nombre[20];
	 char direccion[50];
	 char telfijo[15];
	 char telmovil[15];
	 char correo[40];
 };
	void ingresar(persona agenda[20]);
	void buscar(persona agenda[20]);
	//void eliminar(persona agenda[20]);
 
void main()
	{
		persona A[20];
	 ingresar(A);
		buscar(A);
	//	eliminar(A);
		cin.get();
	}
	
	   void ingresar(persona agenda[20])

	{

    int i;	
	cout<<"ingrese los datos para las personas"<<endl;

	 for (i=0;i<=4;i++)
	 {
  
     cin.getline(agenda[i].nombre,20);
	 cin.getline(agenda[i].direccion,50);
	 cin.getline(agenda[i].telfijo,15);
	 cin.getline(agenda[i].telmovil ,15);
	 cin.getline(agenda[i].correo,40);
	 
	 }
	
	 cin.get();
	
	}
   
     void buscar(persona agenda[20])
	 {
		 int i;
		 char nom[20];

		 cout<<"ingrese ewl nombre a buscar";
		 cin.getline(nom,20);

		 for(i=0;i<=4;i++)
		 {
			 if(strcmp(agenda[i].nombre,nom)==1)
			 {
				 cout<<"registro encontrado";
				 cout<<agenda[i].direccion;
				 cout<<agenda[i].telfijo;
				 cout<<agenda[i].telmovil;
				 cout<<agenda[i].correo;
			 }

				 else
				 {	 cout<<"el nombre no existe en la agenda";
				 }
				 
			
		 }
		 cin.get();
	 }







 
  


