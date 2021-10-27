#include<stdio.h>  
#include<conio.h>  
void main(){  
FILE *fp;  

  
fp=fopen("myfile2.txt","w");  
fputs("hello c programming",fp);  
  
fclose(fp);  
 
char text[300];  

  
fp=fopen("myfile2.txt","r");  
printf("%s",fgets(text,200,fp));  
  
fclose(fp);  
}  