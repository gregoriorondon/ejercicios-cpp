//------------BLOCK 1-----------------------
#include<iostream.h>
#include<windows.h>
int can,j,i,asnt,b,x[51],mnu,f=0,nf=0,t; 
//------------BLOCK 2----------------------
void reserva();
void salida();
void menu();
void culminar();
void cancelareserva();
void verificaasiento();
void salir();
//------------BLOCK 3----------------------
void main()

{

system("color 1f");
cout<<"\n";
cout<<" Reservacion de Asientos"<<endl; 
cout<<" //////////////////\n";
cout<<"\n";
//------------BLOCK 4----------------------

for (i=1;i<=50;i++) //Dando valores a la Lista ...
x[i]=1;

salida();
menu();

}

//------------BLOBK 5----------------------

void menu()

{

while(mnu!=4)

{

cout<<"\n"; //Salto de Linea
cout<<" Que desea hacer ?\n";

cout<<"\n";
cout<<" --------------------------\n";
cout<<" Reservar Acientos .... (1)\n";
cout<<" Cancelar Reservas .... (2)\n";
cout<<" Salida .... (3)\n";
cout<<" Culminar .... (4)\n";
cout<<" --------------------------\n";
cout<<"\n";

cout<<" Eliga Opcion: ";
cin>>mnu;

switch(mnu)

{
case 1:reserva();break; 
case 2:cancelareserva();break;
case 3:salida();break;
case 4:culminar();break;

default:cout<<" Escoja una Opcion del Menu ...\n";
}

}

}

//------------BLOBK 6----------------------

void reserva()

{

verificaasiento(); // call

//------------BLOBK 7----------------------

do

{
cout<<"\n"; //Salto de Linea
cout<<" >> Cantidad de Asientos a Reservar: ";
cin>>can;

if (can>t)

{
cout<<"\n"; //Salto de Linea
cout<<" > Solo pude Rersevar: "<<t<<" ASIENTOS!\n";
cout<<"\n"; //Salto de Linea
}

}

while (can>t);

//------------BLOBK 8----------------------

cout<<" >> Area No Fumador 1 - 30, Fumador 31 - 50 <<\n";
cout<<"\n"; //Salto de Linea

for(i=1;i<=can;i++)

{
cout<<" * Ingrese Numero de Asiento: ";
cin>>asnt;

if (x[asnt]==2)

{
cout<<"\n"; //Salto de Linea
cout<<" > Este Asiento esta Ocupado!\n";
i--;
cout<<"\n"; //Salto de Linea
}

else

{
x[asnt]=2;
}

if (asnt>50)

{
cout<<"\n"; //Salto de Linea
cout<<" > Numero Invalido!\n";
i--;
cout<<"\n"; //Salto de Linea
}

}

cout<<"\n"; //Salto de Linea
salida();

can=0;
asnt=0;

}

//------------BLOBK 9----------------------

void cancelareserva()

{
verificaasiento();

do

{
cout<<"\n"; //Salto de Linea
cout<<" >> Cantidad de Asientos a CANCELAR!: ";
cin>>can;

if (can>t)

{
cout<<"\n"; //Salto de Linea
cout<<" > Solo pude CANCELAR!: "<<t<<" ASIENTOS!\n";
cout<<"\n"; //Salto de Linea
}

}

while (can>t);

//------------BLOBK 10----------------------

cout<<" >> Area Fumador 1 - 30, No Fumador 31 - 50 <<\n";
cout<<"\n"; //Salto de Linea

for(i=1;i<=can;i++)

{
cout<<" * Ingrese Numero de Asiento: ";
cin>>asnt;

if (x[asnt]==1)

{
cout<<"\n"; //Salto de Linea
cout<<" > Este Asiento esta Vacio!\n";
i--;
cout<<"\n"; //Salto de Linea
}

else

{
x[asnt]=1;
}

if (asnt>50)

{
cout<<"\n"; //Salto de Linea
cout<<" > Numero Invalido!\n";
i--;
cout<<"\n"; //Salto de Linea
}

}

cout<<"\n"; //Salto de Linea
cout<<" > Se CANCELARON LAS RESERVAS!\n";
cout<<"\n"; //Salto de Linea
salida();

}

//------------BLOBK 11----------------------

void salida()

{

cout<<"\n"; //Salto de Linea

cout<<" Zona * NO FUMADORES *\n";
cout<<" ---------------------\n";



for(j=1;j<=30;j++)

{

if(j%2>0)

{

if (x[j]==1)

{
cout<<"\n"; //Salto de Linea
cout<<" "<<j<<"-Si";
}

else

{
cout<<"\n"; //Salto de Linea
cout<<" "<<j<<"-XX";
}

}

else

{
if (x[j]==1)

{
cout<<" "<<j<<"-Si";
}

else

{
cout<<" "<<j<<"-XX";
}

}

}

cout<<"\n"; //Salto de Linea
cout<<"\n"; //Salto de Linea

cout<<" Zona * FUMADORES *\n";
cout<<" ------------------\n";

//------------BLOBK 12----------------------

for(j=31;j<=50;j++)

{

if(j%2>0)

{

if (x[j]==1)

{
cout<<"\n"; //Salto de Linea
cout<<" "<<j<<"-Si";
}

else

{
cout<<"\n"; //Salto de Linea
cout<<" "<<j<<"-XX";
}

}

else

{
if (x[j]==1)

{
cout<<" "<<j<<"-Si";
}

else

{
cout<<" "<<j<<"-XX";
}

}

}

verificaasiento();
}

//------------BLOBK 13----------------------

void verificaasiento()

{
for(i=1;i<=30;i++)

{
if(x[i]==2)
nf++;
}


for(i=31;i<=50;i++)

{
if(x[i]==2)
f++;
}

cout<<"\n"; //Salto de Linea
cout<<"\n"; //Salto de Linea

cout<<" * NO FUMADORES : "<<nf<<" Ocupados, "<<30-nf<<" Libres\n"; 
cout<<" * FUMADORES : "<<f<<" Ocupados, "<<20-f<<" Libres\n";
cout<<"\n"; //Salto de Linea
cout<<" * TOTAL : "<<f+nf<<" Ocupados, "<<50-(f+nf)<<" Libres\n";

t=50-(f+nf);

f=0;
nf=0;

if (t==0)

{
cout<<"\n"; //Salto de Linea
cout<<" > TODOS LOS ASIENTOS ESTAN RESERVADOS !\n";
cout<<"\n"; //Salto de Linea
}


}

//------------BLOBK 14----------------------

void culminar()

{
salida();
salir();

}

void salir()

{
cout<<" FIN \n";//Fin
cout<<" ///\n";
cout<<"\n";
cout<<" Visita: http//Algoritmopuro.blogspot.com. Algoritmos Dividelos y Venceras ...\n";
cout<<" Edaniel15@hotmail.com & edaniel15@gmail.com ...\n";
cout<<"\n"; //Salto de Linea
}
