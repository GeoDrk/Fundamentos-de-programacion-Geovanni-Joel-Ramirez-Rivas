//Geovani Joel Ramirez Rivas
//24041219
#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	int x,tabla;
	cout<<"Dame el número de la tabla que quieras generar: ";
	cin>>tabla;
	for(x=1;x<11;x++)
		{
		cout<<tabla<<"x"<<x<<"="<<tabla*x<<"\n";
		}
	system("pause");
	for(x=1;x<11;x++)
			{
			printf("%2d x %2d = %3d\n",x,tabla,tabla*x);
			}
return 0;
}