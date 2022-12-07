#include <iostream.h> 
#include <stdio.h> 
#include <conio.h> 
#include <stdlib.h> 
int arr[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,30}; 
int dato=30; 
 
int busBinRec(int inferior,int medio,int superior) 
{ 
   if(inferior<=superior) 
   { 
     if(arr[medio]==dato) return medio; 
     
	 else if(arr[medio]>dato) return busBinRec(inferior,(inferior+medio-1)/2,medio); 
     
	 else return busBinRec(medio+1,(medio+1+superior)/2,superior); 
   } 
   
   else return -1; 
} 
 
void main() 
{ 
//clrscr(); 
           int a=0; 
           a=busBinRec(0,20/2,20); 
             if(a==-1) printf("Dato no encontrado"); 
               else printf("Dato encontrado en la posicion : [%i]",a); 
                  getch(); 
}
