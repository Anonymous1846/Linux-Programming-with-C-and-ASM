#include <omp.h>
 
#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char* argv[])
{
	int counter; 	
    #pragma omp parallel private(counter)
    {
        printf("Hello World from thread = %d\n",counter);		
    }
    	
	printf("My name is Sharath Sunil and my roll num is 56\n");
}
