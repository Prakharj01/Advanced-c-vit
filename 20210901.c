#include<stdio.h>
int main()
{
    int *p;
    int j=4;

p=(int*)malloc(4*sizeof(int));

    for(int i=0;i<8;i++){
        *(p+i)=i;
    }
    for(int i=0;i<8;i++){
printf("%d\n",*(p+i));
    }
    return 0;
}