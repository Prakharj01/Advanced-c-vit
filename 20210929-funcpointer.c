#include<stdio.h>
void funct(int);
void funct1(int);

int mul(int a,int b);
int div(int a,int b);
int add(int a,int b);
int sub(int a,int b);

int main()
{
    void (*funptr[2])(int)={funct,funct1};

    for(int i=0;i<2;i++){
        funptr[i](10);
    }

    int (*oper[4])(int,int)={mul,div,add,sub};

    for(int i=0;i<4;i++){
        printf("\nOperation %d: %d",i+1,oper[i](50,5));
    }
    return 0;
}

void funct(int i){

    printf("Function 1: %d",i);
  }

void funct1(int i){

    printf("\nFunction 2: %d",i+1);
}

int mul(int a,int b){
    return a*b;
}
int div(int a,int b){
    return a/b;
}
int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}