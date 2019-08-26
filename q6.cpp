//diff between sum and square
#include<iostream>
using namespace std;
#include<conio.h>
#include<stdlib.h>
int main()
{
	system("cls");
	int i,x=0,sum=0,sub=0;
	for(i=1;i<=100;i++)
	{
		x=x+(i*i);
		sum=sum+i;
	}
	sum=sum*sum;
	sub=sum-x;
	cout<<sub;
	getch();
}
