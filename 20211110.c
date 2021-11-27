#include<stdio.h>


int main(int c,char *argv[], char *argenv[])
{
    int i=0;
    while(argenv[i]!='\0'){
        printf("%s\n",argenv[i]);
        i++;
            }

    return 0;
}

/*
Environment variables


*/