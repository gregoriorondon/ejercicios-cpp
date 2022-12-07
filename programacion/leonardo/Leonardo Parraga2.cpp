/*
** Texto a código Morse y Viceversa
**
** Realizado Por Leonardo Parraga
- Use la libreria "ctype" la cual me permite usar el toupper
  el cual permite guardar las letras del abecedario.
- Use la libreria "dos" permite agregar efectos sonoros (a través del parlante interno del PC)
- Use la libreria "windows" esta permite que en el desarrollo del programa halle algun error por el usuario usando NULL.
- Use la libreria "conio" lee un solo carácter directamente desde el teclado y retorna su valor usando el getch. 
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>

#ifdef _MSC_VER
#include <windows.h>
#else
#include <dos.h>
#endif

#define MORSE_PITIDO_FREQ        800

// cronómetros
#define MORSE_PUNTO_TIEMPO        70
#define MORSE_RAYA_TIEMPO        210
#define MORSE_CARACTER_SEPARACION  MORSE_PUNTO_TIEMPO*3
#define MORSE_PALABRA_SEPARACION    MORSE_PUNTO_TIEMPO*7
#define and 
// Funciones Básicas
void playsound(int note, int duration);
void morse(char c);
void frase(char c);
int menu();
int frase2morse();
int morse2frase();
void main(void)
{
	int opc;
	do
	{
		opc=menu();
		switch(opc)
		{
		case 1:
			system("CLS");
			frase2morse();
			break;
		case 2:
			system("CLS");
			morse2frase();
			break;
		default :
			system("CLS");
			puts("\n\n\n\n\n\n\n\n\n\n\n\n\n\n Saliendo del programa");
			/*getch();*/
			system("CLS");
		}
	}while(opc!=3); 
	system("CLS");
	puts("\n\n\n\n\n");
} 
/*int main(void)
{
	frase2morse();
}*/
/***************frase2morse*************/
int frase2morse()
{
  char t[256];

  printf("Frase a Codigo Morse\n\n");
  printf("Escriba el texto: ");
  gets(t);
  gets(t);
 /* getch();*/
  int x=0;
  while(t[x])
  {
    if(t[x] == ' ')
    {
      printf("\n");
      while(t[x] == ' ')
        x++;

      if(t[x] == NULL)
        break;

#ifdef _MSC_VER
      Sleep(MORSE_PALABRA_SEPARACION);
#else
      delay(MORSE_PALABRA_SEPARACION);
#endif
    }
    morse(t[x]);
    x++;
  }

  system("PAUSE");
  return 0;
}
/****************morse2frase***************/
int morse2frase()
{
  char t[256];
  printf("Codigo Morse a Frase Regla nemotecnica\n\n");
  printf("Escriba el Codigo Morse y pulse enter: ");
  gets(t);
  gets(t);

  
    if(t[0] == '.') and if(t[1] == '-') and if(t[2] == NULL)
    {
      printf("(A)sno/Alto\n");
      playsound(MORSE_PITIDO_FREQ, MORSE_RAYA_TIEMPO);
	 }
  /****************/
   if(t[0] == '.') and if(t[1] == NULL)
    {
      printf("(E)s/El\n");
      playsound(MORSE_PITIDO_FREQ, MORSE_RAYA_TIEMPO);
	 }
  /***************/
   if(t[0] == '.') and if(t[1] == '-') and if(t[2] == '.') and if(t[3] == NULL)
    {
      printf("(R)amona/Rosa\n");
      playsound(MORSE_PITIDO_FREQ, MORSE_RAYA_TIEMPO);
	 }
  /*************/
  if(t[0] == '.') and if(t[1] == '-') and if(t[2] == '-') and if(t[3] == '.') and if(t[4] == NULL)
    {
      printf("(P)asodoble/Pisotones\n");
      playsound(MORSE_PITIDO_FREQ, MORSE_RAYA_TIEMPO);
	 }
/****************/
  if(t[0] == '-') and if(t[1] == '.') and if(t[2] == '.') and if(t[3] == '.') and if(t[4] == NULL)
    {
      printf("(B)onaparte/Black\n");
      playsound(MORSE_PITIDO_FREQ, MORSE_RAYA_TIEMPO);
	 }
/****************/
  if(t[0] == '-') and if(t[1] == '.') and if(t[2] == '-') and if(t[3] == '.') and if(t[4] == NULL)
    {
      printf("(C)ocacola/Casa\n");
      playsound(MORSE_PITIDO_FREQ, MORSE_RAYA_TIEMPO);
	 }

/****************/
  if(t[0] == '.') and if(t[1] == '.') and if(t[2] == '-') and if(t[3] == '.') and if(t[4] == NULL)
    {
      printf("(F)iesta/Farol\n");
      playsound(MORSE_PITIDO_FREQ, MORSE_RAYA_TIEMPO);
	 }
/****************/
  if(t[0] == '.') and if(t[1] == '.') and if(t[2] == '.') and if(t[3] == '.') and if(t[4] == NULL)
    {
      printf("(H)imalaya/Hacha\n");
      playsound(MORSE_PITIDO_FREQ, MORSE_RAYA_TIEMPO);
	 }
/****************/
  if(t[0] == '.') and if(t[1] == '.') and if(t[2] == '.') and if(t[3] == '-') and if(t[4] == NULL)
    {
      printf("(V)entilador/Velero\n");
      playsound(MORSE_PITIDO_FREQ, MORSE_RAYA_TIEMPO);
	 }
/****************/
  if(t[0] == '-') and if(t[1] == '-') and if(t[2] == '.') and if(t[3] == '-') and if(t[4] == NULL)
    {
      printf("(C)ocorico/Cocoliso\n");
      playsound(MORSE_PITIDO_FREQ, MORSE_RAYA_TIEMPO);
	 }
/****************/
  if(t[0] == '.') and if(t[1] == '.') and if(t[2] == '-') and if(t[3] == NULL)
    {
      printf("(U)nico/Uva\n");
      playsound(MORSE_PITIDO_FREQ, MORSE_RAYA_TIEMPO);
	 }
/****************/
  if(t[0] == '.') and if(t[1] == '.') and if(t[2] == '.') and if(t[3] == NULL)
    {
      printf("(S)ardina/Salmon\n");
      playsound(MORSE_PITIDO_FREQ, MORSE_RAYA_TIEMPO);
	 }
/****************/
  if(t[0] == '-') and if(t[1] == '-') and if(t[2] == '-') and if(t[3] == NULL)
    {
      printf("(O)porto/Optimo\n");
      playsound(MORSE_PITIDO_FREQ, MORSE_RAYA_TIEMPO);
	 }
/****************/
  if(t[0] == '-') and if(t[1] == '.') and if(t[2] == '.') and if(t[3] == NULL)
    {
      printf("(D)ocena/Demonio\n");
      playsound(MORSE_PITIDO_FREQ, MORSE_RAYA_TIEMPO);
	 }

  /****************/
  if(t[0] == '-') and if(t[1] == '-') and if(t[2] == '.') and if(t[3] == NULL)
    {
      printf("(G)ondola/Gato\n");
      playsound(MORSE_PITIDO_FREQ, MORSE_RAYA_TIEMPO);
	 }
/*******************/
  if(t[0] == '.') and if(t[1] == '.') and if(t[2] == NULL)
    {
      printf("(I)ris/Isla\n");
      playsound(MORSE_PITIDO_FREQ, MORSE_RAYA_TIEMPO);
	 }
  /****************/
if(t[0] == '-') and if(t[1] == '.') and if(t[2] == NULL)
    {
      printf("(N)oche/Nubes\n");
      playsound(MORSE_PITIDO_FREQ, MORSE_RAYA_TIEMPO);
	 }
  /****************/
if(t[0] == '-') and if(t[1] == NULL)
    {
      printf("(T)os/Torrente\n");
      playsound(MORSE_PITIDO_FREQ, MORSE_RAYA_TIEMPO);
	 }
  /****************/
if(t[0] == '.') and if(t[1] == '-') and if(t[2] == '-') and if(t[3]== '-') and if(t[4] == NULL)
    {
      printf("(J)arron/Jojoto\n");
      playsound(MORSE_PITIDO_FREQ, MORSE_RAYA_TIEMPO);
	 }
/*******************/
if(t[0] == '-') and if(t[1] == '.') and if(t[2] == '-') and if(t[3] == NULL)
    {
      printf("(K)ill/Kyoto\n");
      playsound(MORSE_PITIDO_FREQ, MORSE_RAYA_TIEMPO);
	 }
/*******************/
if(t[0] == '.') and if(t[1] == '-') and if(t[2] == '.') and if(t[3]== '.') and if(t[4] == NULL)
    {
      printf("(L)imon/Letonia\n");
      playsound(MORSE_PITIDO_FREQ, MORSE_RAYA_TIEMPO);
	 }
/*******************/
if(t[0] == '-') and if(t[1] == '-') and if(t[2] == NULL)
    {
      printf("(M)undo/Moto\n");
      playsound(MORSE_PITIDO_FREQ, MORSE_RAYA_TIEMPO);
	 }
/*******************/
if(t[0] == '.') and if(t[1] == '-') and if(t[2] == '-') and if(t[3] == NULL)
    {
      printf("(W)atermelon/Winners\n");
      playsound(MORSE_PITIDO_FREQ, MORSE_RAYA_TIEMPO);
	 }
/*******************/
if(t[0] == '-') and if(t[1] == '.') and if(t[2] == '.') and if(t[3]== '-') and if(t[4] == NULL)
    {
      printf("(X)ena\n");
      playsound(MORSE_PITIDO_FREQ, MORSE_RAYA_TIEMPO);
	 }
/*******************/
if(t[0] == '-') and if(t[1] == '.') and if(t[2] == '-') and if(t[3]== '-') and if(t[4] == NULL)
    {
      printf("(Y)oyo/Yokohama\n");
      playsound(MORSE_PITIDO_FREQ, MORSE_RAYA_TIEMPO);
	 }
/*******************/
if(t[0] == '-') and if(t[1] == '-') and if(t[2] == '.') and if(t[3]== '.') and if(t[4] == NULL)
    {
      printf("(Z)orro/Zulia\n");
      playsound(MORSE_PITIDO_FREQ, MORSE_RAYA_TIEMPO);
	 }
/*******************/
  system("PAUSE");
  return 0;
}

/*********
* func: frase2morse
* desc: morse analizando la función
********************************************/
void morse(char c)
{
  char code[8] = {0};

  switch(toupper(c))
  {
  // Letras a Morse
  case 'A': strcpy(code, ".-");  break;
  case 'B': strcpy(code, "-..."); break;
  case 'C': strcpy(code, "-.-."); break;
  case 'D': strcpy(code, "-..");  break;
  case 'E': strcpy(code, ".");  break;
  case 'F': strcpy(code, "..-."); break;
  case 'G': strcpy(code, "--.");  break;
  case 'H': strcpy(code, "...."); break;
  case 'I': strcpy(code, "..");  break;
  case 'J': strcpy(code, ".---"); break;
  case 'K': strcpy(code, "-.-");  break;
  case 'L': strcpy(code, ".-.."); break;
  case 'M': strcpy(code, "--");  break;
  case 'N': strcpy(code, "-.");  break;
  case 'O': strcpy(code, "---");  break;
  case 'P': strcpy(code, ".--."); break;
  case 'Q': strcpy(code, "--.-"); break;
  case 'R': strcpy(code, ".-.");  break;
  case 'S': strcpy(code, "...");  break;
  case 'T': strcpy(code, "-");  break;
  case 'U': strcpy(code, "..-");  break;
  case 'V': strcpy(code, "...-"); break;
  case 'W': strcpy(code, ".--");  break;
  case 'X': strcpy(code, "-..-"); break;
  case 'Y': strcpy(code, "-.--"); break;
  case 'Z': strcpy(code, "--.."); break;

  // Números a Morse 
  case '0': strcpy(code, "-----"); break;
  case '1': strcpy(code, ".----"); break;
  case '2': strcpy(code, "..---"); break;
  case '3': strcpy(code, "...--"); break;
  case '4': strcpy(code, "....-"); break;
  case '5': strcpy(code, "....."); break;
  case '6': strcpy(code, "-...."); break;
  case '7': strcpy(code, "--..."); break;
  case '8': strcpy(code, "---.."); break;
  case '9': strcpy(code, "----."); break;

  // Otros
  case '.': strcpy(code, ".-.-.-"); break;
  case ',': strcpy(code, "--..--"); break;
  case '?': strcpy(code, "..--.."); break;

  default: printf("[invalid character '%c']\n", c); break;
  }

  for(int i=0; i<8; i++)
  {
    if(code[i] == '-')
    {
      printf("%c", code[i]);
      playsound(MORSE_PITIDO_FREQ, MORSE_RAYA_TIEMPO);
    }
    else if(code[i] == '.')
    {
      printf("%c", code[i]);
      playsound(MORSE_PITIDO_FREQ, MORSE_PUNTO_TIEMPO);
    }
  }

  printf("\n");
}
/*********
* func: morse2frase
* desc: morse analizando la función
********************************************/
void frase(char c)
{
  char code[8] = {0};

  switch(toupper(c))
  {
  // Morse a Letras
  case '.-'  : strcpy(code, "A"); break;
  case 'B'  : strcpy(code, "B"); break;
  case 'C'  : strcpy(code, "C"); break;
  case 'D'  : strcpy(code, "D"); break;
  case 'E'  : strcpy(code, "E"); break;
  case 'F'  : strcpy(code, "F"); break;
  case 'G'  : strcpy(code, "G"); break;
  case 'H'  : strcpy(code, "H"); break;
  case 'I'  : strcpy(code, "I"); break;
  case 'J'  : strcpy(code, "J"); break;
  case 'K'  : strcpy(code, "K"); break;
  case 'L'  : strcpy(code, "L"); break;
  case 'M'  : strcpy(code, "M"); break;
  case 'N'  : strcpy(code, "N"); break;
  case '---'  : strcpy(code, "O"); break;
  case 'P'  : strcpy(code, "P"); break;
  case 'Q'  : strcpy(code, "Q"); break;
  case 'R'  : strcpy(code, "R"); break;
  case 'S'  : strcpy(code, "S"); break;
  case 'T'  : strcpy(code, "T"); break;
  case 'U'  : strcpy(code, "U"); break;
  case 'V'  : strcpy(code, "V"); break;
  case 'W'  : strcpy(code, "W"); break;
  case 'X'  : strcpy(code, "X"); break;
  case 'Y'  : strcpy(code, "Y"); break;
  case 'Z'  : strcpy(code, "Z"); break;

   default: printf("[invalid character '%c']\n", c); break;
  }

   printf("\n");
} 
/**********************************
* func: menu
*
*****************************************/
int menu()//funciona
{
	int opcion;
	system("CLS");
	/*aactual();*/
	puts("\n MENU CLAVE DE MORSE ");
	puts("\n 1.- CONVERTIR FRASE  A MORSE");
	puts("\n 2.- CONVERTIR MORSE A FRASE ");
	puts("\n 3.- FINALIZAR");
	printf("\n \n Teclee la opcion deseada: [ ]\b\b"); 
	scanf("%d",&opcion);
	return(opcion);
} 
/*********
* func: sonido
* desc: tocada de notas con el pc (cornetas)
********************************************/
void playsound(int note, int duration)
{
#ifdef _MSC_VER
  Beep(note, duration);
  Sleep(MORSE_CARACTER_SEPARACION);
#else
  sound(note);
  delay(duration);
  nosound();
  delay(MORSE_CARACTER_SEPARACION);
#endif
}