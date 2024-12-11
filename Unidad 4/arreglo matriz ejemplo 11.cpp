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
	
	int matriz[10][10],diags[2][10];
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
	cout<<"Impresión de la matriz diagonal\n";
		for(i=0;i<n;i++)
	{
			diags[0][i]=matriz[i][i];
			printf("%3d",diags[0][i]);
	}
			cout<<"\nObtención Diagonal inversa\n";
		j=0;
	for(i=n-1;i>=0;i--)
	{
		diags[1][j]=matriz[j][i];
		printf("%3d",diags[1][j]);
		j++;
	}
	return 0;
}