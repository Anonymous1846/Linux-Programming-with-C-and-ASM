#include<stdio.h>
#include<omp.h>



int main(int argc,char **argv){
	printf("My name is Sharath Sunil and roll is 56\n");
	#pragma omp parallel
	{
		printf("Hello World !\n");
	}
}
