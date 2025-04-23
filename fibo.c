#include<stdio.h>
int main()
{
	int x,i;
	int result;
	printf("Enter number of terms:");
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		printf("%d\n",fibo(i));
	}
	return 0;
}
int fibo(int n)
{
	if(n==1)
	return 0;
	else if(n==2)
	return 1;
	else
	return fibo(n-1)+fibo(n-2);	
}
