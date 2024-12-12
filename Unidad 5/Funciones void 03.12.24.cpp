//Geovanni Joel Ramirez Rivas 
//24041219
#include <iostream>
#include <windows.h>
using namespace std;
int sumar(int x, int y);
int main()
{
	
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	int num1,num2;
	cout<<"Ingresa el primer número ";
	cin>>num1;
	cout<<"Ingresa el segundo número ";
	cin>>num2;
	int resultado=sumar(num1,num2);
	cout<<"el resultado de la suma es: "<<resultado<<endl;
	cout<<"El resultado es: "<<sumar(num1,num2);
	return 0;
}
int sumar(int a, int b)
{
return a+b;
}

