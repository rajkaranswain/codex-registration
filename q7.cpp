//10001st prime no.
#include<iostream>
using namespace std;
#include<conio.h>
#include<math.h>
#include<stdlib.h>
bool primeno(long x)
{
	if (x>2 && x%2==0)
	{
		return false;
	}
	for(long i=3;i <= (long)sqrt(x); i=i+2) 
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
    long p=2,q=0;
    int count=0;
    while(1==1)
	{
		if(count==10001)
		{
			break;
		}
		if (primeno(p))
		{
			q=p;
			count++;
		}
		p++;
	}	
	cout<<q;
	getch();
}
