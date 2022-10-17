#include <pthread.h>
#include <sched.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX 3
#define CORE 4

pthread_t thread[CORE * 2];
int a[MAX][MAX]={{1,3,2},{4,56,7},{90,9,11}}, b[MAX][MAX]={{1,3,2},{4,56,7},{90,9,11}}, sum[MAX][MAX];

void* add(void* arg)
{
  
    int i, j;
    int core = (int)arg;
  
    for (i = core * MAX / 4; i < (core + 1) * MAX / 4; i++) {
  
        for (j = 0; j < MAX; j++) {
  
            sum[i][j] = a[i][j] + b[i][j];
        }
  
    }
  
}
  
 
// Driver Code
int main()
{
  	int i,j,step;
     printf("My name is Sharath Sunil and roll is 56\n");
    for (i = 0; i < CORE; i++) {
  
        pthread_create(&thread[i], NULL, &add, (void*)step);
        step++;
    }
  
    // Waiting for join threads after compute
    for (i = 0; i < CORE * 2; i++) {
  
        pthread_join(thread[i], NULL);
    }
  
    // Display Addition of mat_A and mat_B
    printf("\n Sum of Matrix A and B:\n");
  
    for (i = 0; i < MAX; i++) {
  
        for (j = 0; j < MAX; j++) {
  
            printf("%d   ", sum[i][j]);
        }
  
        printf("\n");
    }
 
    return 0;
}
