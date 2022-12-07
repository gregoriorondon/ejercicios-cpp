//                                   ******Estructura de Datos II******
//                                   ******Prof:Suleima Espinoza ******
//                           ******ARBOLES BINARIOS REPRESENTADOS EN UN VECTOR******

//INTEGRANTES:
//***Grasso A. Albertina C.I.V-12.046.187***
//***Moreno Yamilet      C.I.V-16.266.399***
//***Espinoza Giovanny   C.I.V-17.392.466***

#include<iostream.h>
#include<windows.h>
 
struct nodo
{
 int x,dato;
 struct nodo *padre,*hizq,*hder;
};


int vector[50];
int vecto[50];
int j=1;

struct nodo *creando(struct nodo *padren, int daton,char tipo)
 {


  struct nodo *direc;
  direc=(struct nodo *) (malloc(sizeof (struct nodo)));
  direc->padre=padren;  
  direc->dato=daton;
  vector[j]=daton;
  direc->hizq=NULL;
  direc->hder=NULL;
  if(padren!=NULL)
  {
   if(tipo=='I') padren->hizq=direc;
   else  padren->hder=direc;
  }
  return direc;
 }

void destruye_arbol(struct nodo *raizn)
 {
  if(raizn==NULL) 
	  return;
  destruye_arbol(raizn->hizq);
  destruye_arbol(raizn->hder);
  delete raizn;
 }

void recorre_en_orden(struct nodo *raizn)
 {
  if(raizn==NULL) 
	  return;
  recorre_en_orden(raizn->hizq);
  cout<<raizn->dato;
  recorre_en_orden(raizn->hder);
 }

void recorre_en_preorden(struct nodo *raizn)
 {
  if(raizn==NULL) 
  return;
  cout<<raizn->dato;
  recorre_en_preorden(raizn->hizq);
  recorre_en_preorden(raizn->hder);
 }

void recorre_en_postorden(struct nodo *raizn)
 {
  if(raizn==NULL) 
	  return;
  recorre_en_postorden(raizn->hizq);
  recorre_en_postorden(raizn->hder);
  cout<<raizn->dato;
 }


void agrega_nodo(nodo *raizn,int daton)
 {
  struct nodo *actual, *siguiente;
  char tiponodo;
   siguiente=raizn;

   while (siguiente!=NULL)
    {
     actual=siguiente;
    if (daton<actual->dato) {siguiente=actual->hizq; tiponodo='I';
	}
    else {
		siguiente=actual->hder; tiponodo='D';
	}
    }
         creando(actual,daton,tiponodo);
		 j++;
		 vector[j]=daton;
    }

struct nodo *buscanodo(struct nodo *raizn,int n)
  {
  static int i;
  static struct nodo *dir;
  if (raizn==NULL) return dir;
  if (raizn->padre==NULL) {i=0; dir=NULL;
  }
  buscanodo(raizn->hizq,n);
  i++;
  if (n==i) dir=raizn;
  buscanodo(raizn->hder,n);
  return dir;
  }

void eliminanodo(struct nodo *direcn)
  {
  struct nodo *p,*hi,*hd,*aux;
  char tipo='X';
  int caso=0;
  if (direcn==NULL) 
	  return;
  p=direcn->padre;
  hi=direcn->hizq;
  hd=direcn->hder;
  if (p!=NULL) 
  if (p->hizq==direcn) 
	  tipo='I'; 
  else 
	  tipo='D';
  if (p!=NULL) caso=caso+4;
  if (hi!=NULL) caso=caso+2;
  if (hd!=NULL) caso=caso+1;
  switch (caso) 
  {
    case 0:
		{
		cout<<"LA FUNCION NO PUEDE ELIMINAR EL NODO RAIZ "<<endl; 
		return;
		   }
    case 1:
		{
		cout<<"LA FUNCION NO PUEDE ELIMINAR EL NODO RAIZ "<<endl; 
		return;
		}
    case 2:
		{
		cout<<"LA FUNCION NO PUEDE ELIMINAR EL NODO RAIZ "<<endl; 
		return;
		}
    case 3:
		{
		cout<<"LA FUNCION NO PUEDE ELIMINAR EL NODO RAIZ "<<endl; 
		return;
		}
    case 4:
		{
		if (tipo=='I') 
			p->hizq=NULL;
		else 
			p->hder=NULL; 
		break;
		}
    case 5:
		{
		hd->padre=direcn->padre; 
		if (tipo=='I') 
			p->hizq=hd; 
		else 
			p->hder=hd; 
		break;
		}
    case 6:
		{
		hi->padre=direcn->padre; 
		if (tipo=='I') 
			p->hizq=hi; 
		else 
			p->hder=hi; 
		break;
		}
    case 7:
		{
		hi->padre=direcn->padre; 
		if (tipo=='I') 
			p->hizq=hi; 
		else 
			p->hder=hi;
            aux=hi; 
			while (aux->hder!=NULL) 
				aux=aux->hder;
            hd->padre=aux; 
			aux->hder=hd; 
			break;
		}
    }
  free(direcn);
  }

void main()
 {
  struct nodo *raiz;
  int opc,datn,dat,datr;
  cout<<"Ingresa el Nodo Raiz: ";
  cin>>datr;
  raiz=creando(NULL,datr,'X');
  while (7)
  {
system("cls");
   cout<<"      M E N U     "<<endl;
   cout<<" 1.- Crear Arbol  "<<endl;
   cout<<" 2.- Destruir Arbol  "<<endl;
   cout<<" 3.- Recorrido INORDEN "<<endl;
   cout<<" 4.- Recorrido PRE-ORDEN "<<endl;
   cout<<" 5.- Recoorido POS-ORDEN "<<endl;
   cout<<" 6.- Eliminar Numero      "<<endl;
   cout<<" 7.- Salir "<<endl;
   cout<<" Ingresa tu Opcion "<<endl;
   cin>>opc;
   switch(opc)
    {
     case 1:
            while(datn!=-0)
             {
             cout<<"Ingresa el Numero "<<endl;
             cin>>datn;
             cout<<"Terminar de Crear Numeros Ingresa el Valor -0" <<endl;
              if (datn!=-0) 
				  agrega_nodo(raiz,datn);
              };
             break;

     case 2:
             destruye_arbol(raiz);
             cout<<"ARBOL DESTRUIDO "<<endl;
             break;

     case 3:
            cout<<" RECORRIDO EN ORDEN "<<endl;
            recorre_en_orden(raiz);
            break;

     case 4:
            cout<<" RECORRIDO EN PRE-ORDEN"<<endl;
            recorre_en_preorden(raiz);
            break;

     case 5:
            cout<<" RECORRIDO EN POS-ORDEN"<<endl;
            recorre_en_postorden(raiz);
            break;

     case 6:
            cout<<"QUE NODO DESEAS ELIMINAR "<<endl;
            cin>>dat;
            eliminanodo(buscanodo(raiz,dat));
            break;

     case 7:
             exit (0);
             break;
    }
     }
 }
/*Arbol binario*: Es árbol que en cada nodo puede tener como mucho grado 2,es decir,a lo más 2 hijos que suelen denominarse 
//hijo a la izquierda e hijo a la derecha,estableciéndose de esta forma un orden en el posicionamiento de los mismos. 
//Donde podemos hacemos la implementación de los recorridos en preorden, postorden e inorden.
/// ************************REPRESENTACIÓN DE ÁRBOLES BINARIO EN UN VECTOR:****************************
// Al nivel 1 le corresponde la posición 1 del vector; al nivel 2 le corresponden las siguientes dos posiciones 
//del  vector, ya que el maximo número de nodos en el nivel 2 es dos; al nivel tres le corresponden las siguientes 
//4 posiciones, ya que  el  máximo  número  de  nodos del nivel 3 es cuatro, y así sucesivamente. 
//Los nodos en cada nivel se llenan de izquierda a derecha. A cada nodo le carresponderá una posición fija del vector.  



