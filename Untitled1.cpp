#include<stdio.h>
int main()
{
	int n,a,b,sum,sub,prod,div;
	printf("enter the number\n");
	scanf("%d",&n);
	switch(n)
		{
			case 1:
			printf("enter the number\n");
			scanf("%d%d",&a,&b);
			sum=a+b;
			printf("the sum is %d",sum);
			break;
			case 2:
			printf("enter the number\n");
			scanf("%d%d",&a,&b);
			sub=a-b;
			printf("the subtraction is %d",sub);
			break;
			case 3:
			printf("enter the number\n");
			scanf("%d%d",&a,&b);
			prod=a*b;
			printf("the product is %d",prod);
			break;
			case 4:
			printf("enter the number\n");
			scanf("%d%d",&a,&b);
			div=a/b;
			printf("the division is %d",div);
			default :
			printf("we are really sorry");
		}
}
