//Geovanni Joel Ramirez Rivas 
//24041219
#include <iostream>
#include <windows.h>
using namespace std;
void parimpar(int numero);
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	int numero;
	cout<<"Dame un número: ";
	cin>>numero;
	parimpar(numero);
	cout<<"Dame otro número: ";
	cin>>numero;
	parimpar(numero);
	return 0;
}
void parimpar(int numero)
{
	if(numero%2==0)
		cout<<"El número es par\n";
	else
		cout<<"El número es impar\n";	
}