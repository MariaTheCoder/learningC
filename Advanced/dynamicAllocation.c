/*
D Y N A M I C   A L L O C A T I O N 

To allocate memory dynamically allows one to store data 
without knowing the size of the data in the time we wrote 
the program.

Dynamic allocation is a very important topic in C. 

To store data dynamically we need to have a pointer ready 
to store the location of the newly allocated memory.

We can then use the same pointer to access the memory that 
was allocated to us, and we use the pointer to free the memory again
once we are done using it. 

To allocate a structure, following syntax is used: 
person * myperson = (person *) malloc(sizeof(person));

This tells the compiler to dynamically allocate just enough to hold
a person struct in memory and then return a pointer of type person to
the newly allocated data. 

mallocation() is called the memory allocation function. 
The function returns a "void pointer" which is a pointer 
that does not have a type. By writing (person *) in front 
of the memory allocation function, changes the type returned from
malloc() to be person. 

However, C will implicitly convert the type of the returned pointer to 
that of the pointer it is assigned to, so this is not necessary to do. 

Note that sizeof is not a function, because the compiler interprets it 
and translates it to the actual memory size of the person struct.

To access the person's members, we can use the arrow notation: 
myperson -> name = "John";
myperson -> age = 27;

Once we are done using the dynamically allocated struct, we 
can releate it using free: 
free(myperson);

Free does not delete the myperson variable itself but only released the 
data that it points to. The variable will still point to somewhere in the 
memory. However, after calling myperson we are not allowed to access that 
area anymore. We must not use that pointer again until we allocate new data
using it.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
  int x;
  int y;
} point;

int main()
{
  point *mypoint = (point *)malloc(sizeof(point));

  /* Dynamically allocate a new point
     struct which mypoint points to here */

  mypoint->x = 10;
  mypoint->y = 5;
  printf("mypoint coordinates: %d, %d\n", mypoint->x, mypoint->y);

  free(mypoint);
  return 0;
}