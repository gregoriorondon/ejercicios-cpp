//******************* MARTES 25 OCTUBRE 2005 / I Proyecto C++  **COSTA RICA************************************
/* Este programa se realizo para una sala de CINES en donde se introduce toda
la informacion respectiva en cuanto a cartelera, precios. Realiza Facturacion
------------La clave de acceso es "system" constraseña "cuna"*/

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <dos.h>
#include <ctype.h>
#include <graphics.h>
#include<time.h>



void vali_cajero();
void vali_digitador();
void cuadro_clave();
void mant_usuarios();
void clave_system();
void carga();
void fecha();
void fondo1(int,int);
void fondo2(int);
void cuadro1();
void cuadro2();
void cartelera();
void cambio_dolar();
void menu_usuarios();
void precios();
void apertura_caja();
void cierre_caja ();
void facturacion();
void menu_caja();
void menu();
void menu_system();
void informacion();
void escribe(int x, int y, char* cad); //declaracion de la funcion prototipo
void escribe_c(int x, int y, char* cad);

//-----------------Estructura para la cartelera------------------------------------------------------------------

struct cartelera
{
   int restri,sala,cod,cap, inicial;
   char peli[30];

}cartel[4];

//-----------------Estructura para el detalle factura----------------------------------------------------------------

struct detalle_fac
{
   int n_sala, cant_ninos, cant_6_12, cant_adulto;
   float sub_6_12, sub_adulto, total_sala;

}cierre[4];

//-----------------Variables Globales------------------------------------------------------------------


float adulto = 0, nin6_12 = 0, pre6_12 = 0,aper_caja=0;
float tipo_cam = 0;

int num_fac = 0,can6 = 0,can6_12=0,  can_adul=0, sala_cierre=0;
int buta_1=0, buta_2=0, buta_3=0,buta_4=0;
float subcan_adul =0,subcan6_12 = 0, total_fact=0, total_global=0;


int BAND_SYSTEM =0;
int BAND_DIGITADOR=0;
int BAND_CAJERO=0;
int BAND_CIERRE_CAJ =0;
int BAND_SYS_CIERRE =0;

//----Almacenadas y creadas por el ADMINISTRADOR
char CLA_CAJ[20];
char USU_CAJ[20];
char CLA_DIG[20];
char USU_DIG[20];

//----Digitadas pos los USUARIOS para la validacion de acceso

char cla_caj[20];
char usu_caj[20];
char cla_dig[20];
char usu_dig[20];

//-----------------Inicio Programa Principal------------------------------------------------------------------

void main()

{
   clrscr();
   fondo1(11,1);
   carga();
   menu_usuarios();
   getch();

}
//-----------------Fin de Programa Principal------------------------------------------------------------------

//-----------------funcion para la fecha------------------------------------------------------------------

void fecha()
{
   struct date fecha;
   getdate (&fecha);
   cprintf("%d/%d/%d",fecha.da_day,fecha.da_mon,fecha.da_year);
}

//-----------------Funcion para el fondo de pantalla y texto------------------------------------------------------------------

void fondo1(int t,int f)
{
   textcolor(t);
   textbackground(f);
}

//-----------------Funcion para los cuadros de las claves------------------------------------------------------------------
void cuadro_clave()
{
   int x=0;

   clrscr();
   x =0;

   while ( x ++ < 10)     //Lineas Verticales
   {
      escribe(15,16+x,"Û");
      escribe(62,16+x,"Û");
    }
    x =0;

    while ( x ++ < 46)     //Lineas Verticales
    {
       escribe(15+x,17,"Û");
       escribe(15+x,26,"Û");
    }
}

//-----------------Funcion para cuatro 1------------------------------------------------------------------
void cuadro1()

{
   clrscr();

   int a = 0;

   gotoxy(54,3);
   fecha();
   fondo1(10,1);
   escribe_c(27,3,"CINES SAN CARLOS");
   while ( a++ < 62)     //Lineas Horizontales
   {
      escribe_c(5+a,1,"Í");
      escribe_c(5+a,5,"Í");
      escribe_c(5+a,40,"Í");
      escribe_c(5+a,42,"Í");

   }

   a = 0;
   while ( a ++ < 40)     //Lineas Verticales
   {
      escribe_c(5,1+a,"º");
      escribe_c(67,1+a,"º");

   }

      escribe_c(5,1,"É");  //Esquinas del cuadro
      escribe_c(5,42,"È");

      escribe_c(67,1,"»");  //Esquinas del Cuadro
      escribe_c(67,42,"¼");
      fondo1(11,1);
}

//-----------------Funcion para cuatro 2------------------------------------------------------------------

void cuadro2()

{
   clrscr();

   int a = 0;

   fondo1(10,1);
   gotoxy(54,3);
   fecha();
   escribe_c(27,3,"CINES SAN CARLOS");
   while ( a++ < 62)     //Lineas Horizontales
   {
      escribe_c(5+a,1,"Í");
      escribe_c(5+a,5,"Í");
      escribe_c(5+a,30,"Í");
      escribe_c(5+a,32,"Í");

   }

   a = 0;

   while ( a ++ < 30)     //Lineas Verticales
   {
      escribe_c(5,1+a,"º");
      escribe_c(67,1+a,"º");

   }

      escribe_c(5,1,"É");  //Esquinas del cuadro
      escribe_c(5,32,"È");
      escribe_c(67,1,"»");  //Esquinas del Cuadro
      escribe_c(67,32,"¼");
      fondo1(11,1);
}


//-----------------Funcion para Escritura de Caracteres------------------------------------------------------------------

void escribe(int x, int y, char* cad)

{
   gotoxy(x,y);

   printf("%s",cad);

}

//-----------------Funcion para Escritura de Caracteres------------------------------------------------------------------

void escribe_c(int x, int y, char* cad)

{
   gotoxy(x,y);

   cprintf("%s",cad);

}
//-----------------Funcion que carga la pantalla de inicio "PORTADA"------------------------------------------------------------------

void carga()
{
      int x=0;
      fondo1(2,1);

      cuadro2();
      escribe(17,10,"SISTEMA DE FACTURACION DE CINES");

      escribe(6,30,"                                                             ");

      escribe(18,20,"INTEGRANTES:");
      delay(400);
      escribe_c(18,22,"Alberto Valerio");
      delay(400);
      escribe_c(18,24,"Manuel Carmona");
      delay(400);
      escribe_c(18,26,"Zaida Jimenez");
      delay(400);
      escribe_c(18,28,"Naurey Gomez");
      delay(400);

      escribe(17,12,"Cargando el Sistema...");
      while ( x ++ < 45)
      {
	 gotoxy(16+x,13);
	 cprintf("Û");
	 delay(100);
      }

      clrscr();
      fondo1(11,1);
}
//--------------------------**----------------------**--------------------

void mant_usuarios()
{
   int opcion=0,a=0,con=0,op=1;

   char x,y;
   char z;
   char letra,g;


   while(op==1 ) //---Contrala la salida de la funcion Mantenimiento usuarios
   {
      clrscr();
      opcion =0;
      cuadro2();

      escribe(22,4,"Mantenimiento de Usuarios             CN_04  \n \n");

      escribe(10,8,"Selecione el Tipo de Usuario por crear:  \n");

      escribe(10,10,"CAJERO: [ 1 ] ----- DIGITADOR: [ 2 ] ");
      escribe(10,31," Seleccione el tipo de usuario a crear ");
      scanf("%d",& opcion);


      if (opcion == 1 )    //-CAJERO
      {
	 //-----Cuadro para la contrase¤a------------------------------------------
	 while ( a ++ < 10)     //Lineas Verticales
	 {
	    escribe(15,16+a,"*");
	    escribe(60,16+a,"*");
	 }
	 a =0;
	 while ( a ++ < 44)     //Lineas Horizontales
	 {
	    escribe(15+a,17,"*");
	    escribe(15+a,26,"*");
	 }//--------------------------------------------------------------------------

	 escribe(26,15,"USUARIO CAJERO ");
	 escribe(10,31,"Digite un Nombre de Usuario                          ");
	 escribe(17,20,"DIGITE EL NOMBRE DE USUARIO: ");
	 getchar();
	 gets(USU_CAJ);

	 escribe(10,31,"Digite una Contrase¤a                          ");
	 escribe(17,22,"DIGITE LA CONTRASE¥A: ");

	 con=0;
	 do
	 {
	    letra=getch();
	    g=letra;
	    if (g != 13)
	    {
	       gotoxy(41+con,22);
	       printf("*");
	       CLA_CAJ[con]=letra;
	       con++;
	    }
	 }while (g != 13);

	 escribe(10,31,"Desea agregar otro usuario SI=[ 1 ]  NO=[ 0 ] ");
      } //--fin del si de opcion de CAJERO

	 if (opcion == 2 ) //DIGITADOR
	 {
	    //-----Cuadro para la contrase¤a------------------------------------------
	    a=0;
	    while ( a ++ < 10)     //Lineas Verticales
	    {
	       escribe(15,16+a,"*");
	       escribe(60,16+a,"*");
	    }
	    a =0;
	    while ( a ++ < 44)     //Lineas Horizontales
	    {
	       escribe(15+a,17,"*");
	       escribe(15+a,26,"*");
	    }//------------------------------------------------------------------------------------------------------

	    escribe(26,15,"USUARIO DIGITADOR ");
	    escribe(10,31,"Digite un Nombre de Usuario                          ");
	    escribe(17,20,"DIGITE EL NOMBRE DE USUARIO: ");
	    getchar();
	    gets(USU_DIG);

	    escribe(10,31,"Digite una Contrase¤a                          ");
	    escribe(17,22,"DIGITE LA CONTRASE¥A: ");


	    con=0;
	    do
	    {
	       letra=getch();
	       g=letra;
	       if (g != 13)
	       {
		  gotoxy(40+con,22);
		  printf("*");
		  CLA_DIG[con]=letra;
		  con++;
		}
	    }while (g != 13);

	    escribe(10,31,"Desea agregar otro usuario SI=[ 1 ]  NO=[ 0 ] ");
	 } //--fin del si de opcion de DIGITADOR

      escribe(10,31,"Desea agregar otro usuario SI=[ 1 ]  NO=[ 0 ] ");
      scanf("%d", &op);

   }//--fin del while(controla la salida)

}

//--------------------COMPROBACION CLAVE CAJERO-----------------------
void vali_cajero()
{

   int contador=0, resul_usu=0,resul_cla=0, con=0;
   char x,letra,g;

   clrscr();
   BAND_CAJERO =0;

   while (contador >=0 && contador <=2 && BAND_CAJERO ==0) //--Lleva el contro de los intentos fallidos
   {
      clrscr();
      cuadro_clave(); //--Llamada a cuadro de la clave

      escribe(30,16,"USUARIO CAJERO ");
      escribe(18,19,"DIGITE NOMBRE DE USUARIO:");
      getchar();
      gets(usu_caj);
      escribe(18,22,"DIGITE SU CONTRASE¥A:");

      con=0;
      do
      {
	 letra=getch();
	 g=letra;
	 if (g != 13)
	 {
	    gotoxy(41+con,22);
	    printf("*");
	    cla_caj[con]=letra;
	    con++;
	 }
      }while (g != 13);


      resul_usu=strcmp(usu_caj,USU_CAJ);
      resul_cla=strcmp(cla_caj,CLA_CAJ);

      if (resul_usu == 0  && resul_cla == 0)
      {

	 escribe(22,24,"  ACCESO VALIDO ");
	 delay(800);
	 BAND_CAJERO = 1;  //--valida la entrada a la funcion MENU CAJERO
      }

      else
      {
	 escribe(18,25,"El usuario o la contrase¤a estan Incorrectos");
	 contador++;  //lleva control de intentos fallidos
	 delay(800);

      }

   }//---fin del while

   if (contador ==3)
   {
   escribe(18,19,"                                          ");
   escribe(18,22,"  EXCEDIO EL NUMERO MAXIMO DE INTENTOS    ");
   escribe(18,25,"                   		            ");
   delay(1000);
   }


}


//---------------COMPROBACION CLAVE DIGITADOR--------------------


void vali_digitador()
{

   int contador=0,resul_cla=0,resul_usu=0,con=0;
   char x,letra,g;
   clrscr();
   BAND_DIGITADOR=0;

   while (contador >=0 && contador <=2 && BAND_DIGITADOR ==0) //--Lleva el contro de los intentos fallidos
   {
      clrscr();

      cuadro_clave();   //--Llamada a cuadro de la clave

      escribe(30,16,"USUARIO DIGITADOR ");
      escribe(18,19,"DIGITE NOMBRE DE USUARIO:");
      getchar();
      gets(usu_dig);
      escribe(18,22,"DIGITE SU CONTRASE¥A:");

      con=0;
      do
      {
	 letra=getch();
	 g=letra;
	 if (g != 13)
	 {
	    gotoxy(41+con,22);
	    printf("*");
	    cla_dig[con]=letra;
	    con++;
	 }
      }while (g != 13);

      resul_usu=strcmp(usu_dig,USU_DIG);
      resul_cla=strcmp(cla_dig,CLA_DIG);

      if (resul_usu == 0  && resul_cla == 0)
      {
	 escribe(22,24," ACCESO VALIDO ");
	 delay(800);
	 BAND_DIGITADOR=1;  //--valida la entrada a la funcion MENU DIGITADORR
      }

      else
      {
	 escribe(18,25,"El usuario o la contrase¤a estan Incorrectos");
	 contador++;  //lleva control de intentos fallidos
	 delay(800);
      }

   }//---fin del while que controla la salida



   if (contador ==3)
   {
      escribe(18,19,"                                          ");
      escribe(18,22,"  EXCEDIO EL NUMERO MAXIMO DE INTENTOS    ");
      escribe(18,25,"                   		        ");
      delay(1000);
   }
                              
}

//-----------------------------VALIDACION DE LA CLAVE ADMINISTRADOR---------------------------
void clave_system()
{
   char *nombre;
   char *a="system";
   char *b="cuna";
   char password[4];
   int  i=0,contador=0;
   char j;

   BAND_SYSTEM =0;
   BAND_SYS_CIERRE=0;

   while (contador >=0 && contador <=2 && BAND_SYSTEM ==0) //--Lleva el contro de los intentos fallidos
   {
      clrscr();

      cuadro_clave(); //--Llamada a cuadro de la clave

      escribe(30,16,"USUARIO ROOT");

      escribe(18,19,"DIGITE NOMBRE DE USUARIO:");
      getchar();
      gets(nombre);
      escribe(18,22,"DIGITE SU CONTRASE¥A:");

      for(i = 0; i <= 255; i++)
      {
	 j = getch();  //--Obtener el caracter del teclado

	 if(j=='\r' || j == '\n') //--Si escribio el cambio de linea, se sale de este ciclo*/
	    break;

	 password[i] = j;
	 putch('*');
      }

      if (*nombre == *a && *password == *b) //--Validacion de contrase¤a ADMINISTRADOR
      {
	 escribe(22,24,"  ACCESO VALIDO");
	 delay(800);
	 BAND_SYSTEM =1;     //---Cuando se activa Permite la entrada al sistema
	 BAND_SYS_CIERRE =1; //---Permite la reapertura del cierre de caja
      }

      else
      {
	 escribe(18,25,"El usuario o la contrase¤a estan Incorrectos");
	 contador++;  //lleva control de intentos fallidos
	 delay(800);
      }

   }//---fin del while, controla las salidas

   if (contador ==3)
   {
      escribe(18,19,"                                           ");
      escribe(18,22,"  EXCEDIO EL NUMERO MAXIMO DE INTENTOS    ");
      escribe(18,25,"                   		        ");
      delay(1000);
   }
}

//-----------------Menu de Usuarios------------------------------------------------------------------

void menu_usuarios()

{

   int salida=0;
   clrscr();
   while (salida == 0)
   {
      char opcion ;

      cuadro2();
      escribe(28,4,"MENU PRINCIPAL                 CN_00\n \n");
      escribe(18,8,"a.SYSTEM-->");
      escribe(18,10,"b.CAJERO-->");
      escribe(18,12,"c.DIGITADOR-->");

      escribe(18,14,"d.INFORMACION");
      escribe(18,16,"e.Salida");

      escribe(15,31,"Seleccione la letra de la opci¢n a ingresar");
      escribe(19,18,"Digite el tipo de usuario[  ]");
      gotoxy(45,18);
      opcion = getchar();
      switch(opcion)
      {
	 case 'a':
	    clave_system();

	    if (BAND_SYSTEM == 1) //--Se activa cuando la Clave ADMINISTRADOR es correcta

	     {
		menu_system();
	     }

	 break;

	 case 'b':

	    vali_cajero();

	    if (BAND_CAJERO == 1) //--Se activa cuando la Clave CAJERO es correcta
	    {
	      menu_caja();
	     }

	 break;

	 case 'c':

	     vali_digitador();

	     if (BAND_DIGITADOR== 1) //--Se activa cuando la Clave DIGITADOR es correcta
	     {
	       menu();
	     }

	 break;

	 case 'd':

	    informacion();   //--Cualquier usuario puede accesar a esta opcion

	 break;

	 case 'e':

	    salida = 1;   //--Controla la salida de MENU
	 break;

      }
   }
}

//-----------------Menu para los Opciones de Mentenimiento------------------------------------------------------------------

void menu()
{
   int a = 0;
   clrscr();

   while (a == 0)
   {
      char opcion;

      cuadro2();
      escribe(18,10,"a.Mantenimiento de Cartelera");
      escribe(18,12,"b.Mantenimiento de Tipo de Cambio $");
      escribe(18,14,"c.Mantenimiento de Precios");
      escribe(18,16,"d.Salida");

      escribe(15,31,"Seleccione la letra de la opci¢n a ingresar");
      escribe(19,18,"Digite una Opci¢n [ ]");
      gotoxy(38,18);
      opcion = getchar();
      switch(opcion)
      {

	 case 'a':
	    cartelera();

	 break;

	 case 'b':
	    cambio_dolar();

	 break;

	 case 'c':
	    precios();

	 break;

	 case 'd':

	    a = 5;

	 break;

      }
   }
}
//-----------------Menu Para las opciones del ADMINISTRADOR------------------------------------------------------------------

void menu_system()
{

   int a = 0;

   clrscr();
   while (a == 0)
   {
      char opcion;

      cuadro2();
      escribe(18,8,"a.Mantenimiento de USUARIOS-->");
      escribe(18,10,"b.Funciones DIGITADOR-->");
      escribe(18,12,"c.Funciones CAJERO-->");
      escribe(18,14,"d.Salida");

      escribe(15,31,"Seleccione la letra de la opci¢n a ingresar");
      escribe(19,18,"Digite una Opci¢n [ ]");
      gotoxy(38,18);
      opcion = getchar();
      switch(opcion)
      {
	 case 'a':
	    mant_usuarios();  //--Accesa al Modulo para crear Nuevos Usuarios

	 break;

	 case 'b':
	    menu();   //-- Accesa al Menu de Mantenimiento

	 break;

	 case 'c':
	    menu_caja();  //-- Accesa al Menu de Cajero

	 break;


	 case 'd':

	    a = 5;      //-- Controla la salida del Menu

	 break;

      }
   }
}

//-----------------Menu para las Opciones de CAJA------------------------------------------------------------------

void menu_caja()

{

   int a = 0;
   clrscr();
   escribe(28,4,"MENU CAJA");

   while (a == 0)
   {
      char opcion;
      cuadro2();
      escribe(18,8,"a.Apertura de Caja");
      escribe(18,10,"b.Facturacion");
      escribe(18,12,"c.Cierre Caja");
      escribe(18,14,"d.Salir");

      escribe(15,31,"Seleccione la letra de la opci¢n a ingresar");
      escribe(19,18,"Digite una Opci¢n [ ]");
      gotoxy(38,18);
      opcion= getchar();

      switch(opcion)
      {
	 case 'a':

	    if (BAND_CIERRE_CAJ == 1)  //--Se activa para llamar a la CONTRASE¥A SYSTEM, una vez que se cerro CAJA
	    {
	       clave_system();
	    }
	    if (BAND_CIERRE_CAJ == 0)   //--Se accesa cuando no se haya cerrado CAJA
	    {
	       vali_cajero();
	    }


	    if (BAND_CAJERO == 1 || BAND_SYS_CIERRE==1) //--Permite el acceso al sistema cuando las contrase¤a son CORRECTAS
	    {
		 apertura_caja();
	    }

	 break;

	 case 'b':
	    facturacion();     //--Llamada a la funcion Facturacion

	 break;

	 case 'c':
	    vali_cajero();

	    if (BAND_CAJERO ==1)  //--Permita acceso si la contrase¤a es correcta
	    {
	    cierre_caja();
	    }
	    break;

	 case 'd':

	    a=4;

	 break;

      }
   }
}

//---------------------MODULO PARA LOS PRECIOS DE PELICULAS------------------------------------------------------------------
void precios()

{

   int confir =0;
   int salida= 0;

   clrscr();
   while (salida == 0)
   {
      cuadro2();
      escribe(22,4,"Mantenimiento de Precios             CN_04  \n \n");

      getchar();
      escribe(7,7,"Digite el valor de la entrada del adulto: ");
      scanf("%f",& adulto);
      escribe(15,31,"Digite el Monto en Colones");

      nin6_12 = (adulto * 0.25);
      pre6_12 = (adulto - nin6_12);

      escribe(7,10,"Valor Entrada Adulto: ");
      printf("%.2f",adulto);

      escribe(7,12,"Valor Entrada Ni¤os de 6 a 12 a¤os: ");
      printf("%.2f",pre6_12);

      escribe(7,20,"Esta seguro que desea establecer estos precios");

      escribe(7,31,"Seleccione una Opcion:  1 = Salir  ,  2 = Modificar Monto ");
      scanf("%d ",& confir);

      if (confir == 1)
      {
	 salida = 1;

	 escribe(15,15,"Informaci¢n Procesada Correctamente ");
	 delay(800);
      }

      if (confir == 2)  //--Repite en caso que se quiera Modificar el Monto ingresado
      {
	 salida = 0;
	 aper_caja = 0;
	 getchar();
      }

      clrscr();

   }


}

//---------------------MODULO PARA LA APERTURA DE CAJA------------------------------------------------------------------

void apertura_caja()

  {
     int confir =0;
     int salida= 0;


     while (salida == 0) //--Controla la salida
     {
	clrscr();
	cuadro2();

	escribe(22,4,"   Apertura de Caja                  CN_05\n \n");

	escribe(7,7,"Digite el monto para la apertura de Caja: ");

	escribe(7,31,"Digite el Monto en Colones");
	gotoxy(50,7);
	scanf("%f",& aper_caja);
	getchar();


	escribe(7,9,"Esta Seguro que desea abrir caja con el monto de: ");
	printf("%.2f", aper_caja);

	escribe(7,31,"Seleccione una Opcion:   1 = Salir  , 2 = Modificar Monto   ");
	scanf("%d ",& confir);

	if (confir == 1)
	{
	   salida = 1;
	   delay(800);
	   escribe(15,15,"Informaci¢n Procesada Correctamente ");
	   delay(800);
	}

	if (confir == 2)   //--Repite en caso que se quiera Modificar el Monto ingresado
	{
	   salida = 0;
	   aper_caja = 0;
	   getchar();
	}

	clrscr();

     }

}

//---------------------MODULO DE CARTELERA------------------------------------------------------------------

void cartelera()

{
   int b=6,but = 0, res = 0,sala_x=0;

   clrscr();
   cuadro2();

   for  (int i=0; i <=3 ;i++)
   {

      cuadro2();
      escribe(22,4,"Mantenimiento de Carteleras          CN_02\n \n");

      escribe(7,6 ," Codigo Pelicula No..........[   ]");
      escribe(7,8, " Nombre Pelicula.............[             ]");
      escribe(7,10," Sala No.....................[   ]");
      escribe(7,12," Capacidad de Butacas........[   ]");
      escribe(7,14," Especifique Restriccion.....[   ]");

      getchar();
      escribe(7,31,"Digite el C¢digo de la Pelicula");
      gotoxy(37,6);

      //-----------llena Valores en las estructuras de CARTELERA--------------

      scanf("%d",& cartel[i].cod);

      escribe(7,31,"Digite el Nombre de la Pelicula ");
      getchar();

      gotoxy(37,8);
      gets(cartel[i].peli);

      escribe(7,31,"Digite el N£mero de Sala Donde se ver  la Pelicula ");

      while (sala_x <= 0 || sala_x >=5 )    //--Permite ingresar salas dentro del rango permitido 1-4
      {
	 escribe(37,10,"   ");
	 gotoxy(37,10);
	 scanf("%d",& sala_x);

      }

      cartel[i].sala = sala_x;

      sala_x=0;
      but = 0;

      //---------Se asigna la Capacidad por Sala segun la Sala Digitada--------------

      if (cartel[i].sala == 1)
	 but = 250;

      if (cartel[i].sala == 2)
	 but = 175;

      if (cartel[i].sala == 3)
	 but = 200;

      if (cartel[i].sala == 4)
	 but = 100;


      cartel[i].cap = but;
      cartel[i].inicial=but;
      gotoxy(37,12);
      printf("%d",cartel[i].cap);   //imprima segun cantidad de butacas segun sala escojida

      escribe(7,31,"Seleccione el Tipo Restriccion Todo Publico [1] Adulto [2]");

      res =0;

      while (res <= 0 || res >= 3 ) //--Permite ingresar restricciones dentro del rango permitido 1-2
      {
	 escribe(37,14,"   ");
	 gotoxy(37,14);
	 scanf("%d",& res);
      }

      if (res == 1)             //-- se asignan los valores de Restriccion
	 cartel[i].restri =1;

      if (res == 2)
	 cartel[i].restri =2;

   }
   res =0; //-- Se limpia el valor del tipo de restriccion
   b = 19;

   for  ( i=0; i <=3 ;i++  )
   {

      escribe(7,18,"Codigo No");
      escribe(20,18,"Nombre");
      escribe(32,18,"Sala No");
      escribe(45,18,"Butacas");
      escribe(56,18,"Restriccion");

      gotoxy(7,b);
      printf("%d",cartel[i].cod);

      gotoxy(20,b);
      puts(cartel[i].peli);

      gotoxy(32,b);
      printf("%d",cartel[i].sala);

      gotoxy(45,b);
      printf("%d",cartel[i].cap);

      if (cartel[i].restri == 1)
	 escribe(55,b,"Todo Publico");

      else
	 escribe(55,b,"Solo Mayores");

      b++;

   }
 escribe(7,31,"Digite una tecla para salir                                ");
 getch();

}

//---------------------MODULO PARA EL TIPO DE CAMBIO DOLAR------------------------------------------------------------------

void cambio_dolar()
{

   clrscr();

   int confir =0;
   int salida= 0;

   while (salida == 0)
   {
      cuadro2();
      escribe(14,4,"Mantenimiento de Tipo de Cambio para el Dolar  CN_03\n \n");

      getchar();
      escribe(7,31,"Digite el tipo de cambio del Dolar para el dia de hoy");
      escribe(7,7,"Tipo de cambio Dolar: ");
      scanf("%f",&tipo_cam);

      escribe(8,10,"El tipo de Cambio establecido para el d¡a de hoy es:");
      printf("%.2f",tipo_cam);

      escribe(7,31,"Seleccione una Opcion:  1 = Salir  ,  2 = Modificar Monto ");
      scanf("%d ",& confir);

      if (confir == 1)
      {
	 salida = 1;
	 delay(800);
	 escribe(15,15,"Informaci¢n Procesada Correctamente ");
	 delay(800);
      }

      if (confir == 2)
      {
	 salida = 0;
	 aper_caja = 0;

      }

      clrscr();

   }

}

//---------------------MODULO LA FACTURACION ------------------------------------------------------------------

void facturacion()

{
   int valid=0;

   while (valid == 0)
   {
      int codigo = 0, i = 0, a = 0,moneda = 0, aux=0;
      float dolar =0;

      can6 = 0;
      can6_12=0;
      can_adul=0;

      clrscr();
      cuadro1();

      escribe(29,4,"Facturacion                     CN_06\n");

      //-------Primer Encabezado Factura----------------

      escribe(54,6,"No.Fac:[   ]");
      num_fac ++;
      gotoxy(63,6);
      printf("%d",num_fac);

      escribe(7,6,"Codigo:[    ]");
      escribe(7,41,"Digite el C¢digo Respectivo de la Pel¡cula");
      escribe(7,8,"Nombre Pel¡cula:[             ]");
      escribe(40,8,"Restricci¢n:[            ]");

      escribe(7,10,"Sala No:[ ]");
      escribe(23,10,"Capacidad:[   ]");
      escribe(62,10,"    ");
      escribe(40,10,"Butacas Disponibles:[     ]");


      //----------Segundo Encabezado Factura------------------

      escribe(7,12,"No Menores 6 a¤os:[   ]");
      escribe(30,12,"No Entre 6 y 12: [   ]");
      escribe(53,12,"Adultos:[   ]");
      escribe(7,14,"Moneda a Cancelar: 1 =Colones ,2 =Dolares [   ]");

      a =0;
      while ( a++ < 61)     //Lineas Horizontales
      {
	 escribe(5+a,11,"-");
	 escribe(5+a,15,"-");
	 escribe(7,16,"* * * * * * * * * *  DETALLE DE CAJA * * * * * * * * * * *");
	 escribe(5+a,17,"-");
	 escribe(5+a,20,"-");
      }
      a = 0;

      while ( a++ < 2)
      {
	 escribe(18,17+a,"|");
	 escribe(36,17+a,"|");
	 escribe(52,17+a,"|");
      }
      //------Tercer Encabezado Factura----------------------

      escribe(7,19,"Cantidad");
      escribe(23,19,"Descripcion");
      escribe(40,19,"Monto Uni.");
      escribe(55,19,"Sub-Monto");

      //-------Codigo de Primer Encabezado Factura------------

      gotoxy(16,6);
      getchar();
      scanf("%d",& codigo);

      for (i = 0; i <= 4 ; i++)      //--Para buscar el codigo de PELICULA
      {

	 //---------Validacion para el Codigo de Pelicula------

	 if (cartel[i].cod == codigo )
	 {
	    gotoxy(24,8);
	    puts(cartel[i].peli);


	    if (cartel[i].restri == 1)
	       escribe(53,8,"TODO PUBLICO");

	    else
	       escribe(53,8,"SOLO MAYORES");

	    gotoxy(16,10);
	    printf("%d",cartel[i].sala);

	    sala_cierre=cartel[i].sala;
	    gotoxy(34,10);
	    printf("%d",cartel[i].inicial);

	    gotoxy(61,10);
	    printf("%d",cartel[i].cap);

	    if (cartel[i].cap > 0)  //--Haga si hay BUTACAS disponible en la sala
	    {
	       //-----------Validacion para el Tipo de Restriccion de c/d PELICULA--------------------
	       if (cartel[i].restri == 1)  // TODO PUBLICO
	       {
		  escribe(7,41,"  Seleccione Los tipos de Persona a Facturar            ");

		  //-----------Almacena Cantidad de Ni¤os--------------------
		  gotoxy(26,12);
		  scanf("%d",& aux );
		  if  (aux <= cartel[i].cap && aux > 0) //--Almecena  solo si hay espacio Disponible
		  {
		     can6=aux;
		     aux =0;
		  }
		  else
		  {

		     escribe(10,30,"LA SALA NO TIENE SUFICIENTES BUTACAS DISPONIBLES");
		  }
		  escribe(10,30,"                                                ");
		  cartel[i].cap -= can6;     //--Disminuye la cantidad de butacas disponibles
		  escribe(61,10,"    ");
		  gotoxy(62,10);
		  printf("%d",cartel[i].cap);

		  //-----------Almacena Cantidad entre 6 y 12 a¤os--------------------

		  gotoxy(48,12);
		  scanf("%d",& aux );
		  if (aux <= cartel[i].cap && aux > 0)  //--Almecena  solo si hay espacio Disponible
		  {
		     can6_12=aux;
		     aux =0;
		  }
		  else
		  {
		     escribe(10,30,"LA SALA NO TIENE SUFICIENTES BUTACAS DISPONIBLES");
		  }
		  escribe(10,30,"                                                ");
		  cartel[i].cap -= can6_12;    //--Disminuye la cantidad de butacas disponibles
		  escribe(62,10,"    ");
		  gotoxy(61,10);
		  printf("%d",cartel[i].cap);
		  //-----------Almacena Cantidad de Adultos--------------------

		  gotoxy(62,12);
		  scanf("%d",& aux );
		  if (aux <= cartel[i].cap && aux > 0)  //--Almecena  solo si hay espacio Disponible
		  {
		     can_adul=aux;
		     aux =0;
		  }
		  else
		  {
		     escribe(10,30,"LA SALA NO TIENE SUFICIENTES BUTACAS DISPONIBLES");
		  }
		  escribe(10,30,"                                                ");
		  cartel[i].cap -= can_adul; //--Disminuye la cantidad de butacas disponibles
		  escribe(62,10,"    ");
		  gotoxy(61,10);
		  printf("%d",cartel[i].cap);
	       }//--Fin del si

	       //-----------Validacion para el Tipo de Restriccion de c/d PELICULA--------------------

	       if (cartel[i].restri ==2)    //SOLO ADULTOS
	       {

		  gotoxy(62,12);
		  scanf("%d",& aux );
		  if (aux <= cartel[i].cap && aux > 0)  //--Almecena  solo si hay espacio Disponible
		  {
		     can_adul=aux;
		     aux =0;
		  }
		  else
		  {
		     escribe(10,30,"LA SALA NO TIENE SUFICIENTES BUTACAS DISPONIBLES");
		  }
		  escribe(10,30,"                                                ");
		  cartel[i].cap -= can_adul; //--Disminuye la cantidad de butacas disponibles
		  escribe(62,10,"    ");
		  gotoxy(61,10);
		  printf("%d",cartel[i].cap);

	       }

	       //-----------Selecion del Tipo de Moneda a factuar----------------------

	       escribe(7,41,"Seleccione El tipo de Moneda 1 = Colones 2 = D¢lares");
	       gotoxy(7,57);
	       scanf("%d",&moneda);

	       if (moneda == 1)
	       {
		  dolar = 1;
	       }

	       if (moneda ==2)
	       {
		  dolar =tipo_cam;
	       }

	       //-----------------Impresion en Pantalla de lo Facturado-------------------------

	       //-----------------Impresion Ni¤os--------------------------------------
	       gotoxy(11,22);
	       printf("%d",can6);

	       escribe(22,22,"Menor 6 A¤os");
	       escribe(45,22,"0");
	       escribe(57,22,"0");

	       //-----------------Impresion Ni¤os entre 6 Y 12 A¥OS--------------------------------------
	       gotoxy(11,24);
	       printf("%d",can6_12);

	       escribe(22,24,"Entre 6 y 12 A¤os");
	       gotoxy(45,24);

	       printf("%f",pre6_12/dolar);       //Calculo del Subtotal
	       subcan6_12 = can6_12 * pre6_12 ;
	       gotoxy(57,24);
	       printf("%.1f",subcan6_12/dolar);

	       //-----------------Impresion Adultos--------------------------------------

	       gotoxy(11,26);
	       printf("%d",can_adul);

	       escribe(22,26,"Adultos");

	       gotoxy(45,26);
	       printf("%.2f",adulto/dolar);
	       subcan_adul = can_adul* adulto;   //Calculo del Subtotal
	       gotoxy(57,26);
	       printf("%.2f",subcan_adul/dolar);

	       //-----------------Calculo del Total de Factura--------------------------------------

	       total_fact = subcan6_12 + subcan_adul;

	       if (moneda ==1)
	       {
		  gotoxy(35,30);
		  printf("TOTAL :%.2f   Colones",total_fact);
	       }

	       if (moneda ==2)
	       {
		  gotoxy(35,30);
		  printf("TOTAL :%.2f   D¢lares",total_fact/dolar);
	       }

	       //---------------Estructura que almacena Valores de c/d Factura--------------------------------------

	       cierre[num_fac].n_sala = cartel[i].sala;  //almacena los valores de cada factura
	       cierre[num_fac].sub_6_12 = subcan6_12;
	       cierre[num_fac].sub_adulto = subcan_adul;
	       cierre[num_fac].total_sala = total_fact; //El total factura se almacena en Colones
	       cierre[num_fac].cant_ninos = can6;
	       cierre[num_fac].cant_6_12 = can6_12;
	       cierre[num_fac].cant_adulto =can_adul;

	    }//--Fin del si "Si tiene espacio Disponible"
	    else
	    {
	       escribe(10,30,"LA SALA NO TIENE BUTACAS DISPONIBLES          ");
	    }

	    i = 4; //** Termina el For si encuentra el Codigo Correcto

	 } //------Fin del SI de "comparacion codigo"

      }//-------Fin del For

      escribe(7,41,"Desea continuar Facturando [ 1 = Cerrar] [ 0 = Continuar ]");
      gotoxy(7,57);
      scanf("%d",& valid);//Sale del while

   }//---------Fin del Ciclo while

}

//---------------------MODULO PARA EL CIERRE DE CAJA ------------------------------------------------------------------

void cierre_caja()
{
   int b =0;

   int salida= 0;
   clrscr();

   cuadro2();
   escribe(28,4,"Cierre de Caja                  CN_07\n \n");

   escribe(28,15,"CIERRE DE LA CAJA ");
   escribe(7,31,"Esta seguro de Realizar el cierre si[ 1 ] no [ 0 ]");
   scanf("%d",& salida);

   while (salida == 1)    //-- Controla la salida
   {
      BAND_CIERRE_CAJ=1;  //---Habilita la opcion que cuando se realice la apertura de caje solo system podra ingresar
      b = 11;

      for  (int i=1; i <=4 ;i++  )
      {
	 //---------------Impresion en Pantalla de Subtotal NI¥OS---------------------------

	 escribe(15,7,"* NI¥OS *");
	 escribe(7,9,"Sala");
	 escribe(12,9,"cantidad");
	 escribe(22,9,"subtotal");

	 gotoxy(8,b);
	 printf("%d",cierre[i].n_sala);

	 gotoxy(15,b);
	 printf("%d",cierre[i].cant_ninos);

	 escribe(23,b," 0");

	 //---------------Impresion en Pantalla de Subtotal NI¥OS ENTRE 6 Y 12---------------------------

	 escribe(41,7,"* ENTRE 6_12 *");
	 escribe(36,9,"Sala");
	 escribe(43,9,"cantidad");
	 escribe(54,9,"subtotal");

	 gotoxy(37,b);
	 printf("%d",cierre[i].n_sala);

	 gotoxy(46,b);
	 printf("%d",cierre[i].cant_6_12);

	 gotoxy(56,b);
	 printf("%.2f",cierre[i].sub_6_12);

	 //---------------Impresion en Pantalla de Subtotal ADULTOS---------------------------

	 escribe(14,18,"* ADULTOS *");
	 escribe(7,20,"Sala");
	 escribe(12,20,"cantidad");
	 escribe(22,20,"subtotal");

	 gotoxy(8,b+11);
	 printf("%d",cierre[i].n_sala);

	 gotoxy(15,b+11);
	 printf("%d",cierre[i].cant_adulto);

	 gotoxy(24,b+11);
	 printf("%.2f",cierre[i].sub_adulto);

	 //---------------Impresion en Pantalla de SUBTOTAL POR SALAS---------------------------

	 escribe(43,18,"* TOTALES *");
	 escribe(36,20,"Sala");
	 escribe(43,20,"Subtotal x sala");
	 escribe(36,28,"TOTAL GLOBAL:");

	 gotoxy(37,b+11);
	 printf("%d",cierre[i].n_sala);
	 gotoxy(49,b+11);
	 printf("%.2f",cierre[i].total_sala);

	 cierre[i].total_sala+=cierre[i].sub_6_12 + cierre[i].sub_adulto;

	 total_global+=cierre[i].total_sala;
	 b++;
	 salida =0;

      }  //-------Fin del Ciclo For

      //---------------Impresion en Pantalla de TOTAL GLOBAL---------------------------

      gotoxy(50,28);
      printf("%.2f",total_global/2);

   }
   escribe(7,31,"Digite una tecla para salir                         ");
   getch();
}

//---------------------MODULO PARA INFORMACION DE CARTELERAS ------------------------------------------------------------------

void informacion()
{
   clrscr();
   cuadro2();
   int b = 0;

   escribe(23,4," Cartelera de la Semana              CN_08");
   escribe(7,7,"NOMBRE DE PELICULAS");
   escribe(30,7,"RESTRICCION");
   escribe(48,7,"CAPACIDAD POR SALA");

   b = 9;

   for (int a = 0; a <= 3; a++)
   {
      gotoxy(7,b);
      puts(cartel[a].peli);
      escribe(7,b+1,"-----------------------------------------------------------");
      if (cartel[a].restri == 1)
	 escribe(29,b,"(Todo Publico)");

      else
	 escribe(29,b,"(Solo Mayores)");

      escribe(54,9,"Sala 1:  250");
      escribe(54,12,"Sala 2: 175");
      escribe(54,15,"Sala 3: 200");
      escribe(54,18,"Sala 4: 100");

      b+=3;
      gotoxy(56,b);
      printf("%d",cartel[a].cap);
   }

   escribe(15,21,"COSTO DE ENTRADA POR PERSONA");

   gotoxy(15,24);
   printf("Adulto:%.1f",adulto);
   gotoxy(15,26);
   printf("Ni¤os Entre 6 y 12 a¤os:%.1f",pre6_12);
   escribe(15,28,"Ni¤os Menores de 6 a¤os entran gratis!");
   escribe(7,31,"Digite una tecla para salir");

   getch();

}

//---------------------FIN DEL PROGRAMA ------------------------------------------------------------------

/* Comentario...

   Cuando se nevega en cada uno de los Menus del Programa, y se intenta
   salir del mismo en la Opcion ("e = salida"), del Menu Principal, el
   programa genera un ERROR, el cual sale inmediantemente del compilador;

   Solo permite salir de forma correcta cuando no se navega en ningun
   SUBMENU del programa   */


