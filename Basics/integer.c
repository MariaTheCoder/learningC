
#include <stdio.h>

int min(int a, int b)
{
  if (a > b)
    return b;
  else
    return a;
}

int multiply(int a, int b, int c)
{
  return a * b * c;
}

int minus(int a, int b, int c)
{
  return a - b - c;
}

int main()
{
  // printf("%d \n", multiply(2, 3, 2));
  // printf("%d \n", minus(2, 3, 2));
  printf("%d \n", min(3, 2));
  int sum = 0;
  sum = 2 + 3 + 2;
  // printf("%d \n", sum);
  return sum;
}
