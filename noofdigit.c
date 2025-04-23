#include<stdio.h>
int main()
{
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	printf("\nThe number of digits in %d is %d:",n,digit(n));
	return 0;
}
int digit(int n)
{
	int count=0;
	while(n>0)
	{
		n=n/10;
		count++;
	}
	return count;
}
