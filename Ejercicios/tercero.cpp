//Un sencillo ejemplo para calcular el factorial de un número recursivamente, con la finalidad de ver la diferencia entre la recursividad Final y la No Final.

//Código:

/**********************************************************
 *              F A C T O R I A L
 *
 *      Prueba de Recursividad Final y No Final
 *     
 **********************************************************/
 
#include <iostream.h>
# include <process.h>
 int factorialNoFinal(int num); 
 int factorialFinal(int num,int fact);
 
 int factorialNoFinal(int num)  // recursividad no final
 { // Pre: Verdadero
    
	  int fact;
        
        if (num==0)     // Caso que 'num' valga 0
                fact = 0;
        else {  // resto de casos de 1 hasta N
                if (num==1)
                        fact = 1;
                else
                        fact = factorialNoFinal(num-1)*num;
        }               // a medida que vamos volviendos de las llamadas
                        // recursivas, vamos calculando el factorial    
        return (fact);
        
 // Post: fact = Producto x:1..num:x
 //   fact tendra como valor el producto entre los numeros
 //   existentes entre 1 i 'num'
 }
 
 int factorialFinal(int num, int fact)  // recursividad final
 { // Pre: Verdadero
   
     
        if (num==0)     // Caso concreto que 'num' valga 0
                fact = 0;
        else {  // resto de casos de 1 hasta N
                if (num==1)
                        fact = 1*fact;
                else
                        fact = factorialFinal(num-1,fact*num);
        }       // cuando volvemos de las llamadas recursivas,
                // ya tenemos calculado el factorial
        return (fact);
        
 // Post: fact = Producto x:1..num:x
 //   fact tendra como valor el producto entre los numeros
 //   existentes entre 1 i 'num'
 }
 
 void main()
 {
        
	 int solucioFinal,solucioNoFinal,num;
        
        cout << endl << "Introduce un numero: " << endl;
        cin >> num;
        cout << endl;
        
        solucioFinal = factorialFinal(num,1);
        solucioNoFinal = factorialNoFinal(num);
        
        cout << "El factorial de " << num << " es: " << endl << endl;
        cout << "               " << "Recursividad Final: " << solucioFinal << endl;
        cout << "               " << "Recursividad No Final: " << solucioNoFinal << endl;

				 system ("pause");
 
 }
