#include<stdio.h>

int main(){
    FILE *ptr;
    ptr=fopen("second.dat","w");
    fprintf(ptr,"This is the fourth file program");
    fclose(ptr);
    char word[50];
    int count=0;
    ptr=fopen("second.dat","r");
     while (fscanf(ptr, "%s", word) != EOF)
        {
            count++;
            if (count!=4){
                printf("%s\n",word);
            }
        }
        fclose(ptr);
    
    
    return 0;
}


// Write a program to create, print "This is the fourth file program" into the file, read the first three strings skip the next string the read the fifth and sixth string. (Use fseek())
// Note: Name the file as file1.dat and the program as file.c