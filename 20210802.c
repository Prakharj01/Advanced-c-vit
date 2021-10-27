#include<stdio.h>
int main()
{
    int a[10], i=0,*p;
    printf("%d\n", &a[i]);
printf("Normal\n");
    for(i=0; i<10;i++){
        printf("%d\n", &a[i]);
    }
    p=(int *)malloc(10*sizeof(int));
printf("\n\nDynamic\n");
for(i=0;i<10;i++){
    printf("%d\n", p+i);
}
    return 0;
}