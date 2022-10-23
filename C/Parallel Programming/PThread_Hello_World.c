#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>

//dyanmically getting the number of cores in the system !
#define CORES sysconf(_SC_NPROCESSORS_ONLN)

void *hello_world(void){
	printf("hello World !\n");
}


int main(int argc,char **argv){
	//creating an array of threads which is equal to the number of cores in the system !
	pthread_t threads[CORES];
	int iret[CORES];
	int i,j;
	printf("My name is Sharath Sunil and roll is 56\n");
	for(i=0;i<CORES;i++){
		iret[i] = pthread_create( &threads[i], NULL, hello_world,NULL);
	}

	for(j=0;j<CORES;j++){
     		pthread_join( threads[j], NULL); 
	}
     	exit(0);
}
