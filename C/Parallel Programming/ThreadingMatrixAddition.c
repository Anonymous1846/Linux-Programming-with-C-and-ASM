#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>  
#define MAX 4
  
pthread_t thread[2];
int mat_A[MAX][MAX]={{1,2,3,4},{23,4,5,67},{76,54,3,8},{7,33,4,5}}, mat_B[MAX][MAX]={{9,8,76,7},{23,4,5,67},{76,54,3,8},{7,33,4,5}}, sum[MAX][MAX];
// Addition of a Matrix
void* addition(void* arg)
{
  
    int i, j;
    int core = (int)arg;
  
    // Each thread computes 1/4th of matrix addition
    for (i =  MAX / 4; i < 3 * MAX / 4; i++) {
  
        for (j = 0; j < MAX; j++) {
  
            // Compute Sum Row wise
            sum[i][j] = mat_A[i][j] + mat_B[i][j];
        }
  
    }
  
}
  
int main()
{
  
    int i, j, step = 0;
	printf("My name is Sharath Sunil and roll is 56\n"); 
    for (i = 0; i < 2; i++) {
  
        pthread_create(&thread[i], NULL, &addition, (void*)step);
        step++;
    }
  
    for (i = 0; i < 2; i++) {
  
        pthread_join(thread[i], NULL);
    }
  
    printf("\n Sum of Matrix A and B:\n");
  
    for (i = 0; i < MAX; i++) {
  
        for (j = 0; j < MAX; j++) {
  
            printf("%d   ", sum[i][j]);
        }
  
        printf("\n");
    }
 
    return 0;
}
