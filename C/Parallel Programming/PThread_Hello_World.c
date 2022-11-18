#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>

//dyanmically getting the number of cores in the system !
#define CORES sysconf(_SC_NPROCESSORS_ONLN)

/***************************************************************************************************************************************************************
 The below prgm prints hello world on to console as many times as the number of cores in system. The number of cores in the system can be otained by macro specified 
 in the #define CORE directive dynamically without having to check the value and then hardcoding it. We create as many threads as the number of cores and thn join them 
 as the number of cores !
 ***************************************************************************************************************************************************************/

void *hello_world(){
	printf("Hello World !\n");
}


int main(int argc,char **argv){
	pthread_t threads[CORES];
	int iret[CORES];
	int i,j;
	printf("My name is Sharath Sunil and roll is 56\n");
	for(i=0;i<CORES;i++){
		iret[i] = pthread_create( &threads[i], NULL,hello_world,NULL);
	}

	for(j=0;j<CORES;j++){
     		pthread_join( threads[j], NULL); 
	}
     	exit(0);
}
