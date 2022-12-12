#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fpt;
    FILE *fptr;
char str[20];
fpt=fopen("somefile.txt","w");
fprintf(fpt,"SOME TEXT TO BE PRINTED FOR DA");
fclose(fpt);

fptr=fopen("somefile.txt","r");
fscanf(fptr,"%[^\n]s",str);
fclose(fptr);
printf("%s",str);

return 0;
}