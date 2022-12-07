#include<iostream.h>
#include<string.h>
#include<stdlib.h>
int error_busqueda(char cad[10]);
void main()
{
	char cad[10];
	char cad12[]={"1234567890"};
	char aux[]={"+-*/"};
	int c=0;
	cout<<"NOTACION INFIJA: ";
	cin.getline(cad,10);
	int x=error_busqueda(cad);
	if(x==1)
	{   int band=-1;
		//cout<<"ok";
		//cout<<"PRIMER CARACTER:"<<cad[0]<<endl;
		for(int i=0;i<10;i++)
		{
			if(cad12[i]==cad[0])
			{
				band=i;
			}
		}
		if(band!=-1)
		{
			//cout<<"BIEN----"<<endl;
			c++;
		}
		else
		{
            //cout<<"ERROR----"<<endl;
		}
		//cout<<"SEGUNDO CARACTER:"<<cad[1]<<endl;
		if(cad[1]!=' ')
		{
					//cout<<"ERROR----"<<endl;
				//cin.get();
		      	c--;
		} 
	    else
		{
                 //cout<<"BIEN----"<<endl;
				 c++;
				
			
		}
		band=-1;
		//cout<<"TERCER CARACTER:"<<cad[2];
		for(i=0;i<4;i++)
		{
		   if(aux[i]==cad[2])
		   {
				band=i;
		   }
		}
        if(band!=-1)
		{
			//cout<<"BIEN----"<<endl;
			c++;
		}
		else
		{
            //cout<<"ERROR----"<<endl;
			c--;
		}
	     //cout<<"CUARTO CARACTER:"<<cad[3]<<endl;
		if(cad[1]!=' ')
		{
					//cout<<"ERROR----"<<endl;
				    //cin.get();
			c--;
		}
	    else
		{
                 //cout<<"BIEN----"<<endl;
				 c++;
				
			
		}

        //cout<<"QUINTO CARACTER:"<<cad[4]<<endl;
		for(i=0;i<10;i++)
		{
			if(cad12[i]==cad[4])
			{
				band=i;
			}
		}
		if(band!=-1)
		{
			//cout<<"BIEN----"<<endl;
			c++;
		}
		else
		{
            //cout<<"ERROR----"<<endl;
			c--;
		}
		if(c==5)
		{
			cout<<"LA CADENA CUMPLE CON LOS CONDICIONES";
			cin.get();
		}
		else
		{
			cout<<"ERROR EN LA CADENA";
			cin.get();
		}
		











	}else
	{
	            cout<<"ERROR----"<<endl;
				cin.get();
	}
		





	
		

}
int error_busqueda(char cad[10])
{
	int x;
	x=strlen(cad);
	if(x==5)
	{
		return(1);
	}
	else
	{
		return(0);
	}
}

