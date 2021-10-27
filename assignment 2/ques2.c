#include<stdio.h>
#include<string.h>

int main(int argc,char const *argv[])
{
    printf("The value of argc  is %d\n ",argc);
int j;
    for(int i=0;i<argv;i++){
        printf("The string %d is %s \n", i,argv[i]);
        j=strlen(argv[i]);  
        printf("Its length is %d\n",j);
    }
    
    return 0;
}