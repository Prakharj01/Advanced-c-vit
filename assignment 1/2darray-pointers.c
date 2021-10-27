#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n],i;

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int arr2[5][5];

    int half=n/2;
    int temp=0;
    for(i=0;i<half;i++){
        if(temp%5==0){
            printf("\n");
        }
        
        printf("%d\t", *(arr+i));
        temp+=1;
    }
    int extra=25-temp;
    for(i=temp;i<extra; i++){
        if(temp%5==0){
            printf("\n");
        }
        printf("0\t");
        temp+=1;
        
    }
    for(i=half;i<n;i++){
        if(temp%5==0){
            printf("\n");
        }
        printf("%d\t",*(arr+i));
        temp+=1;
    }
    return 1;
}