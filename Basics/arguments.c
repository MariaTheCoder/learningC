#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
  int i;
  printf("%c", *(argv[0] + 99));
  for (i = 1; i < argc; i++)
  {
    if (strncmp(argv[i], "test.exe", 100) == 0)
      printf("found it in position %d!", i);
  }
  return 0;
}
