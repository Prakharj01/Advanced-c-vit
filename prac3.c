#include<stdio.h>
#include<string.h>

int multi (int a,int b){
    return a*b; 

}
int divi (int a,int b){
    return a/b;   
}
int addit(int a,int b){
    return a+b;   
}
int modul (int a,int b){
    return a%b;   
}
int main(){
    int (*funcptr[4])(int,int)={multi,addit,modul,divi};
    int value,a,b;
    char fchar[20];
    printf("Enter operation: ");
    scanf("%s",fchar);
    if(strcmp(fchar,"multi")==0){
         value=0;
    }
    if(strcmp(fchar,"addit")==0){
        value=1;
    }
    if(strcmp(fchar,"modul")==0){
        value=2;
    }
    if(strcmp(fchar,"div")==0){
        value=3;
    }
    printf("Enter values for a and b: ");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("Answer: ");
    int result=funcptr[value](a,b);
    printf("%d",result);
    return 0;
}