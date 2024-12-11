//Geovani Joel Ramirez Rivas
//24041219
#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	int x,factorial;
	
	cout<<"Dime un número para calcular su factorial: ";
	cin>>factorial;
	cout<<factorial;
		
		for(x=factorial-1;x>=1;x--)
		{
		cout<<"x"<<x;
		factorial=factorial*x;
		}	
	cout<<"="<<factorial;

return 0;
}