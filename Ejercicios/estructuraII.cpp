/*  
 1. Realice un programa principal para verificar el funcionamiento de las rutinas de ABB
   2. Cambie la función interna de los recorridos por un simple escritura
   3. Modifique las rutinas de tal forma que se puedan almacenar los datos de un 
   estudiante,
   a saber: cedula, nombre, apellido, sexo, carrera que estudia. El campo clave es la
 cedula*/


#include <iostream.h>

#include <ctype.h>

//Declaración de tipos:
typedef struct _nodo {
   int dato;
   struct _nodo *derecho;
   struct _nodo *izquierdo;
} tipoNodo;
 
typedef tipoNodo *pNodo;
typedef tipoNodo *Arbol;
//Insertar un elemento en un árbol ABB:
void Insertar(Arbol *a, int dat) 
{
  int Vacio;
	pNodo padre = NULL; /* (1) */
   pNodo actual = *a;  /* (2) */

   while((!Vacio(actual) && (dat != actual->dato)))
   {  /* (3) */
      padre = actual;
      if(dat < actual->dato) actual = actual->izquierdo;  /* (3-a) */
      else if(dat > actual->dato) actual = actual->derecho; /* (3-b) */
   }

   if(!Vacio(actual)) return;  /* (4) */
   if(Vacio(padre)) {  /* (5) */
      *a = (Arbol)malloc(sizeof(tipoNodo));
      (*a)->dato = dat;
      (*a)->izquierdo = (*a)->derecho = NULL;
   }
   else if(dat < padre->dato) { /* (6) */
      actual = (Arbol)malloc(sizeof(tipoNodo));
      padre->izquierdo = actual;
      actual->dato = dat;
      actual->izquierdo = actual->derecho = NULL;
   }
   else if(dat > padre->dato) { /* (7) */
      actual = (Arbol)malloc(sizeof(tipoNodo));
      padre->derecho = actual;
      actual->dato = dat;
      actual->izquierdo = actual->derecho = NULL;
  }
}
//Eliminar un elemento de un árbol ABB:

void Borrar(Arbol *a, int dat) 
{
   pNodo padre = NULL; /* (1) */
   pNodo actual;
   pNodo nodo;
   int aux;

   actual = *a;
   while(!Vacio(actual)) { /* Búsqueda (2) else implícito */
      if(dat == actual->dato) { /* (3) */
         if(EsHoja(actual)) { /* (3-a) */
            if(padre)/* (3-a-i caso else implícito) */
               if(padre->derecho == actual) padre->derecho = NULL;  /* (3-a-ii) */
               else if(padre->izquierdo == actual) padre->izquierdo = NULL; /* (3-a-iii) */
            free(actual); /* (3-a-iv) */
            actual = NULL; 
            return;
         }
         else { /* (3-b) */
            /* Buscar nodo */
            padre = actual; /* (3-b-i) */
            if(actual->derecho) {
               nodo = actual->derecho;
               while(nodo->izquierdo) {
                  padre = nodo;
                  nodo = nodo->izquierdo;
               }
            }
            else {
               nodo = actual->izquierdo;
               while(nodo->derecho) {
                  padre = nodo;
                  nodo = nodo->derecho;
               }
            }
            /* Intercambio */
            aux = actual->dato; /* (3-b-ii) */
            actual->dato = nodo->dato;
            nodo->dato = aux;
            actual = nodo;
         }
      }
      else {
         padre = actual;
         if(dat > actual->dato) actual = actual->derecho; /* (4) */
         else if(dat < actual->dato) actual = actual->izquierdo; /* (5) */
      }
   }
}
//Buscar un elemento en un árbol ABB:
int Buscar(Arbol a, int dat) {
   pNodo actual = a;

   while(!Vacio(actual)) {
      if(dat == actual->dato) return TRUE; /* dato encontrado  (2) */
      else if(dat < actual->dato) actual = actual->izquierdo;  /* (3) */
      else if(dat > actual->dato) actual = actual->derecho; /* (4) */
   }
   return FALSE; /* No está en árbol (1) */
}

Comprobar si el árbol está vacío:
int Vacio(Arbol r) {
   return r==NULL;
}
Comprobar si un nodo es hoja:
int EsHoja(pNodo r) {
   return !r->derecho && !r->izquierdo;
}
Contar número de nodos:
int NumeroNodos(Arbol a, int *contador) 
{
   *contador = 0;

   auxContador(a, contador);
   return *contador;
}

void auxContador(Arbol nodo, int *c) 
{
   (*c)++; /* Acción: incrementar número de nodos. (Preorden) */
   if(nodo->izquierdo) auxContador(nodo->izquierdo, c); /* Rama izquierda */
   if(nodo->derecho)   auxContador(nodo->derecho, c);   /* Rama derecha */
}
//Calcular la altura de un árbol:
int AlturaArbol(Arbol a, int *altura) 
{
   *altura = 0; /* (1) */

   auxAltura(a, 0, altura);
   return *altura;
}

void auxAltura(pNodo nodo, int a, int *altura)
 {
   /* (2) Cada vez que llamamos a auxAltura pasamos como parámetro a+1 */
   if(nodo->izquierdo) auxAltura(nodo->izquierdo, a+1, altura); /* Rama izquierda */
   if(nodo->derecho)   auxAltura(nodo->derecho, a+1, altura);   /* Rama derecha */
   if(EsHoja(nodo) && a > *altura) *altura = a; /* Proceso (Postorden)  (3) */
}
//Calcular la altura del nodo que contienen un dato concreto:
int Altura(Arbol a, int dat) 
{
   int altura = 0; 
   pNodo actual = a; /* (1) */

   while(!Vacio(actual)) {
      if(dat == actual->dato) return altura; /* dato encontrado. (2) */
      else {
         altura++; /* (3) */
         if(dat < actual->dato) actual = actual->izquierdo; /* (4) */
         else if(dat > actual->dato) actual = actual->derecho; /* (5) */
      }
   }
   return -1; /* No está en árbol */
}
//Aplicar una función a cada elemento del árbol, según los tres posibles recorridos:
//InOrden
void InOrden(Arbol a, void (*func)(int*))
 {
   if(a->izquierdo) InOrden(a->izquierdo, func); /* Subárbol izquierdo */
   func(&(a->dato)); /* Aplicar la función al dato del nodo actual */
   if(a->derecho) InOrden(a->derecho, func);     /* Subárbol derecho */
}
//PreOrden
void PreOrden(Arbol a, void (*func)(int*))
 {
   func(&(a->dato)); /* Aplicar la función al dato del nodo actual */
   if(a->izquierdo) PreOrden(a->izquierdo, func); /* Subárbol izquierdo */
   if(a->derecho) PreOrden(a->derecho, func);     /* Subárbol derecho */
}
//PostOrden
//En Postorden, primero procesamos el subárbol izquierdo, después el subárbol derecho, y finalmente el nodo actual:
void PostOrden(Arbol a, void (*func)(int*)) 
{
   if(a->izquierdo) PostOrden(a->izquierdo, func); /* Subárbol izquierdo */
   if(a->derecho) PostOrden(a->derecho, func);     /* Subárbol derecho */
   func(&(a->dato)); /* Aplicar la función al dato del nodo actual */
}









void main()

{


}