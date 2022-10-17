#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#define ARRAY_SIZE 10



int a[ARRAY_SIZE]={9,87,6,5,43,45,89,8,76,543};
int b[ARRAY_SIZE]={91,187,61,51,413,415,189,-9,176,43};
int sum[ARRAY_SIZE],diff[ARRAY_SIZE];

void *calSum(){
	int i=0;
	for(;i<ARRAY_SIZE;i++){
		sum[i]=(b[i]+a[i]);
	}
}

void *calDiff(){
	int i=0;
	for(;i<ARRAY_SIZE;i++){
		diff[i]=(b[i]-a[i]);
	}
}

void *findMax(){
	int i=1;
	int max_1=a[0],max_2=b[0];
	for(;i<ARRAY_SIZE;i++){
		if(max_1<a[i])
			max_1=a[i];
	}
	i=1;
	for(;i<ARRAY_SIZE;i++){
		if(max_2<b[i])
			max_2=b[i];
	}
	printf("The maximum value in first array is %d and maximum value in second array is %d\n",max_1,max_2);
}

int main(){
	pthread_t thread1,thread2,thread3;
	int i,iret1,iret2,iret3;
	iret1 = pthread_create(&thread1,NULL,calSum,NULL);
	iret2 = pthread_create(&thread2,NULL,calDiff,NULL);
	iret3 = pthread_create(&thread3,NULL,findMax,NULL);
	pthread_join(thread1,NULL);
	pthread_join(thread2,NULL);
	pthread_join(thread3,NULL);
	printf("The sum of elements are :\n");
	for(i=0;i<ARRAY_SIZE;i++){
		printf("%d\n",sum[i]);
	}
	printf("The difference of the elements are:\n");
	for(i=0;i<ARRAY_SIZE;i++){
		printf("%d\n",diff[i]);
	}
	printf("My name is Sharath Sunil and roll is 56\n");
	exit(0);
}
