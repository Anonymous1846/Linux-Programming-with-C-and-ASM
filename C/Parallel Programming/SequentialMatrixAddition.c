#include <stdio.h>
#define SIZE 5
int main() {
  int  a[SIZE][SIZE]={{1,2,3,4,5},{3,6,9,8,90},{4,5,6,7,8},{98,7,6,5,4},{12,34,5,6,78}}, b[SIZE][SIZE]={{1,2,3,4,5},{3,6,9,8,90},{4,5,6,7,8},{98,7,6,5,4},{12,34,5,6,78}}, sum[SIZE][SIZE], i, j;	
  // adding two matSIZEices
  for (i = 0; i < SIZE; ++i)
    for (j = 0; j < SIZE; ++j) {
      sum[i][j] = a[i][j] + b[i][j];
    }

  printf("\nSum of two matrices: \n");
  for (i = 0; i < SIZE; ++i)
    for (j = 0; j < SIZE; ++j) {
      printf("%d   ", sum[i][j]);
      if (j == SIZE - 1) {
        printf("\n\n");
      }
    }
  printf("My name is Sharath Sunil and roll is 56\n");
  return 0;
}

