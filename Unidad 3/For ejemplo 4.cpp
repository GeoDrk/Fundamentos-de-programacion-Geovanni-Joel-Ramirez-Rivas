//Geovani Joel Ramirez Rivas
//24041219
#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	int x=1;
	string clave;
	for(;x<4;x++)
	{
	printf("Dame tu password (intento #%d) ",x);
	getline(cin,clave);
	if(clave=="soloyolose")
	break;
	}
	if(x==4)
		puts("\ausuario no autorizado");
	else
		printf("Bienvenido al intento #%d",x);
return 0;
}