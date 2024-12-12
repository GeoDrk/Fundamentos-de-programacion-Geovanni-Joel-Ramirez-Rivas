//Geovanni Joel Ramirez Rivas 
//24041219
#include <iostream>
#include <windows.h>
#include <stdio.h>
using namespace std;
void modificarArregloChar(char (&arregloChar)[5]);
void modificarArregloInt(int (&arregloint)[5]);
int main()
 {
	char arregloChar[]="Hola";
	int arregloint[]={1,2,3,4,5};
	cout<<"Arreglo char original "<<arregloChar<<endl;
	cout<<"Arreglo int original ";
	for(int i=0;i<5;i++)
		cout<<arregloint[i]<<"\n";
	cout<<endl;
	modificarArregloChar(arregloChar);
	modificarArregloInt(arregloint);
	cout<<"Arreglo char modificado "<<arregloChar<<endl;
	cout<<"Arreglo int modificado ";
	for(int i=0;i<5;i++)
		cout<<arregloint[i]<<endl;
	cout<<endl;
	return 0;
 }
 void modificarArregloChar(char (&arregloChar)[5]) 
{
    for (int i = 0; i < 5; i++) 
	{
        arregloChar[i] = 'x';
    }
}
 void modificarArregloInt(int (&arregloint)[5]) 
{
    for (int i = 0; i < 5; i++) 
	{
        arregloint[i] *= 2;
    }
}
