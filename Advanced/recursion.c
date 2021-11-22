/*
R E C U R S I O N 

Recursion happens when a function is called inside of itself. 
This provides neat elegat code but can also result in a very large 
amount of memory being used if the recursion gets too deep.

Recursion is often used in two situations: 
- With data structures such as linked lists, binary trees etc. 
- Exploring possible scenarios in game such as chess

Recursion always consists of two main parts. 
* A terminating case that indicates when the recursion will finish 
* A call to itself that must make progress towards the terminating case

*/

#include <stdio.h>

unsigned int factorial(unsigned int x)
{
  if (x == 1)
  {
    return 1;
  }
  else if (x > 1)
  {
    return x *= factorial(x - 1);
  }
  return 1;
}

int main()
{
  /* testing code */
  printf("0! = %i\n", factorial(0));
  printf("1! = %i\n", factorial(1));
  printf("3! = %i\n", factorial(3));
  printf("5! = %i\n", factorial(5));

  return 0;
}

/* define your function here (don't forget to declare it) */