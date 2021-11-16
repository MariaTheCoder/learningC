/*
We previously learned that a pointer to a given type can store the adress of anyvariable of that particular data type. 
In the section called 'Pointers', we tried this out with a variable. 

Pointers can also be used with arrays, but then we see a change in the notation. 

In an example where a pointer variable pc stores the address of the character variable c: 
char c = 'A'; 
char *pc = &c; 


*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i, j;
  int nrows = 7;
  int ncols = 7;

  /* TODO: complete the following line to allocate memory for holding 7 rows */
  int **pnumbers = (int **)malloc(nrows * sizeof(int *));

  /* TODO: allocate memory for storing the individual elements in a row */
  pnumbers[0] = (int *)malloc(ncols * sizeof(int));
  pnumbers[1] = (int *)malloc(ncols * sizeof(int));
  pnumbers[2] = (int *)malloc(ncols * sizeof(int));
  pnumbers[3] = (int *)malloc(ncols * sizeof(int));
  pnumbers[4] = (int *)malloc(ncols * sizeof(int));
  pnumbers[5] = (int *)malloc(ncols * sizeof(int));
  pnumbers[6] = (int *)malloc(ncols * sizeof(int));

  pnumbers[0][0] = 1;
  pnumbers[1][0] = 1;
  pnumbers[1][1] = 1;
  pnumbers[2][0] = 1;
  pnumbers[2][1] = 2;
  pnumbers[2][2] = 1;
  pnumbers[3][0] = 1;
  pnumbers[3][1] = 3;
  pnumbers[3][2] = 3;
  pnumbers[3][3] = 1;
  pnumbers[4][0] = 1;
  pnumbers[4][1] = 4;
  pnumbers[4][2] = 6;
  pnumbers[4][3] = 4;
  pnumbers[4][4] = 1;
  pnumbers[5][0] = 1;
  pnumbers[5][1] = 5;
  pnumbers[5][2] = 10;
  pnumbers[5][3] = 10;
  pnumbers[5][4] = 5;
  pnumbers[5][5] = 1;
  pnumbers[6][0] = 1;
  pnumbers[6][1] = 6;
  pnumbers[6][2] = 15;
  pnumbers[6][3] = 20;
  pnumbers[6][4] = 15;
  pnumbers[6][5] = 6;
  pnumbers[6][6] = 1;

  for (i = 0; i < 7; i++)
  {
    for (j = 0; j <= i; j++)
    {
      printf("%d ", pnumbers[i][j]);
    }
    printf("\n");
  }

  for (i = 0; i < 7; i++)
  {
    /* TODO: free memory allocated for each row */
    free(pnumbers[i]);
  }

  /* TODO: free the top-level pointer */
  free(pnumbers);

  return 0;
}