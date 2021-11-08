
/* 
As a general rule, variables are local to the scope in which they are defined. 
In the following example, the scope of the variable runner is limited and by the time the main function
uses the variable, the variable is already removed from the memory of the program. 
Hence why the variable runner is not increased from 1 to 2.
*/

// #include <stdio.h>

// int runner()
// {
//   int count = 0;
//   count++;
//   return count;
// }

// int main()
// {
//   printf("%d ", runner());
//   printf("%d ", runner());
//   return 0;
// }

/*
However, if we instead use a static variable, we increase the scope of the variable.
A static variable can be used in the entire file in which the variable is defined.
*/

// #include <stdio.h>

// int runner()
// {
//   static int count = 0;
//   count++;
//   return count;
// }

// int main()
// {
//   printf("%d ", runner());
//   printf("%d ", runner());
//   return 0;
// }

/*
In C, functions are global by default. When a function is declared static, the schope of that function is reduced
to the file containing it. The syntax is as follows:
*/

// static void fun(void)
// {
//   printf("I am a static function.");
// }

// E X E R C I S E

#include <stdio.h>
int sum(int num)
{
  static int sum = 0;
  sum += num;
  return sum;
}

int main()
{
  printf("%d\n", sum(55));
  printf("%d\n", sum(45));
  printf("%d\n", sum(50));
  return 0;
}