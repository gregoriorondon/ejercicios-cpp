#include<iostream.h>
#include<stdio.h>
#include<windows.h>

typedef struct alumno
{
	int cedula;
   char nombre[50];
   char apellido[50];
   char sexo;
   int edad;
   char carrera[80];
}alum;

typedef struct _nodo 
{
	alum dato;
   struct _nodo *derecho;
   struct _nodo *izquierdo;
} tipoNodo;
 
typedef tipoNodo *pNodo;
typedef tipoNodo *Arbol;

int Vacio(Arbol r) 
{
   return r==NULL;
}

//verificar si un nodo es hoja
int EsHoja(pNodo r) 
{
   return !r->derecho && !r->izquierdo;
}

void auxAltura(pNodo nodo, int a, int *altura)
 {
   /* (2) Cada vez que llamamos a auxAltura pasamos como parámetro a+1 */
  if(nodo->izquierdo) auxAltura(nodo->izquierdo, a+1, altura); /* Rama izquierda */
  if(nodo->derecho)   auxAltura(nodo->derecho, a+1, altura);   /* Rama derecha */
  if(EsHoja(nodo) && a > *altura) *altura = a; /* Proceso (Postorden)  (3) */
}

//calcular altura del arbol
int AlturaArbol(Arbol a, int *altura) 
{
   *altura = 0; /* (1) */

   auxAltura(a, 0, altura);
   return *altura;
}



//Insertar un elemento en un árbol ABB:
void ingresar(Arbol *a, alum dat) 
{
	int j=0, i=0;
	 pNodo padre = NULL; /* (1) */
	pNodo actual = *a;  /* (2) */


	while(!Vacio(actual) && dat.cedula != actual->dato.cedula)
   {  /* (3) */
     padre = actual;
	     if(dat.cedula < actual->dato.cedula) 
		 {
			 actual = actual->izquierdo;  /* (3-a) */
			 i++;
		 }
		  else
		  {
				if(dat.cedula > actual->dato.cedula) 
					actual = actual->derecho; /* (3-b) */
				j++;
		  }
   }

   if(!Vacio(actual)) 
	   return;  /* (4) */
	
   if(Vacio(padre))
   {  /* (5) */
     *a = (Arbol)malloc(sizeof(tipoNodo));
     (*a)->dato.cedula = dat.cedula;
     (*a)->izquierdo = (*a)->derecho = NULL;
	 cout<<"Se ha guardado el dato en la raiz del arbol"<<endl;
   }
   else 
	   if(dat.cedula < padre->dato.cedula) 
	   { /* (6) */
		actual = (Arbol)malloc(sizeof(tipoNodo));
      padre->izquierdo = actual;
      actual->dato.cedula = dat.cedula;
      actual->izquierdo = actual->derecho = NULL;
	  cout<<"Se ha guardado el dato en la parte izquierda del arbol"<<endl;
   }
   else 
	   if(dat.cedula > padre->dato.cedula)
	   { /* (7) */
			actual = (Arbol)malloc(sizeof(tipoNodo));
			padre->derecho = actual;
			actual->dato.cedula = dat.cedula;
			actual->izquierdo = actual->derecho = NULL;
			cout<<"Se ha guardado en la parte derecha del arbol"<<endl;
		}
}

// Eliminar un elemento del arbol
void eliminar(Arbol a, int dat) 
{
   pNodo padre = NULL; /* (1) */
   pNodo actual;
   pNodo nodo;
   char aux;

   actual=a;
   while(!Vacio(actual))
   { /* Búsqueda (2) else implícito */
      if(dat == actual->dato.cedula)
	  { /* (3) */
		 if(EsHoja(actual))
		 { /* (3-a) */
           if(padre)/* (3-a-i caso else implícito) */
              if(padre->derecho == actual)
				  padre->derecho = NULL;  /* (3-a-ii) */
               else 
				   if(padre->izquierdo == actual)
					   padre->izquierdo = NULL; /* (3-a-iii) */
            free(actual); /* (3-a-iv) */
            actual = NULL; 
            return;
         }
         else 
		 { /* (3-b) */
            /* Buscar nodo */
           padre = actual; /* (3-b-i) */
           if(actual->derecho)
			{
               nodo = actual->derecho;
               while(nodo->izquierdo) 
			   {
                  padre = nodo;
                  nodo = nodo->izquierdo;
               }
            }
            else 
			{
               nodo = actual->izquierdo;
               while(nodo->derecho)
			   {
                  padre = nodo;
                  nodo = nodo->derecho;
               }
            }
            /* Intercambio */
            aux = actual->dato.cedula; /* (3-b-ii) */
            actual->dato.cedula = nodo->dato.cedula;
            nodo->dato.cedula = aux;
            actual = nodo;
         }
      }
      else 
	  {
         padre = actual;
         if(dat > actual->dato.cedula) 
			 actual = actual->derecho; /* (4) */
         else 
			 if(dat < actual->dato.cedula)
				 actual = actual->izquierdo; /* (5) */
	  }
   }
}

int Buscar(Arbol a, int dat) 
{
   pNodo actual = a;

   while(!Vacio(actual)) 
   {
      if(dat==actual->dato.cedula) 
		  return TRUE; /* dato encontrado  (2) */
	  else
		  if(dat < actual->dato.cedula) 
			  actual = actual->izquierdo;  /* (3) */
	else 
	  if(dat > actual->dato.cedula) 
		  actual = actual->derecho; /* (4) */
   }
   return FALSE; /* No está en árbol (1) */
}


//InOrden
void InOrden(Arbol a) 
{
   if(a->izquierdo) InOrden(a->izquierdo); /* Subárbol izquierdo */
  // imprimir
   if(a->derecho) InOrden(a->derecho);     /* Subárbol derecho */
}

/*//PreOrden
void PreOrden(Arbol a) 
{
   imprimir
  /* if(a->izquierdo) PreOrden(a->izquierdo); /* Subárbol izquierdo */
   /*if(a->derecho) PreOrden(a->derecho);     /* Subárbol derecho */
//}

//PostOrden
//En Postorden, primero procesamos el subárbol izquierdo, después el subárbol derecho, y finalmente el nodo actual:
/*void PostOrden(Arbol a) 
{
   if(a->izquierdo) PostOrden(a->izquierdo); /* Subárbol izquierdo */
  /* if(a->derecho) PostOrden(a->derecho);     /* Subárbol derecho */
   /*Imprimir*/
//}


void main()
{
//c:
	alum dat;
	int opc=1;
	Arbol arb;
	int ced;
	while(opc!=6)
	{
		system("cls");

		cout<<"Que desea hacer?"<<endl;
		cout<<"1.- Ingresar datos"<<endl;
		cout<<"2.- Eliminar datos"<<endl;
		cout<<"3.- Buscar datos"<<endl;
		cout<<"4.- recorrer arbol"<<endl;
		cout<<"5.- Salir"<<endl;
		cout<<"Introduzca su opcion"<<endl;
		cin>>opc;
		system("cls");
		switch(opc)
		{
		case 1:
			{
				system("cls");
				cout<<"Ingrese el numero de cedula del estudiante"<<endl;
				cin>>dat.cedula;
				cout<<"Ingrese el nombre del estudiante"<<endl;
				cin.ignore();
				cin.getline(dat.nombre,50);
				cout<<"Ingrese el apellido del estudiante"<<endl;
				cin.ignore();
				cin.getline(dat.apellido,50);
				cout<<"Introduzca el sexo del alumno"<<endl;
				cin>>dat.sexo;
				cout<<"Ingrese la carrera que estudia el alumno"<<endl;
				cin.ignore();
				cin.getline(dat.carrera,80);
				ingresar(&arb,dat);
			}
		break;
		case 2:
			cout<<"Introduzca el numero de cedula a eliminar"<<endl;
			cin>>ced;
			eliminar(arb,ced);
		break;
		case 3:
			{
				cout<<"Introduzca el numero de cedula a buscar"<<endl;
				cin>>ced;
				Buscar(arb,ced);
			}
		break;
		case 4:
			InOrden(arb);
		break;
		case 5:
			goto b;
		break;
		default:
			cout<<"ERROR. Rango establecido 1-5"<<endl;
		}
	}

b:
cin.get();
cout<<"!!!!Adios!!!!"<<endl;
cin.get();
}
		
			