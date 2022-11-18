#include<stdio.h>
#include<string.h>


int main(int argc,char **argv){
	int secret_num =56;
	printf("Format string vunerablity !\n");
	char array[64];
	//for securely copying the data from args to buffer !
	strncpy(array,argv[1],64);
	//here we have'nt used any format specifiers so the user commands will interpreteed as special args!
	printf(array);
	printf("\n");
	return 0;
}
