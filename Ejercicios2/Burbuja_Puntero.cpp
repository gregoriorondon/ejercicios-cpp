#include <iostream>
#include <iomanip>

using namespace std;

void orden( int *, const int );    // prototipo
void swap( int * const, int * const );  // prototipo

int main()
{
   const int nSize = 10;
   int a[ nSize ] = { 3, 9, 14, 27, 18, 154, 8, 6, 74, 33 };

   cout << "\nElementos a ordenar\n";

   for ( int j = 0; j < nSize; j++ )
   {
      cout << setw( 5 ) << a[ j ];
	  cin.get();
   }
   
   orden( a, nSize );  // ordena el arreglo

   cout << "\nElementos ordenados\n";

   for (  j = 0; j < nSize; j++ )
   {
      cout << setw( 5 ) << a[ j ];
	  cin.get();
   }
   
   cout << endl;

   return 0;  // indica terminación exitosa

}

void orden( int *matriz, const int nSize )
{
   for ( int pasada = 0; pasada < nSize - 1; pasada++ )
   {
      for ( int k = 0; k < nSize - 1; k++ )
      {
         if ( matriz[ k ] > matriz[ k + 1 ] )
         {
            swap( &matriz[ k ], &matriz[ k + 1 ] );
         }
      }
   }
} 

void swap( int * const ptrElemento1, int * const ptrElemento2 )
{
   int mantiene = *ptrElemento1;
   *ptrElemento1 = *ptrElemento2;
   *ptrElemento2 = mantiene;
}