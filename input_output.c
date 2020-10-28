/* 
   Libraries are pieces of code written by other programmers.
   The library <stdio.h> allow to use 'printf' and 'scanf' for 
   printing and gaining input.
*/
include <stdio.h>

int main ()
{
  int number;
  printf("This is OUTPUT\n");
  scanf("%d", &number);
  printf("This is your number: %d\n", number);
  return 0;
}
