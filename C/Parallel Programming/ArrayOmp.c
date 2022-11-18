#include<omp.h>
#include<stdio.h>
#define N 10

int main(){
    int i,j;
    float a[N],b[N],c[N];
    for(i=0;i<N;i++){
        a[i]=i*2.0;
        b[i]=i*3.0;
    }
    #pragma omp parallel
    {
        #pragma omp for
        for(i=0;i<N;i++){
            c[i]=a[i]+b[i];
            printf("%dth element is %f\n",c[i]);
        }
    }
    return 0;
}