#include<stdio.h>
#include<stdlib.h>
struct userinput {
    int element;
    int value;
};
void stringinput(int *stringi,int lstring){
    printf("Reference string\n");
    for(int i=0;i<lstring;i++){
        scanf("%d",&stringi[i]);
    }
}


void pagerankalgo(int *stringi,int lstring,struct userinput *frame,int lframe){
     int pagefault=lframe;
    int indexf=0;
    int minvalue=lstring+10;
    int temp;
    for(int j=0;j<lframe;j++){
        frame[j].element=stringi[j];
        frame[j].value=j;
    }
    for(int i=3;i<lstring;i++){
      temp=-1;
      
      for(int j=0;j<lframe;j++){
          if (stringi[i]==frame[j].element){
              temp=1;
          }
          

      }
      if(temp==-1){
          pagefault++;
indexf=0;
minvalue=lstring+10;
          for(int j=0;j<lframe;j++){
            if(minvalue>frame[j].value){
                minvalue=frame[j].value;
                indexf=j;
            }
          }
        
          frame[indexf].element=stringi[i];
          frame[indexf].value=i;
                }
      
    }
    printf("\nNumber of pagefaults: %d",pagefault);
}
int main(){
    struct userinput *frame;
    int *stringi;
    int lframe,lstring;
    printf("Size of frame: \n");
    scanf("%d",&lframe);
    printf("Length of the reference string: \n");
    scanf("%d",&lstring);
    stringi=(int *)calloc(lstring,sizeof(int));
    frame=(struct userinput *)calloc(lframe,sizeof(frame));
   stringinput(stringi,lstring);
    pagerankalgo(stringi,lstring,frame,lframe);
    
    return 0;
}
