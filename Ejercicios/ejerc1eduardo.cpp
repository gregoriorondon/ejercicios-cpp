/*Simular una pila utilizando dos colas*/



#include <iostream.h>
#include <string.h>



struct cola 
{
	int numero[10];
	int fin;
	int inicio;
} a, b;

void agregar(int Indice, int num) 
{
	for (int i=Indice; i>=0; i--) 
	{
		b.numero[i+1] = a.numero[i]; 
	}
	a.numero[0] = num; //cola 1 LLENA
	a.fin = Indice;
}

void apilar()
 {
	for (int i=a.fin; i>=0; i--) 
	{
		int num = a.numero[i];
		for (int j=b.fin; j>=0; j--) 
		{
			b.numero[j+1] = b.numero[j]; 
		}
	
		b.numero[0] = num; // cola 2 LLENA
		if (b.fin < 9) 
		{
			b.fin++;
		}
		a.numero[i] = 0; //SE VACIA LA COLA 1
		a.fin--;
	}
}

void en_pila() 
{
	for (int i=9; i>=0; i--) 
	{
		cout << b.numero[i] << " "; 
	
	
	
	}
}

int main() 
{
	int max = 9;
	

	
	
	cout<<"********   ********   *********  *     *   :"<<endl;
	cout<<"*          *      *       *      **    *   :"<<endl;
	cout<<"*          *      *       *      * *   *   :"<<endl;
	cout<<"********   ********       *      *  *  *   :"<<endl;
	cout<<"*          *      *       *      *   * *   :"<<endl;
	cout<<"*          *      *       *      *    **   :"<<endl;
	cout<<"******** _ *      * _     *  _   *     *   :"<<endl;


	/*int num;*/
	a.inicio = 0, a.fin = 0;
	b.inicio = 0, b.fin = 0; 
	cout << endl << " ::: Simular una pila utilizando dos colas ::: " << endl;
	cout << endl << "introduzca 10 numeros:" << endl;
	for (int i=0; i<=max; i++) { 
		//cout << "numero " << i+1 << ": ";
		//cin >> num;
		agregar(i, i+1); //se agrega  a la cola 1
	}
	
	cout << endl << "cola 1: con los numeros del 1 al 10 = ";
	for ( i=0; i<=max; i++) {
		cout << a.numero[i] << " "; //se imprime la cola 1
	}
	cout << endl;
	
	apilar(); //pasa de una cola a otra
	
	cout << endl << "cola 2: pasada de la cola 1 = ";
	for ( i=0; i<=max; i++) {
		cout << b.numero[i] << " "; //se imprime la cola 2
	}
	cout << endl;
	
	cout << endl << "cola 2: imprimir como pila = ";
	en_pila();
	cout << endl;
   cin.get();cin.get();
	return 0;

}
