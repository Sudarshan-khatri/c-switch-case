#include<stdio.h>
int prime_not(int);
int main()
{
	int n,result;
	printf("enter the number");
	scanf("%d",&n);
	result=prime_not(n);
	if(result == 0)
	{
		printf("number is prime\n");
	}
	else
	{
		printf("number is not prime");
	}
}
int prime_not(int x)
{
	int i,count=0;
	for(i=2;i<x;i++)
	{
		if(x%i==0)
	{
	 count++;
	}
	if(count==0)
	{
		return 0;
	}
	else 
	{
		return 1;
	}
}
}
