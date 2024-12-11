//Geovani Joel Ramirez Rivas
//24041219
#include<iostream>
#include<windows.h>
#include <time.h>
using namespace std;
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	int matriz[10][10];
	int i,j,n,tempo;
	srand(time(0));
	do
	{
	cout<<"¿Cuantos elementos por lado tiene la matriz (menor que 10, mayor que 2)? ";
	cin>>n;
	}
	while(n>10 or n<2);
	for(i=0;i<n;i++) //ciclo para renglones
		for(j=0;j<n;j++) //ciclo para columnas
		matriz[i][j]=rand()%100;
	cout<<"Impresión de la matriz"<<endl;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
				printf("%3d",matriz[i][j]);
	cout<<"\n";
		}
	cout<<"Impresión de la matriz subdiagonal\n";
			for(i=0;i<n;i++)
			{
				for(j=0;j<n;j++)
					{
					if(i==j)
						printf(" ");
					else
						printf("%3d",matriz[i][j]);printf(" ");
					}
			cout<<"\n";
			}
	return 0;
}