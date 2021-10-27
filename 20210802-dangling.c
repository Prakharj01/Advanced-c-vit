#include<stdio.h>
int main()
{
    int *a[3];

    for(int i=0;i<3;i++){
        *a[i]=(int*)malloc(sizeof(int));
        scanf("%d",&a[i]);
    }

    for(int i=0;i<3;i++){
    printf("%d\n",*a[i]);
    }

    return 0;
}