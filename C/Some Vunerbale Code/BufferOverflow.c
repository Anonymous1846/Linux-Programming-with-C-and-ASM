#include<stdio.h>
#include<string.h>
#include<stdlib.h>


//the below function accepts a string param and copies that value to a buffer and prints it if the args are provided correctly !
void vunerableFunc(char *buffer){
	char array[50];
	//this is where the issue occurs 
	strcpy(array,buffer);
	printf("%s copying done !\n",array);
}

int main(int argc,char **argv){
	if(argc!=2){
		printf("Not enough args !\nUsage %s <args>\n",argv[0]);
		exit(-1);
	}
	vunerableFunc(argv[1]);
	exit(0);
}

