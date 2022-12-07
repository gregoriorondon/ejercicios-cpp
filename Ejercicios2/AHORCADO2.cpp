#include<string.h>
#include<stdlib.h>
#include<dos.h>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<ctype.h>
#include<iostream.h>

//do
//{

    //while (r=='s')
    //{
    /* Variable global que contendra la palabra buscada */
    char A[80];

    /*Lee archivo que contiene palabras y selecciona aletoriamente una*/
    void carga(void){

    FILE *fp;
    char cadena[80];
    clrscr();

    /* Abre archivo */
    if ((fp = fopen("ahorcado.dat", "r"))== NULL)
    {
       fprintf(stderr, "No se puede abrir archivo.\n");
       getch();
       exit(0);
    }

    /* Cuenta numero de palabras */
    int palabras=0;
    while (!feof(fp))
    {
       fgets(cadena, 80, fp);
       palabras++;
    }


    /* Nos movemos al inicio del archivo */
    fseek(fp, 0, SEEK_SET);

    /* Genera un numero aleatorio entre 0 y el numero de palabras */
    randomize();
    int numero = rand() % palabras;

    /* Obtiene palabra y la copia en el arreglo */
    int i=0;
    for(i=0; i<=numero; i++)
       fgets(cadena, 80, fp);
    /* Coloca fin de cadena */
    cadena[strlen(cadena)-1]='\0';
    strcpy(A, cadena);

    /* Cierra archivo */
    fclose(fp);
    }

    void makeline(int x,int y,int x1,int y1)
    {
	x=x+200;
	x1=x1+200;
	y=y+40;
	y1=y1+40;
	setcolor(RED);
	setlinestyle(SOLID_LINE,0,THICK_WIDTH);
	line(x,y,x1,y1);
    }
    void makecircle(int x,int y)
    {
	x=x+200;
	y=y+40;
	setcolor(RED);
	setlinestyle(SOLID_LINE,0,THICK_WIDTH);
	circle(x,y,20);
	setfillstyle(LTSLASH_FILL,BLUE);
	floodfill(x,y,RED);
    }

    void initialize()
    {
	int gdriver = DETECT, gmode, errorcode;
	initgraph(&gdriver, &gmode, "");
    }

    void textshow(char c[100],int x,int y,int size=1,char col=YELLOW)
    {
	moveto(x,y);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,size);
	setcolor(col);
	settextjustify(LEFT_TEXT,TOP_TEXT);
	setusercharsize(1,1,1,1);
	outtext(c);
    }

    void geout()
    {
	closegraph();
    }

    void show(int n)
    {
	switch(n)

	{
	    case 5:
	    makecircle(320,200);
	    makeline(320,220,320,300);
	    break;

	    case 7:
	    makeline(320,300,300,320);
	    makeline(320,300,340,320);
	    break;

	    case 6:
	    makeline(320,240,300,260);
	    makeline(320,240,340,260);
	    break;

	    case 4:
	    makeline(320,180,320,140);
	    break;

	    case 3:
	    makeline(320,140,240,140);
	    break;

	    case 2:
	    makeline(240,140,240,380);
	    break;

	    case 1:
	    makeline(200,380,360,380);
	    break;
	}
    }

    void rectmake(int x,int y,int x1,int y1)
	{
	int x3=(x+x1)/2;
	int y3=(y+y1)/2;
	int j=x1-x3;
	int i;
	setcolor(BLACK);
	for(i=1;i<j;i++)
	{
	    setcolor(CYAN);
	    rectangle(x3-i,y3-i,x3+i,y3+i);
	    delay(50);
	    setcolor(BLACK);
	    rectangle(x3-i,y3-i,x3+i,y3+i);
	}
	setcolor(CYAN);
	rectangle(x,y,x1,y1);
    }

    void alphashow()
    {
	setcolor(CYAN);
	setlinestyle(SOLID_LINE,0,THICK_WIDTH);
	rectmake(4,6,632,477);
	rectangle(370,120,600,450);
	textshow("AHORCADO",390,130,3,BLUE);
	textshow("Ultimo caracter ingresado:",10,150);
	char a[2];
	int i=0;
	textshow("Alfabeto usado",10,450);
	strcpy(a," ");

	for(i=0;i<26;i++)
	    {
	    a[0]=(char)(i+65);
	    textshow(a,10+(10*i),460);
	}
    }

    void game()
	{
	int xg,yg;
	xg=20;yg=50;
	int y=0,z=0,n,position,a,b,i;
	char ch;
	int alpha[29];
	for(i=0;i<29;i++)
	alpha[i]=0;
	alphashow();
	a=strlen(A);
	int p=0;

	for(i=0;i<a;i++)
	{
	    if(A[i]==' ')
	    p++;
	}
	p=a-p;

	for(i=0;i<a;i++)
	{
	    A[i]=toupper(A[i]);
	    if(A[i]!=' ')
			textshow("_",xg+5+(i*25),yg+18,2);
	else textshow("/",xg+5+(i*25),yg+10,2);
	}
	int count=0;
	int u=0;
	char cc[2];
	strcpy(cc," ");

    do
    {
		ch=getch();
		if(isalpha(ch))
		{
	    ch=toupper(ch);
	    cc[0]=ch;
	    if(alpha[(int)ch-65]==0)
	    {
		textshow(cc,10+(count*10),160);
		count++;
	    }
	    u=0;
	    cc[0]=ch;

			if(alpha[(int)ch-65]==0)
			{
		alpha[(int)ch-65]=1;
				for(i=0;i<a;i++)
		{
		    if(ch==A[i])
					{
			u++;
					}
				}
				for(i=0;i<a;i++)
				{
					if(ch==A[i])
					{
						textshow(cc,xg+5+(i*25),yg+5,2);
						++y;
					}else
						if(u==0)
							z++;
				}
			}
			if(z%a==0)
			show(z/a);
			if((z/a)==7)
			goto lose;
			for(int ui=0;ui<26;ui++)
			{
		if(alpha[ui]==1)
		textshow("X",10+(10*ui),460,1,RED);
			}
		}
	}while(p>y);
		rectangle(25,190,260,230);
		textshow("Ganaste, tuviste suerte!",50,200,3);
		goto end;
		lose:
		rectangle(25,190,320,285);
		textshow("Estas Eliminado... band!!!",50,200,2);
		textshow("La Respuesta Correcta es ",50,230,2);
		textshow(A,50,260);
		end:
		getch();
	}

    void main()
	{  char r;
	r='s';
		carga();
		initialize();
		game();
		while(r=='s')
		{
		 clrscr();
		 gotoxy(10,15); cout<<"Desea Continuar Jugando ";
		  cin>>r;
		  if(r=='s')
		  {

		  carga();
		  initialize();
		  game();
		  }
		  if(r=='n')
		  {
		  geout();
		  }

		}

    }

  //
//}while(r != s);
