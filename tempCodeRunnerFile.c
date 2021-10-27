#include<stdio.h>
int main()
{
    FILE *fptr;
    char cr[40];
fptr=fopen("somefile.txt", "w");
fprintf(fptr,"SOME TEXT TO BE PRINTED");
fclose(fptr);

fptr=fopen("somefile.txt","r");
fscanf(fptr,"%[^\n]s",cr);

printf("%s",cr);
fclose(fptr);
 
 
 
    return 0;
}