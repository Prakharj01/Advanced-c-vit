#include<stdio.h>


int main()
{
    FILE *fp;
    char ch;
    fp=fopen("somefile.txt","r");

    do{
         ch=getc(fp);
        putc(ch,stdout);
        printf(" ");
        //OR
        // printf("%c",ch);

    }while(ch!=EOF);

    fclose(fp);
    return 0;
}

/*
get c returns EOF when it reaches end of file.

to print something to the screen
putc(ch,stdout);
stdout is file pointer to screen
*/