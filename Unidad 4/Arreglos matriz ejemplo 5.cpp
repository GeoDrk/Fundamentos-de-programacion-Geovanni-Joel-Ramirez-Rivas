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
	
	int matriz[5][5];
	int i,j;
	srand(time(0));
	
	for(i=0;i<5;i++) //ciclo para renglones
		for(j=0;j<5;j++) //ciclo para columnas
		cout<<"Dame el renglón \n"<<i<<" columna "<<j<<'\n';
		cin>>i>>j;
		//matriz[i][j]=rand()%100;
	for(i=0;i<5;i++)
	{
	for(j=0;j<5;j++)
	printf("%3d",matriz[i][j]);
	//cout<<matriz[i][j]<<" ";
	cout<<"\n";
	}
	return 0;
}
