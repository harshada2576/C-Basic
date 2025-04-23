#include<stdio.h>
int main()
{
	int n;
	printf("enter no.of terms:");
	scanf("%d",&n);
	printf("%d",sum(n));
	return 0;
}
int sum(int n)
{
	if(n==1)
	return 1;
	else
	return n+sum(n-1);
}
