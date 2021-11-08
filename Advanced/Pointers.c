/*
W H A T   I S   A   P O I N T E R   ?

A pointer is a simple integer variable which holds a memory address that points to a value, instead of holding the actual value itself.
Pointers point to a specific part of the memory and are used to access that memory.


S T R I N G S   A S   P O I N T E R S   

When strings are used as pointers, the variable string can be accessed just like how values in an array are accessed with square brackets.
The notation is as follows: 

char * name = "John"; 

The line does three things: 
- Allocates a local (stack) variable called name, which is a pointer to a single character
- Causes the string "John" to appear somewhere in the program memory (after it is compiled and executed, of course) 
- Initializes the name argument to point to where the J character resides at (which is followed by the rest of the string in the memory)


D E F E F E R E N C I N G

Dereferencing is the act of referring to where the pointer points, instead of the memory address. 
For this, one uses squared bracket notation, like [0], just like with arrays. 

Since arrays are actually pointers, accessing the first item is of the array is the same as dereferencing a pointer. 
Dereferencing a pointer is done using the asterisk operator *. 
The & operator is used when we want to point to a variable v. 

*/

#include <stdio.h>
#include <string.h>

// int main()
// {
//   int n = 10;
//   int *pointer_to_n = &n;

//   /* your code goes here */
//   *pointer_to_n += 1;

//   /* testing code */
//   if (pointer_to_n != &n)
//     return 1;
//   if (*pointer_to_n != 11)
//     return 1;

//   printf("Done!\n");
//   return 0;
// }

int main()
{
  char greeting[6] = "Hello";
  char *more_greetings = greeting;

  printf("The variable greeting is %c\n", greeting[2]);
  printf("The variable more_greetings is %s\n", more_greetings);
  return 0;
}