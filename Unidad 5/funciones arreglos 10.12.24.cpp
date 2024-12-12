//Geovanni Joel Ramirez Rivas 
//24041219
#include <iostream>
#include <time.h>
#include <stdio.h>
using namespace std;
int cuantos(void);
void captura(int arreglo[],int n);
void ordena(int arreglo[],int n);
void imprime(int arreglo[],int n);
void intercambia(int &x,int &y);
int main()
{
	int num,arreglo[100];
	srand(time(0));
	num=cuantos();
	cout<<"\nEl arreglo sera de "<<num<<" elementos";
	captura(arreglo,num);
	cout<<"\nEl arreglo original es \n";
	imprime(arreglo,num);
	cout<<"\nEl arreglo ordenado es \n";
	ordena(arreglo,num);
	imprime(arreglo,num);
	return 0;
}
int cuantos(void)
{
	int n;
	do
	{
		cout<<"Dime cuantos elementos quieres ordenar? ";
		cin>>n;
	}
	while(n>10 or n<2);
	return n;
}
void captura(int arreglo[],int n)
{
	int i;
	for(i=0;i<n;i++)
		arreglo[i]=rand()%10;
}
void imprime(int arreglo[],int n)
{
	for(int i=0;i<n;i++)
		cout<<"Arreglo["<<i<<"]= "<<arreglo[i]<<endl;
}
void ordena(int arreglo[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arreglo[i]>arreglo[j])
			{
				intercambia(arreglo[j],arreglo[i]);
			}
		}
	}
}
void intercambia(int &x,int &y)
{
	int tempo;
	tempo=y;
	y=x;
	x=tempo;
}