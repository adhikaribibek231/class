#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define max 200;
float x[max] ,y[max];
void create_randomX(int r,int N){
    int i;
    for (i=0;i<N;i++){
        x[i]=(float)rand()/(float)(RAND_MAX/r);
    }
}