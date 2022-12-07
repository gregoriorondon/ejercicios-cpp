//Programa que cuenta y suma los números pares e impares entre 1 y 100.


#include <iostream.h>
#include <stdlib.h>

int main()
{
	bool bandera;
	int impares,sumaimpares,pares,sumapares,contador;
	
	impares=sumaimpares=pares=sumapares=0;
	bandera = true;
	for(contador=1; contador<=100; contador++)
	{
		if(bandera == true)
		{
			impares+=1;
			sumaimpares = sumaimpares + contador;
			bandera = false;
		}

		else
		{
			pares+=1;
			sumapares = sumapares + contador;
			bandera = true;
		}
	}
	
	cout << "La suma de los impares es: " << sumaimpares << endl;
	cout << "El numero de impares es: " << impares << endl;
	cout << "La suma de pares es: " << sumapares << endl;
	cout << "El numero de pares es: " << pares << endl;
  
	system("PAUSE");     
	return 0;
}
