//Geovanni Joel Ramirez Rivas
//24041219
#include <iostream> 
#include <windows.h>
using namespace std;

void limpia(void)
{
	system("cls");
}
void saludo(void)
{
	cout<<"Buenos días\n";
}
int suma(int x, int y)
{
	return(x+y);
}
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	int cant1,cant2,cant3;
	limpia();
	saludo();
	cout<<"Dame un número: ";
	cin>>cant1;
	cout<<"Dame otro número: ";
	cin>>cant2;
	cant3=suma(cant1,cant2);
	cout<<"El total es: "<<cant3<<endl;
	cout<<"La suma de 1000+2000: "<<suma(1000,2000);

	return 0;
}
