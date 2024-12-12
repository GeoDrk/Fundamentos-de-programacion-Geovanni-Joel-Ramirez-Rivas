//Geovanni Joel Ramirez Rivas 
//24041219
#include <iostream>
#include <windows.h>
#include <stdio.h>
using namespace std;
void cuad1(int x);
void cuad2(int &x);
int main()
{
	int x;
	cout<<"Dame un valor para elevar al cuadrado ";
	cin>>x;
	cout<<"\nx= "<<x<<" antes de elnviarla a la funcion 1\n";
	system("pause");
	cuad1(x);
	cout<<"\nx= "<<x<<" Despues de mandarla a la funcion 1\n";
	system("pause");
	cuad2(x);
	cout<<"\nx= "<<x<<" Despues de mandarla a la funcion 1\n";
	return 0;
}
void cuad1(int x)
{
	x=x*x;
	cout<<"\nx="<<x<<"DENTRO DE LA FUNCION 1";
	system("pause");
}
void cuad2(int &x)
{
	x=x*x;
	cout<<"\nx="<<x<<"DENTRO DE LA FUNCION 2";
	system("pause");
}