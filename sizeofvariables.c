#include<stdio.h>

int main()
{
  int a = 545;

  // print value and size of an int variable
  printf("int a value: %d and size: %lu bytes\n", a, sizeof(a));

  char c = 'b';
  printf("int a value: %c and size: %lu bytes\n", c, sizeof(c));

  float j = 6.56;
  printf("int a value: %f and size: %lu bytes\n", j, sizeof(j));

  double k = 897.654;
  printf("int a value: %f and size: %lu bytes\n", k, sizeof(k));

  short int p = 32767;
  printf("int a value: %hd and size: %lu bytes\n", p, sizeof(p));

  long int z = 2147483647;
  printf("int a value: %ld and size: %lu bytes\n", z, sizeof(z));
}





