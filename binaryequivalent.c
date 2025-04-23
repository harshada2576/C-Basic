#include <stdio.h>
void toBinary(int n) 
{
  if (n > 0)
   {
    toBinary(n / 2);  
	// Recursive call: process the left bits
    printf("%d", n % 2);
	 // Print the rightmost bit (remainder)
  }
}

int main()
 {
  int num ;
  printf("Enter a decimal number:");
  scanf("%d",&num);
  printf("\nBinary equivalent of %d is: ", num);
  toBinary(num);
  return 0;
}
