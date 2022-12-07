//Simular una cola utilizando dos pilas
#include <iostream>
#include <string>

using namespace std;

struct pila 
{
	int numero[10];
	int top;
} P1, P2;

void agregar(int num) 
{
	P1.numero[P1.top] = num;
	if (P1.top < 9) 
	{
		P1.top++;
	}
}

void pila2() 
{
	for (int i=0; i <=9; i++)
	{
		P2.numero[P2.top] = P1.numero[P1.top];
		P1.numero[P1.top] = 0;
		if (P2.top < 9) {
			P2.top++;
			P1.top--;
		}
	}
}

void en_cola()
 {
	for (int i=0; i <=9; i++)
	{
		P1.numero[P1.top] = P2.numero[P2.top];
		P2.numero[P2.top] = 0;
		if (P1.top < 9) {
			P1.top++;
			P2.top--;
		}
	}
}

int main() {
	
	
	
	
	
	cout<<"********   ********   *********  *     *   :"<<endl;
	cout<<"*          *      *       *      **    *   :"<<endl;
	cout<<"*          *      *       *      * *   *   :"<<endl;
	cout<<"********   ********       *      *  *  *   :"<<endl;
	cout<<"*          *      *       *      *   * *   :"<<endl;
	cout<<"*          *      *       *      *    **   :"<<endl;
	cout<<"******** _ *      * _     *  _   *     *   :"<<endl;
		
	
	int max = 9;
	P1.top = 0;
	P2.top = 0;

	cout <<"introdusca 10 numeros:" << endl;
	for ( int i=0; i<=max; i++) 
	{ 
		agregar(i+1); //se agrega los numero del 1 a 10 a la pila 1
	}
	cout <<"pila 1: con los numeros del 1 al 10 = ";

	for ( i=0; i<=max; i++) 
	{
		cout << P1.numero[i] << " "; //se imprime la pila 1
	
	  cin.get();
	  
	}
	cout << endl;
	
	pila2();
	cout << "pila 2: copiada de pila 1 = ";
	for (i=0; i<=max; i++) {
		cout << P2.numero[i] << " "; //se imprime la pila 2
	
	   cin.get();
	   }
	
	cout << endl;
	
	en_cola();
	cout <<"pila 2 a pila 1: como una cola = ";
	for ( i=max; i>=0; i--) {
		cout << P1.numero[i] << " "; //se imprime como cola, la pila 1
	
	cin.get();
	
	}
	cout << endl;
	
	return 0;
}
