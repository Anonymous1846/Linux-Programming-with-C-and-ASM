#include<stdio.h>
#include<string.h>


int main(int argc,char **argv){
	int secret_num =56;
	printf("Format string vunerablity !\n");
	char array[64];
	strncpy(array,argv[1],64);
	printf(array);
	printf("\n");
	return 0;
}
