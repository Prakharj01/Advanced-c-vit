#include<stdio.h>
void main(){


    float *f;
    float p=12.4;
    f= &p;
    printf("%f", *(++f));

}