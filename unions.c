#include <stdio.h>
#include <string.h>
union Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};

struct test {
    unsigned int x : 2;
    unsigned int y : 4;
    unsigned int z : 2;
};

int main()
{
    union Student s1;
    struct test one;

    strcpy(s1.name, "Harry");
    s1.fav_char = 'u';
    s1.marks = 45;
    s1.id = 1;

    printf("The id is %d \n", s1.id);
    printf("The marks is %d \n", s1.marks);
    printf("The fav_char is %c \n", s1.fav_char);
    printf("The name is %s \n", s1.name);
    
    printf("---------\n");

one.x=22;
printf("The value of x is: %d\n",one.x);
one.y=8;
printf("The value of y is: %d\n ",one.y);
    
    return 0;
}


/*
suppose we want any one the id or name variable for a employee but we arent sure now which one to use, unions help us in storing in shared memory locations


*/