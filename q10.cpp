//sum of 2 mill prime no.s
#include<iostream>
using namespace std;
#include<conio.h>
#include<stdlib.h>
#include<math.h>     
bool check(long long x)
{
	if (x>2 && x%2==0)
	{
		return false;
	}
	for(long long i=3;i <= (long long)sqrt(x); i=i+2) 
	{
		if (x % i == 0) 
		{
		return false;
		}
	}
	return true;
}
int main()
{
	system("cls");
	long long a,b=0;
	for(a=2;a<=2000000;a++)
	{
		if(check(a))
		b=b+a;
	}
	cout<<b<<endl;
	getch();
}
