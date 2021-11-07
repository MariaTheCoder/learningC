#include <stdio.h>
#include <string.h>

int main()
{
  /* define first_name */
  char *first_name = "John";
  /* define last_name */
  char last_name[4] = "Doe";
  char name[9];

  last_name[0] = 'B';
  sprintf(name, "%s %s", first_name, last_name);
  if (strncmp(name, "John Boe", 100) == 0)
  {
    printf("Done!\n");
  }
  name[0] = '\0';
  strncat(name, first_name, 5);
  strncat(name, " ", 1);
  strncat(name, last_name, 20);
  printf("%s\n", name);
  printf("%d\n", strlen(name));

  char dest[20] = "Hello";
  char src[20] = "World";
  strncat(dest, " ", 1);
  strncat(dest, src, 20);
  printf("%s\n", dest);
  printf("%d\n", strlen(dest));

  return 0;
}