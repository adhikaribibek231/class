#include <stdio.h>
#include <stdlib.h>
float a=800,b=1.5,c=-600,d=1.3,dp=8,pd0=12,ps0=10;
float cal_Q(float p){
    return (a-b*p);
}
float cal_S(float p){
    return (c+d*p);
}
int main(){
    int i;
    float q,s,p;
    FILE *f;
    f=fopen("D://comodity.txt","w");
    if(f==NULL){
        printf("File cannot be opened!!!");
        exit(1);
    }
    fprintf(f,"itr \tP \tQ\n");
    p=pd0;
    for(i=1;i<=100;i++){
        q=cal_Q(p);
        fprintf(f,"%d\t%.1f\t%.1f\n",i,p,q);
        p=p+dp;
    }
    fprintf(f,"itr\tP\tS\n");
    p=ps0;
    for(i=1;i<=100;i++){
        s=cal_S(p);
        fprintf(f,"%d\t%.1f\t%.1f\n",i,p,s);
        p=p+dp;
    }
    fclose(f);
    printf("Price at Equilibrium= %.2f",(a-c)/(b+d));
    return 0;
}