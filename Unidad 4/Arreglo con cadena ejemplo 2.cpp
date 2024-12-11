//Geovani Joel Ramirez Rivas
//24041219
#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	char cadena[10];
	int len,i;
	
	cout<<"Dame una palabra en minúsculas: ";
	gets(cadena);
	len=strlen(cadena);
	
	for(i=0;i<len;i++)
		cadena[i]=toupper(cadena[i]);
	cout<<"La cadena en mayúsculas es: "<<cadena<<endl;
	cout<<"Impresión elemento por elemento\n";
	
	for(int i=0;i<len;i++)
	cout<<"Cadena["<<i<<"]="<<cadena[i]<<"\n";
	return 0;
}
