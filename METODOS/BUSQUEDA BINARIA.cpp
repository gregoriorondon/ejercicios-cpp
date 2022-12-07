/* BRICEÑO RIVERO LUIS ALEJANDRO
	C.I. 18.985.676*/
#include <iostream.h>
int busquedaBinaria(int[], int, int); 
void main()
{
  int clave=0, tamano=0;
  int a[256];
  	char opc='s';

	while (opc=='s' || opc=='S')
	{
	cout<<"Introduzca un elemento: ";
	cin>>a[tamano];
	tamano++;
	cout<<"Desea ingresar otro? (s/n) ";
	cin>>opc;
	}
	cout << "Indique un valor a buscar y se le devolvera el indice: ";
	cin >> clave;
	cout<< "Su valor se encuentra en arreglo["<<busquedaBinaria(a,tamano,clave)<<"]" << endl;
cin.get();
cin.get();
}

int busquedaBinaria(int a[], int tamano, int clave)
{
  int Iarriba = tamano-1;
  int Iabajo = 0;
  int Icentro;
  while (Iabajo <= Iarriba)
    {
      Icentro = (Iarriba + Iabajo)/2;
	  
      if (a[Icentro] == clave)
			return Icentro;
      else
			if (clave < a[Icentro])
			 Iarriba=Icentro-1;
			else
			 Iabajo=Icentro+1;
  }
  return -1;
}
