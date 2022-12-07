/* realizar un programa para introducir una lista de datos de las cuales calcule la media 
del vector, comparar los valores mayores y menores a la media*/
 
# include <iostream.h>

void main () 
{
int contM=0;
int contm=0;
	float media;
	char opc='s';
	float dato [100];
int i=0;
double suma=0;
while (opc=='s' || opc=='S')
{
	cout<<"introduzca un dato cualquiera";
	cin>> dato [i];
	suma = suma + dato[i];
	i++;
	cout<<"desea continuar s/n:";
	cin>> opc;

}

media= suma/i;


for(int x=0;x<i;x++)
{
	if (dato[x]> media)
		contM++;
	else
		contm++;
}

cout<<" la media es:"<<media<<endl;
cout<<"la cantida de datos mayores a la media:"<<contM<<endl;
cout<<"la cantida de datos menore a la media:"<<contm<<endl;

cin.get ();
cin.get ();
}