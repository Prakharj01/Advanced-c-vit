#include<stdio.h>
int main(int argc, char *argv[])
{
    int i,c;
    printf("%d",argc);
    c=(int) *argv[1];
    for(i=0;i<argc;i++){
        printf("%d--%s\n",i+1, argv[i]);
    }

    return 0;
}