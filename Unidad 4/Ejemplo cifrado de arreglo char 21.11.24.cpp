//Geovani Joel Ramirez Rivas
//24041219
#include <windows.h>
#include <iostream>
using namespace std;
int main() 
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    
	char cad[100];
	int i;
	
	cout<<"Escribe un mensaje o cadena ";
	cin>>cad;
	
	for(i=0;cad[i]!='0';i++)
	switch(cad[i])
	{
	
		case 'a': cad[i]= '3';
		break;
		case 'e': cad[i]= '6';
		break;
		case 'i': cad[i]= '5';
		break;
		case 'o': cad[i]= '8';
		break;
		case 'u': cad[i]= '2';
		break;
		case 'b': cad[i]= '7';
		break;
		case 'c': cad[i]= '12';
		break;
		case 'd': cad[i]= '57';
		break;
		case 'f': cad[i]= '48';
		break;
		case 'h': cad[i]= '17';
		break;
		default: break;
	}
	cout<<"Cadena cifrado: "<<cad<<"\n";
	return 0;
}