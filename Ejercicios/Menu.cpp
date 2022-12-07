#include <iostream.h>
#include <stdlib.h> //para system() y exit;

void main()

{
	int opcion;
	system("cls"); //borra la pantalla al inicio
	for(;;)
	{
		cout << "\tMi Menu" << endl;
		cout << "\t=======" << endl;
		cout << "1. Opcion 1" << endl;
		cout << "2. Opcion 2" << endl;
		cout << "3. Opcion 3" << endl;
		cout << "4. Opcion 4" << endl;
		cout << "5. Salir" << endl;
		cin >> opcion;

		if (opcion==1) {
			cout << "\tHa elegido la opcion 1." << endl;
		}

		else if (opcion==2)
		{
			cout << "\tHa elegido la opcion 2." << endl;
		}
		else if (opcion==3)
		{
			cout << "\tHa elegido la opcion 3." << endl;
		}
		else if (opcion==4)
		{
			cout << "\tHa elegido la opcion 4." << endl;
		}
		else if (opcion==5)
		{
			cout << "Adios.." << endl;
			exit(0); //termina
		}
		
		else
		{
			cout << "Elija Bien..." << endl;
		}
	}
}
