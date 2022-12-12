#include<stdio.h>
#include<stdlib.h>
struct threenum{
    int n1,n2,n3;

};
int main()
{
    struct threenum num;
    int n;
    FILE *ptr;
    ptr= fopen("program.bin","wb");
    if (ptr==NULL){
        printf("Error 404 not found");
        exit(1);
    }
    for(n=0;n<5;n++){
        num.n1=n;
        num.n2=num.n1*5;
        num.n3=num.n2+1;
        fwrite(&num,sizeof(struct threenum),1,ptr);
    }
    fclose(ptr);

   FILE *fptr;
     if ((fptr = fopen("program.bin","rb")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }

   for(n = 0; n < 5; ++n)
   {
      fread(&num, sizeof(struct threenum), 1, fptr); 
      //printf("n1: %d\tn2: %d\tn3: %d\n", num.n1, num.n2, num.n3);
      printf(" %d\t %d\t %d\n", num.n1, num.n2, num.n3);
   }
   fclose(fptr); 

    return 0;

}

/*
fwrite(addressData, sizeData, numbersData, pointerToFile);

fseek(FILE * stream, long int offset, int whence);

*/