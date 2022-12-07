//Simular una pila utilizando dos colas
#include <iostream>
#include <string>

using namespace std;

struct cola {
	int numero[10];
	int fin;
	int inicio;
} C1, C2;

void agregar(int Indice, int num) {
	for (int i=Indice; i>=0; i--) {
		C1.numero[i+1] = C1.numero[i]; //se van corriendo los elementos como una cola
	}
	C1.numero[0] = num; //se llena la cola 1
	C1.fin = Indice;
}

void apilar() {
	for (int i=C1.fin; i>=0; i--) {
		int num = C1.numero[i];
		for (int j=C2.fin; j>=0; j--) {
			C2.numero[j+1] = C2.numero[j]; //se van corriendo los elementos como una cola
		}
		C2.numero[0] = num; //se llena la cola 2
		if (C2.fin < 9) {
			C2.fin++;
		}
		C1.numero[i] = 0; //se vacia la cola 1
		C1.fin--;
	}
}

void en_pila() {
	for (int i=9; i>=0; i--) {
		cout << C2.numero[i] << " "; //actua como pila, imprime primero el ultimo elemento que se agrego a la cola 2
	}
}

int main() {
	int max = 9;
	//int num;
	C1.inicio = 0, C1.fin = 0; // controles de colas a 0
	C2.inicio = 0, C2.fin = 0; // controles de colas a 0
	cout << endl << " ::: Simular una pila utilizando dos colas ::: " << endl;
	cout << endl << "introduzca 10 numeros:" << endl;
	for (int i=0; i<=max; i++) { 
		//cout << "numero " << i+1 << ": ";
		//cin >> num;
		agregar(i, i+1); //se agrega los numero del 1 a 10 a la cola 1
	}
	
	cout << endl << "cola 1: con los numeros del 1 al 10 = ";
	for (int i=0; i<=max; i++) {
		cout << C1.numero[i] << " "; //se imprime la cola 1
	}
	cout << endl;
	
	apilar(); //copiar de una cola a otra
	
	cout << endl << "cola 2: pasada de la cola 1 = ";
	for (int i=0; i<=max; i++) {
		cout << C2.numero[i] << " "; //se imprime la cola 2
	}
	cout << endl;
	
	cout << endl << "cola 2: imprimir como pila = ";
	en_pila();
	cout << endl;
   cin.get();cin.get();
	return 0;

}
