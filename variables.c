#include <stdio.h>

int main()
{
  int a;
  int b = 3;
  int c;

  a = 2;
  c = a + b;
  printf("Sum of %d and %d is %d\n", a, b, c);
  a = 5;
  c = 4;
  b = a + c;
  printf("Sum of %d and %d is %d\n", a, c, b); 
}
