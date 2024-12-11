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
	
	int m1[10][10],m2[10][10],m3[10][10];
	int v1[10],v2[10],v3[10];
	int i,j,n;
	srand(time(0));
	do
	{
	cout<<"Cuantos elementos por lado tiene matriz y vector? (2 a 10) " ;
	cin>>n;
	}
	while(n>10 or n<2);
	
	for(i=0;i<n;i++) //ciclo para renglones
		for(j=0;j<n;j++) //ciclo para columnas
			m1[i][j]=rand()%10;
	//llenado manual segund matriz
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			cout<<"Dame el valor de m2["<<i<<"]["<<j<<"]: ";
			cin>>m2[i][j];	
		}
	//impresión de matrices
	cout<<"Matriz 1\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%3d",m1[i][j]);
		}
	cout<<"\n";
	}
	
	cout<<"Matriz 2\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%3d",m2[i][j]);
		}
	cout<<"\n";
	}
	
	cout<<"Matriz 3\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			m3[i][j]=m1[i][j]+m2[i][j];
			printf("%3d",m3[i][j]);
		}
	cout<<"\n";
	}
	system("pause");
	system("cls");
	//Vectores aleatorios
	cout<<"v1,v2,v3";
	for(i=0;i<n;i++)
	{
		v1[i]=rand()%10;
		v2[i]=rand()%10;
		v3[i]=rand()%10;
	printf("%2d + %2d = %2d\n",v1[i],v2[i],v3[i]);
	}
	return 0;	
}