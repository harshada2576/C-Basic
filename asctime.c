#include<time.h>
#include<stdio.h>
void main()
{
  struct tm *ptr;
time_t lt;
lt=time(NULL);
ptr=localtime(&lt);
printf(asctime(ptr));
}
