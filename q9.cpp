//triplet
#include<iostream>
using namespace std;
#include<conio.h>
#include<stdlib.h>
int main()
{
	system("cls");
	int i,j,a;
	for(i=1;i<1000;i++)
	{
		for(j=i+1;j<1000;j++)
		{
			a=1000-i-j;
			if(i*i+j*j==a*a)
			cout<<(i*j*a);	
		}
	}
	getch();
}
