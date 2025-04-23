#include<stdio.h>
int main()
{
	int x,y;
	int result;
	printf("Enter  2 numbers :");
	scanf("%d %d",&x,&y);
	result=gcd(x,y);
	printf("The GCD is %d",result);
	return 0;
}
int gcd(int a,int b)
{
	if(b!=0)
	return gcd(b,a%b);
	else
	return a;
}
