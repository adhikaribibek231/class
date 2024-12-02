#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define max 200
float x[max] ,y[max];
void create_randomX(int r,int N){
    int i;
    for (i=0;i<N;i++){
        x[i]=(float)rand()/(float)(RAND_MAX/r);
    }
}
void create_randomY(int r,int N){
    int i;
    for(i=0;i<N;i++){
        y[i]=(float)rand()/(float)(RAND_MAX/r);
    }
}
float distance(float a, float b){
    return (sqrt(a*a+b*b));
}
int main(){
    int i, N,r,n=0;
    float Pi,error;
    printf("Enter the radius: ");
    scanf("%d",&r);
    printf("Enter the total no of itr: ");
    scanf("%d",&N);
    create_randomX(r,N);
    create_randomY(r,N);
    for ( i = 0; i < N; i++)
    {
        if(distance(x[i],y[i])<=r)
            n++;
    }
    Pi=4*(float)n/N;
    error=((22/7.0)-Pi)/(22/7.0);
    printf("Value of PI= %f",Pi);
    printf("\nError = %0.2f ", fabs(error*100));
    puts("%");
    return 0;
}