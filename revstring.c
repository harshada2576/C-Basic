#include<stdio.h>
#include<string.h>

void rev(char*s,int i,int j)
{
	if(i<j)
	{
		char t=s[i];
		s[i]=s[j];
		s[j]=t;
		rev(s,i+1,j-1);
	}
}
int main()
{	
	
	char str[]="Harshada";
	rev(str,0,strlen(str)-1);
	printf("Reverse string:%s",str);
	return 0;	
}

