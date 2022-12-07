#include <iostream.h>
#include <math.h>
#include <string.h>

typedef struct 
{
	int pila;
	char letras [10];
}tipopila;

tipopila *pila;
char nom;
char op;

void Insertar(tipopila *pila)
{

	
	cout<<"I N S E R T A R"<<endl;
	cout<<"Ingrese nombre: ";
	cin>>nom;
};	


void mostrar(tipopila *pila)
{
	cout<<"M O S T R A R:"<<endl;
	cout<<"ingrese nombres:"<<endl;
	cin>>nom;

};


     void eliminar(tipopila *pila)
	 {
	cout<<"E L I M I N A R:"<<endl;
	cout<<"eliminar nom:"<<endl;
	cin>>nom;

};

void Llenar(tipopila *pila)
{
	cout<<"L L E N A R:"<<endl;
	cout<<"Llenar:"<<endl;
	cin>>nom;

};


void vaciar(tipopila *pila)
{
	cout<<"V A C I A R:"<<endl;
	cout<<"vaciar:"<<endl;
	cin>>nom;

};



void main()
{

	cout<<"***** MENU *****"<<endl;
	cout<<"1. Insertar"<<endl;
	cout<<"2. Mostrar"<<endl;
	cout<<"3. Elimimar"<<endl;
	cout<<"4. Llenar"<<endl;
	cout<<"5. Vaciar"<<endl;
	cout<<"Introducir opcion"<<endl;
	cin>>op;

	switch (op)
			{
				case '1':
					
				Insertar(&pila);
					break;
/*		  //	case '2':
				;


					Mostrar(tipopila pila);
					break;
		//		case '3':}}}}

					
					Eliminar(tipopila pila);
					break;
				
			//	case '4':
					Llenar(tipopila pila);
					break;
			//	case '5':
					Vaciar(tipopila pila);
					break;

				default:
					cout<<"E R R O R";
			}*/
	}while (op!='0');
	

cin.get();
cin.get();

}



