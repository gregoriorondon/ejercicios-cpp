#include <iostream.h>
#include <conio.h>
#include <stdio.h>
 char palabras[50];
 struct codigo{
   char va1,va2,va3,va4;
 };
 codigo simbolo;
 codigo simboloas[26];
 char codi[4];
 char l;
 int i,j,cont=0;

void inicio()
{
 for (int p=0;p<=37;p++)
 {
  simbolo.va1=' ';  simbolo.va2=' ';  simbolo.va3=' ';  simbolo.va4=' ';  
 }
}
void leercad(char cad[50]){
int ct=0;char chc=0;
while ((chc != '\r')){
 chc =getch();cad[ct]=chc;putch(chc);
 ct++;
}}


void mostrar(char cad[50]){
int ct=0;
while ((cad[ct] != '\r')){
 printf ("%c", cad[ct]);
 ct++;
};
 cout<<"\n";
}

void tranforma(int i1){
//  inireg();
  if (l=='A' || l=='a'){
    simbolo.va1='.';    simbolo.va2='-';    simbolo.va3='*';    simbolo.va4='*';
   }
  if (l=='B' || l=='b'){
    simbolo.va1='-';    simbolo.va2='.';    simbolo.va3='.';    simbolo.va4='.';
  
  }
  if (l=='C' || l=='c'){
    simbolo.va1='-';    simbolo.va2='.';    simbolo.va3='-';    simbolo.va4='.';
  
  }
  if (l=='D' || l=='d'){
    simbolo.va1='-';    simbolo.va2='.';    simbolo.va3='.';    simbolo.va4='*';
  }
 if (l=='E' || l=='e'){
    simbolo.va1='.';    simbolo.va2='*';    simbolo.va3='*';    simbolo.va4='*';
  }
 if (l=='F' || l=='f'){
    simbolo.va1='.';    simbolo.va2='.';    simbolo.va3='-';    simbolo.va4='.';
  }
 if (l=='G' || l=='g'){
    simbolo.va1='-';    simbolo.va2='-';    simbolo.va3='.';    simbolo.va4='*';
  }
 if (l=='H' || l=='h'){
    simbolo.va1='.';    simbolo.va2='.';    simbolo.va3='.';    simbolo.va4='.';
  }
 if (l=='I' || l=='i'){    
	 simbolo.va1='.';    simbolo.va2='.';    simbolo.va3='*';    simbolo.va4='*';
  }
 if (l=='J' || l=='j'){
    simbolo.va1='.';    simbolo.va2='-';    simbolo.va3='-';    simbolo.va4='-';
  }
 if (l=='K' || l=='k'){
    simbolo.va1='-';    simbolo.va2='.';    simbolo.va3='-';    simbolo.va4='*';
  }
 if (l=='L' || l=='l'){
    simbolo.va1='.';    simbolo.va2='.';    simbolo.va3='*';    simbolo.va4='*';
  }
   if (l=='M' || l=='m'){
    simbolo.va1='-';    simbolo.va2='-';    simbolo.va3='*';    simbolo.va4='*';
  }
 if (l=='N' || l=='n'){
    simbolo.va1='-';    simbolo.va2='.';    simbolo.va3='*';    simbolo.va4='*';
  }
 if (l=='O' || l=='o'){
    simbolo.va1='-';    simbolo.va2='-';    simbolo.va3='-';    simbolo.va4='*';
  }
 if (l=='P' || l=='p'){
    simbolo.va1='.';    simbolo.va2='-';    simbolo.va3='-';    simbolo.va4='.';
  }
 if (l=='Q' || l=='q'){
    simbolo.va1='-';    simbolo.va2='-';    simbolo.va3='.';    simbolo.va4='-';
  }
 if (l=='R' || l=='r'){
    simbolo.va1='.';    simbolo.va2='-';    simbolo.va3='.';    simbolo.va4='*';
  }
 if (l=='S' || l=='s'){
	 simbolo.va1='.';    simbolo.va2='.';    simbolo.va3='.';    simbolo.va4='*';
  }
 if (l=='T' || l=='t'){
    simbolo.va1='-';    simbolo.va2='*';    simbolo.va3='*';    simbolo.va4='*';
  }
 if (l=='U' || l=='u'){
    simbolo.va1='.';    simbolo.va2='.';    simbolo.va3='-';    simbolo.va4='*';
  }
 if (l=='V' || l=='v'){
	 simbolo.va1='.';    simbolo.va2='.';    simbolo.va3='.';    simbolo.va4='-';
  }
  if (l=='W' || l=='w'){
    simbolo.va1='.';    simbolo.va2='-';    simbolo.va3='-';    simbolo.va4='*';
  }
 if (l=='X' || l=='x'){
    simbolo.va1='-';    simbolo.va2='.';    simbolo.va3='.';    simbolo.va4='-';
  }
 if (l=='Y' || l=='y'){
    simbolo.va1='-';    simbolo.va2='.';    simbolo.va3='-';    simbolo.va4='-';
  }
 if (l=='Z' || l=='z'){
    simbolo.va1='-';    simbolo.va2='-';    simbolo.va3='.';    simbolo.va4='.';
  }

  simboloas[i1]=simbolo;
}

void mostrar(int k){
   cout<<" ";
   simbolo=simboloas[k];
   if (simbolo.va1!='*'){
    cout<<simbolo.va1;
   }
   if (simbolo.va2!='*'){
     cout<<simbolo.va2;
   }
   if (simbolo.va3!='*'){
     cout<<simbolo.va3;
   }
   if (simbolo.va4!='*'){
     cout<<simbolo.va4;
   }
}

void frase2morse(){
 inicio();
 leercad(palabras);
 while (palabras[i]!='\r'){
  l=palabras[i];
  tranforma(i);
  i++;
 }
 j=0;
 while (j!=i){
  mostrar(j);
  j++;
 }
 cout<<"\n";
}
//
void morse2frase(){
 inicio();
 leercad(palabras);
 char te=0;int y=0,ps=0,rp=0;te=palabras[0];
while ((te != '\0')){
 if (te==' ')
 {  ps+1;
	te=palabras[ps];
	rp++; 
 }
 y=0;
 while ((te !=' ')){
  if (te=='\0'){
   break;
  }else{

	codi[y]=palabras[ps];
    y++; ps++;
    te=palabras[ps];
  }
 }
 while (y<=3){
  if (te=='\0'){
     y--;te='*';
  }
  codi[y]='*';
  y++;
 }
 if ((codi[0]=='.') && (codi[1]=='-') && (codi[2]=='*') && (codi[3]=='*')){
   cout<<'A';
 }
 if ((codi[0]=='-') && (codi[1]=='.') && (codi[2]=='.') && (codi[3]=='.')){
   cout<<'B';
 }
 if ((codi[0]=='-') && (codi[1]=='.') && (codi[2]=='-') && (codi[3]=='.')){
   cout<<'C';
 }
 if ((codi[0]=='-') && (codi[1]=='.') && (codi[2]=='.') && (codi[3]=='*')){
   cout<<'D';
 }
 if ((codi[0]=='.') && (codi[1]=='*') && (codi[2]=='*') && (codi[3]=='*')){
   cout<<'E';
 }
 if ((codi[0]=='.') && (codi[1]=='.') && (codi[2]=='-') && (codi[3]=='.')){
   cout<<'F';
 }
 if ((codi[0]=='-') && (codi[1]=='-') && (codi[2]=='.') && (codi[3]=='*')){
   cout<<'G';
 }
 if ((codi[0]=='.') && (codi[1]=='.') && (codi[2]=='.') && (codi[3]=='.')){
   cout<<'H';
 }
 if ((codi[0]=='.') && (codi[1]=='.') && (codi[2]=='*') && (codi[3]=='*')){
   cout<<'I';
 }
 if ((codi[0]=='.') && (codi[1]=='-') && (codi[2]=='-') && (codi[3]=='-')){
   cout<<'J';
 }
 if ((codi[0]=='-') && (codi[1]=='.') && (codi[2]=='-') && (codi[3]=='*')){
   cout<<'K';
 }
 if ((codi[0]=='.') && (codi[1]=='-') && (codi[2]=='.') && (codi[3]=='.')){
   cout<<'L';
 }
 if ((codi[0]=='-') && (codi[1]=='-') && (codi[2]=='*') && (codi[3]=='*')){
   cout<<'M';
 }
 if ((codi[0]=='-') && (codi[1]=='.') && (codi[2]=='*') && (codi[3]=='*')){
   cout<<'N';
 }
 if ((codi[0]=='-') && (codi[1]=='-') && (codi[2]=='-') && (codi[3]=='*')){
   cout<<'O';
 }
 if ((codi[0]=='.') && (codi[1]=='-') && (codi[2]=='-') && (codi[3]=='.')){
   cout<<'P';
 }
 if ((codi[0]=='-') && (codi[1]=='-') && (codi[2]=='.') && (codi[3]=='-')){
   cout<<'Q';
 }
 if ((codi[0]=='.') && (codi[1]=='-') && (codi[2]=='.') && (codi[3]=='*')){
   cout<<'R';
 }
 if ((codi[0]=='.') && (codi[1]=='.') && (codi[2]=='.') && (codi[3]=='*')){
   cout<<'S';
 }
 if ((codi[0]=='-') && (codi[1]=='*') && (codi[2]=='*') && (codi[3]=='*')){
   cout<<'T';
 }
 if ((codi[0]=='.') && (codi[1]=='.') && (codi[2]=='-') && (codi[3]=='*')){
   cout<<'U';
 }
  if ((codi[0]=='.') && (codi[1]=='.') && (codi[2]=='.') && (codi[3]=='-')){
   cout<<'V';
 }
 if ((codi[0]=='.') && (codi[1]=='-') && (codi[2]=='-') && (codi[3]=='*')){
   cout<<'W';
 }
 if ((codi[0]=='-') && (codi[1]=='.') && (codi[2]=='.') && (codi[3]=='-')){
   cout<<'X';
 }
 if ((codi[0]=='-') && (codi[1]=='.') && (codi[2]=='-') && (codi[3]=='-')){
   cout<<'Y';
 }
 if ((codi[0]=='-') && (codi[1]=='-') && (codi[2]=='.') && (codi[3]=='.')){
   cout<<'Z';
 }
 if (rp>1){
  cout<<' ';
 }
}


 cout<<"\n";
}
void MENU()
{
  int op=0;
 while (op!=3)
 {
  cout<<"        1- A MORSE"<<"\n";
  cout<<"        2- A SIMBOLOS"<<"\n";
  cout<<"        3- SALIR"<<"\n";
  cin>>op;
  switch (op)
  {
   case 1:{frase2morse(); break;}
   case 2:{morse2frase(); break; }
  };
 };
}
void main()
{
  i=0;
  MENU();
}
