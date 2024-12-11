//Geovani Joel Ramirez Rivas
//24041219
#include<iostream>
#include<windows.h>
#include <string>
using namespace std;
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	int x;
	string cadena = "Hola mundo buenos dias";
	cout<<"La cadena es: "<<cadena<<endl;
	char mayus = cadena[0];
	for(x=0;x<cadena.length();x++)
	cadena[x] = toupper(cadena[x]);
	
	for(x=0;x<cadena.length();x++)
	cout<<cadena[x]<<endl;
	return 0;
}