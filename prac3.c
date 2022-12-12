#include<stdio.h>
#include<stdlib.h>
struct employee{
  char name[30];
  int empid;
  char streetname[100];
  int choice;
  union address{
  char pincode[20];
  char locality[100];

}add;
};
  
int main(){
    int choice,num;
    char temp[30];
    char c;
    FILE *onel;
    FILE *onep;
    //printf("Enter your choice: ");
    scanf("%d",&choice);
    //printf("Enter number of employees: ");
    scanf("%d",&num);
    
struct employee *emp;
emp=(struct employee *)malloc(sizeof(struct employee));
    if(choice>0 && choice <6){
        onel=fopen("file1.txt","a+");
    for(int i=0;i<num;i++){
        scanf("%s",emp[i].name);
        scanf("%d",&emp[i].empid);
        scanf("%s",emp[i].streetname);
        scanf("%s",emp[i].add.locality);
        fprintf(onep,"emp name: %s\nempid: %d, emp streetname: %s,emp locality: %s",emp[i].name,emp[i].empid,emp[i].streetname,emp[i].add.locality);
        
    }
    
        fclose(onel);
    onel=fopen("file1.txt","r");

    c=fgetc(onel);
    while(c!=EOF){
        //printf("%c",c);
        c=fgetc(onel);
    }
        for(int i=0;i<num;i++){
            printf("%s\n",emp[i].add.locality);
        }
    }
    if (choice>5 && choice <10){
           onep=fopen("file2.txt","a+");
    for(int i=0;i<num;i++){
        scanf("%s",emp[i].name);
        scanf("%d",&emp[i].empid);
        scanf("%s",emp[i].streetname);
        scanf("%s",emp[i].add.locality);
        fprintf(onep,"emp name: %s\nempid: %d, emp streetname: %s,emp locality: %s",emp[i].name,emp[i].empid,emp[i].streetname,emp[i].add.locality);
        
        
    }
        fclose(onep);
        onep=fopen("file2.txt","r");
    
    c=fgetc(onep);
    while(c!=EOF){
       // printf("%c",c);
        c=fgetc(onep);
    }
    fclose(onep);
            for(int i=0;i<num;i++){
            printf("%s\n",emp[i].add.pincode);
        }
    }
    
    
    
    return 0;
    
}