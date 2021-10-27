#include<stdio.h>
#include<stdlib.h>
struct person{
  char name[30];
  int vaccination;
  int *vaccine;
};

int main(){
    struct person a[4];

    for(int i=0;i<4;i++){
        printf("Enter name of %d person: ",i+1);
        scanf("%s",a[i].name);
        printf("Is your Vaccination done? 1 for Yes. 0 for no: ");
        scanf("%d",&(a[i].vaccination));
        
        if(a[i].vaccination){
        a[i].vaccine=(int *)malloc(sizeof(int));
        printf("Enter reference number(5 digits): ");
        scanf("%d",a[i].vaccine);
        }
    }
    
    for(int i=0;i<4;i++){
        if(a[i].vaccination)
        {printf("%s\t%d\t%d\n",a[i].name,a[i].vaccination, *(a[i].vaccine));
    }
    else{
        printf("%s\t%d\t\n",a[i].name,a[i].vaccination);
    }
    }
    return 0;
}