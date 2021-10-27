#include<stdio.h>

int divisibility(int arr[]){
    int max=0;
    for(int i=0;i<4;i++){
        if ((arr[i]%2==0 && arr[i]%3==0) || arr[i]%5==0){
            if(arr[i]>max){
                max=arr[i];
            }
    }

    }
    return max;
}
int main()
{
    int arr[4];

    for(int i=0;i<4;i++){
        scanf("%d",&arr[i]);
    }

    int max=divisibility(arr);
    printf("%d",max*10);
    return 0;
}