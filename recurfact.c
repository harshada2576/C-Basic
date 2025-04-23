#include<stdio.h>
int main()
{
	int x;
	int result;
	printf("Enter number whose factorial is needed:");
	scanf("%d",&x);
	result=fact(x);
	printf("The factorial of %d is %d",x,result);
	return 0;
}
int fact(int x)
{
	if(x==0  || x==1)
	{
		return 1;	
	}	
	else
	{
		return x*fact(x-1);
	}
}

