//Geovani Joel Ramirez Rivas
//24041219
#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
    
	//Carácteres especiales
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int nip=123;
	int intento=0;
	
	cout<<"Teclea tu NIP: ";
	cin>>intento;
	if(intento==nip);
    {
	
	printf("**Correcto**");
	
	}
	return 0;
}