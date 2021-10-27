#include<stdio.h>

void divisibility(int num, int *nu5, int *nu6){
if(num%5==0){
    *nu5=1;
}
if(num%6==0){
    *nu6=1;
}
if(num%30==0){
    *nu5=2,*nu6=2;
}
}

int main()
{
    int num=30;
    scanf("%d",&num);
    int div5, div6;
   
    
    divisibility(num,&div5,&div6);

    if (div5==1){
        printf("%d \t %d",num*6, div5);
    }    

    if (div6==1){
        printf("%d \t %d",num*5,div6);
    }    

    if (div5==2 && div6==2){
        printf("%d \t %d",num*10,30);
    }    
    return 1;
}