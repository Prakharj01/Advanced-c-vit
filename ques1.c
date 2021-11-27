#include<stdio.h>
#include<stdlib.h>

union add{
        char locality[20];
        long pincode;
    };

struct employee{
    int empno;
    char name[20];
    int streetno;
    int choice;
    union add address;
};
void one(struct employee *details,int num){
    for(int i=0;i<num;i++){
        scanf("%d",&details[i].empno);
        scanf("%s",details[i].name);
        scanf("%s",details[i].streetno);
        
        if (details[i].choice==1){
        scanf("%d",&details[i].address.pincode);
        }
        if (details[i].choice==0)
        scanf("%s",details[i].address.locality);
        
    }
}
struct emppincode{
    int empno;
    char name[20];
    int streetno;
    int choice;
    long pincode;
    };
struct emplocality{
    int empno;
    char name[20];
    int streetno;
    char locality[20];
    
     
};
int num=20;
struct emplocality *par1;
struct emppincode *par2;
int countlocality=0;
int countpincode=0;
void two(struct employee *details,int num){
  
   
  
    
    for(int i=0;i<num;i++){
        if (details[i].choice==1){
        par1[countpincode].empno=details[i].empno;
        par1[countpincode].name=details[i].name;
        par1[countpincode].streetno=details[i].streetno;
        par1[countpincode].locality=details[i].address.locality;
       
        countpincode++;
        }
        if (details[i].choice==0){
         par2[countlocality].empno=details[i].empno;
        par2[countlocality].name=details[i].name;
        par2[countlocality].streetno=details[i].streetno;

         par2[countlocality].pincode=details[i].address.pincode;
        countlocality++;
        }
        
    }
    
}
void three(struct employee *details,int num){
    long min;
    int index;
    long pincode;
    for(int i=0;i<countpincode;i++ ){
        pincode=par2[i].pincode-500033;
        
        if(pincode<min){
            min=pincode;
            index=i;
        }
    }
    printf("The nearest pincode is: %ld",pincode);
    printf("The name of employee is: %s ",par2[index].name);
    
}
void four(struct employee *details,int num){
    
}
void five(struct employee *details,int num){
    for(int i=0;i<num;i++){
        
        
    }
}
int main(){
    int num;
    printf("Enter number of employees: " );
    scanf("%d",&num);
    typedef struct employee abcd;
    abcd details[num];
        void(*funcp[5])(struct employee *,int )={one,two,three,
        four,five};

        for(int i=0;i<num;i++){
            funcp[i](details,num);
        }
    return 0;
}