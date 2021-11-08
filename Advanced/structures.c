/*
S T R U C T U R E S 

- Serialization of data
- Passing multiple arguments in and out of functions through a single argument
- Data structures such as linked lists, binary trees, and more

P o i n t s 
 struct point {
   int x;
   int y;
 }

Use a function to draw a line between two points, WITHOUT using structs

int x = 10; 
int y = 5; 
draw(x, y);

Use a function to draw a line between two points, USING structs (use dot notation)

struct point p;
p.x = 10;
p.y = 5;
draw(p); 


T y p e d e f s 

Typedefs allow us to define types with a different name. 
In the following example, we use this syntax to remove the struct keyword from each time we want to define a new person.
*/

#include <stdio.h>

/* define the person struct here using the typedef syntax */
typedef struct
{
  char *name;
  int age;
} person;

int main()
{
  person john;
  person laura;

  /* testing code */
  john.name = "John";
  john.age = 27;
  laura.name = "Laura";
  laura.age = 28;
  printf("%s is %d years old.\n", john.name, john.age);
  printf("%s is %d years old.\n", laura.name, laura.age);
}