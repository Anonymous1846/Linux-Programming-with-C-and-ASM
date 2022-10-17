#include<stdio.h>



int main(){
	//Integer Overflow demo 
	unsigned int max_val = 2147483647;
	int overflow = max_val+1;
	printf("Original value: %d\tOverflow value: %d\n\n",max_val,overflow);
	
	//Integer Underflow demo ;
	int underflow = 1000000*-10000;
	printf("Original value: 10^9\tUndeflow value: %d\n",underflow);
	return 0;	
}
