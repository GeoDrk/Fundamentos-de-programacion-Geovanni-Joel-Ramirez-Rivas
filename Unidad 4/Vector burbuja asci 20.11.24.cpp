//Geovani Joel Ramirez Rivas
//24041219
#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	char tempo, vector[10];
	int i,j,n,random;
	srand(time(0));
	do
	{
		cout<<"Dime cuantos elementos quieres ordenar? <2-10>: ";
		cin>>n;
	}
	while(n>10 or n<2);
	for(i=0;i<n;i++);
	{
		random=65;
		do
		{
			random=rand()%91;
		}
		while(random<65);
		vector[j]=random;
		cout<<"Vector["<<j<<"]="<<vector[j]<<"\n";
	}
	vector[n]='\n';
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(vector[i]>vector[j])
			{
				tempo=vector[j];
				vector[j]=vector[i];
				vector[i]=tempo;
			}
		}
	}
	
	cout<<"Vector hasta el terminador\n";
	i=0;
	do
	{
		cout<<"Vector["<<i<<"]="<<vector[i]<<"\n";
		i++;
	}
	while(vector[i]!='\0');
	
	cout<<"Vector completo\n";
	for(i=0;i<11;i++)
		cout<<"Vector["<<i<<"]="<<vector[i]<<"\n";
	cout<<"Vector["<<i<<"]="<<vector[i]<<"\n";
	return 0;
}