#include<stdio.h>
int main()
{
	int x;
	int result;
	printf("Enter number :");
	scanf("%d",&x);
	result=sum(x);
	printf("The sum of  digits is %d",result);
	return 0;
}
int sum(int n)
{
	if(n==0)
	return 0;
	else
	return (n%10+sum(n/10));
}
