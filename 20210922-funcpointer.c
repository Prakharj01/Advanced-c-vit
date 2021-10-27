#include<stdio.h>
int sum(int a,int b){
    
    a=a+a;
    b=b+b;
    return a+b;
}

int main()
{
    printf("The sum of 2 and 3 is %d\n", sum(2,3));
    int (*funptr)(int,int);
    funptr=&sum;
    int d= (*funptr)(4,6);
    printf("The sum of 4 and 6 is %d",d);
    return 0;
}