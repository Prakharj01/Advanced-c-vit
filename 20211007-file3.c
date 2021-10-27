#include<stdio.h>


int main()
{
    FILE *fp1, *fp2;
    char ch=' ';
    fp1=fopen("somefile.txt","r");

    fp2=fopen("dest.txt","w");
    while(ch!=EOF){
         ch=getc(fp1);
        putc(ch,fp2);
        
    }

    fclose(fp1);
    fclose(fp2);
    return 0;
}

/*
get c returns EOF when it reaches end of file.

to print something to the screen
putc(ch,stdout);
stdout is file pointer to screen
*/