//Geovani Joel Ramirez Rivas
//24041219
#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	char otro='S';
	int cuantos,suma,x;
	float promedio;
	cuantos=0;
	suma=0;
	for(;otro=='S';)
		{		
		cout<<"Dame un número: ";
		cin>>x;
		cuantos++;
		suma=suma+x;
		cout<<"Quieres teclear otro número? S/N ";
		cin>>otro;
		}
	suma++;
	cuantos=cuantos-1;
	promedio=suma/cuantos;
	cout<<"Fueron "<<cuantos<<" numero\n";
	cout<<"La sumatoria es="<<suma<<"\n";
	cout<<"El promedio es="<<promedio<<"\n";
	return 0;
}