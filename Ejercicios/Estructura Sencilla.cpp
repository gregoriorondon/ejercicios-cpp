#include <iostream.h>

// Una estructura simple para ver claramente su uso 
struct ejemplo
{
	char nombre[10];
	int telefono;
} ejemplo[21];

int main()
{    
        // Bucle para facilitar la operación de rellenar cada una de las estructuras del array
        for(int j=1;j<=3;j++)
		{
			cout << " Introduce el nombre de la " << j << " persona "<< endl;
            cin >> ejemplo[j].nombre;
            cout << "Introduce el numero de telefono de la " << j << " persona " << endl;
            cin >> ejemplo[j].telefono;
		}
			
        cout << " Resultados del programa --------------------------------------" << endl;
        cout << " Datos de la persona numero 1: " << endl;
        cout << " Nombre :" << ejemplo[1].nombre;
        cout << "  Telefono :" << ejemplo[1].telefono << endl;;
        cout << " Datos de la persona numero 2 :" << endl;
        cout << " Nombre :" << ejemplo[2].nombre;
        cout << "  Telefono :" << ejemplo[2].telefono << endl;
		cin.get();cin.get();
        return 0;
}