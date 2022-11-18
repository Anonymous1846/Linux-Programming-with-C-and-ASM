#include<stdio.h>
#include<limits.h>


int main(){
	//Integer Overflow demo 
	//the INT_MAX const represents the max value that can be stored in the int placeholder !
	unsigned int max_val = INT_MAX;
	int overflow = max_val+1;
	printf("Original value: %d\tOverflow value: %d\n\n",max_val,overflow);
	
	//Integer Underflow demo ;
	int underflow = 1000000*-10000;
	printf("Original value: 10^9\tUndeflow value: %d\n",underflow);
	return 0;	
}
