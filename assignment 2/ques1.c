#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;

    scanf("%d",&n);
    char *a[n];
    int size[n];
    for(int i=0;i<n;i++){
        printf("Enter size of %d:",i+1,"name");
        scanf("%d",&size[i]);    

    }
    for(int i=0;i<n;i++){
        printf("Enter name %d: ",i+1);
        a[i]=(char *)malloc((size[n])*sizeof(char));
        scanf("%s",a[i]);   
    }

    for(int i=0;i<n;i++){
        printf("%s\n",a[i]);   
    }
    return 0;
}