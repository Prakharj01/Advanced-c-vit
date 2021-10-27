#include<stdio.h>
#include<stdlib.h>
int main()
{
    char fname[10], lname[10];
    char *mname=NULL;
    int n;
    printf("Enter the firstname: ");
    scanf("%s",fname);
    printf("Do you have a middle name: ");
    scanf("%d",&n);
    if(n==1){
        mname=(char *)malloc(sizeof(char));
        scanf("%s",mname);
    }
    printf("Enter the lastname: ");
    scanf("%s",lname);

    if(n==1){
    printf("%s %s %s",fname, mname, lname);
    }
    else{
        printf("%s %s",fname, lname);
    }
    return 0;
}