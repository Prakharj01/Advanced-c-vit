#include<stdio.h>
int div(int a,int b);
int mul(int a,int b);
int callf(int (*funpi[2])(int,int));
int mult(int a,int b){

    return a*b;
}
int div(int a,int b){

    return a/b;
}
int callf(int (*funpi[2])(int,int)){
    printf("Multiply: %d\n",funpi[0](6,2));
    printf("Division: %d",funpi[1](6,2));
}

int main()
{
    int i;
   int (*funptr[2])(int,int)={mult,div};

   callf(funptr);
    return 0;
}