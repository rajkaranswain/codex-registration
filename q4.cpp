//pallindrome
#include<iostream>
using namespace std;
#include<conio.h>
#include<stdlib.h>
bool rev(int num)
{
 	int rev=0,temp;
 	temp=num;
 	while(num>0)
 	{
  		rev=(rev*10)+(num%10);
  		num=num/10;
 	}	
 	if(rev==temp)
 	return true;
 	else
  	return false;
}
int main()
{
 	system("cls");
 	int i=0,j=0,a=0,x=-1;
 	for(i=100;i<1000;i++)
 	{
  		for(j=100;j<1000;j++)
  		{	
   			a=i*j;
   			if((a>x)&& (rev(a)))
    		x=a;
  		}
 	}
 	cout<<x<<endl;
	getch();
}
