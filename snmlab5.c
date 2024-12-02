#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define max 200
float x[max],y[max];
float f(float x){
    return(x*x*x-5*x);
}
float find_c(int a,int b){
    float c,dx=1;
    c=f(a);
    a=a+dx;
    do{
        if(f(a)<c)
            c=f(a);
        a=a+dx;
    }while(a<=b);
    return c;
}
void create_randomX(int a,int b,int N){
    int i;
    for(i=0;i<N;i++){
        x[i]=(((float)rand()/(float)(RAND_MAX/b)))+a;
        printf("%0.3f\t",x[i]);
    }
}
void create_randomY(int c,int N){
    int i;
    for(i=0;i<N;i++){
        y[i]=(float)rand()/(float)(RAND_MAX/c);
        printf("%0.3f\t",y[i]);
    }
}
int main(){
    int i,N,n=0;
    float I,a,b,c;
    printf("Enter lower bound and upper bound: ");
    scanf("%f%f",&a,&b);
    c=find_c((int)a,(int)b);
    printf("max (fx)C=%f",c);
    printf("Enter total no of itr: ");
    scanf("%d",&N);
    create_randomX((int)a,(int)b,N);
    printf("\n\n");
    create_randomY((int)c,N);
    for(i=0;i<N;i++){
        if(f(x[i])<=y[i])
            n++;
    }
    printf("\n\nn=%d,n");
    I=(float)n*(b-a)*c/N;
    printf("\nI=%f",I);
    return 0;
}