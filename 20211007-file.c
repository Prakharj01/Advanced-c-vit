#include<stdio.h>
int main()
{
    FILE *fptr;
    char cr[40];
    char str[20]="Hey there mate";
    fptr=fopen("somefile.txt", "w");
fprintf(fptr,"%s",str);
fclose(fptr);

fptr=fopen("somefile.txt","r");
fscanf(fptr,"%s",cr);

printf("%s\n",cr);
fclose(fptr);
 
char str2[30]="Hello there buddy this time";
char rea[40];
FILE *fptr2;
fptr2=fopen("somefile.txt", "w");
fputs(str2,fptr2);
//fgets(rea,9,fptr2);
fputs("Hey there buddy", fptr2);

fclose(fptr2);
//getch();

//printf("%s", rea);
FILE ftpr3;


    return 0;
}

/*
SYNTAX

FILE *fp;
fp=fopen(constant char *filename, const char *mode);
fclose(fp);  

           //fp is file pointer
EXAMPLE
FILE *fp;
fp=fopen("File.ext","w");
fclose(fp);
//file is a pointer which is returned. The file name can be the absolute path name or relative path name(if in the same folder just mentioned the name).

FILE MODES
r   read mode
w   write mode
a   append mode
r+  read and write 
a+        
w+  

It is not necessary that the file should be present. If the file is not present new file with the same name is created.

fprintf(FILE * stream, const char *str, arguments);
fscanff(FILE *stream, const char *format, ,argument);


fprintf(fptr, "%s", str);
//prints the string str in fptr

fscanf(fptr, "%s", str);
//to read a file, reads from a file and stores it in str

M-2     
fprintf(fptr,"STRING TO BE INPUT");

//to read a single character 
int getc (FILE *fp)

//write a single character
int putc(char c, FILE *fp)


int fgetc(File *ptr);
reads a character one by one

int fgets(constant char ch*,int n, File *ptr);
reads n character from the file and stores it in ch variable.
it stops when either (n-1) characters are read, the newline character is read, or the end-of-file is reached, whichever comes first.



*/