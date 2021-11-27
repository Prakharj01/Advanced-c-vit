#include<stdio.h>
#include<stdlib.h>


#define pi 3.14
#define square(r) r*r
#define circle(a) a*a*pi
#define mkhash(s) #s
#define MAX(i,j) ((i) > (j) ? i : j)



#define MACRO(num, str) {\
            printf("%d", num);\
            printf(" is");\
            printf(" %s number", str);\
            printf("\n");\
           }
  
#define MACRO(num, str) ({\
            printf("%d", num);\
            printf(" is");\
            printf(" %s number", str);\
            printf("\n");\
           })


int main()
{
    #ifdef pi
printf("This is inside ifdef of pi. pi is defined");

#else
printf("ifdef not defined");
#endif
    float var=pi;
    printf("\nValue of pi is %f",var);
    printf("The area of this square is %d",square(5));
    printf("\nThe area of this circle is %f ",circle(10));
    printf("\nMaximum of 5.5 and 7.4 is %.2f\n\n", MAX(5.5,74));

    printf("The date is %s\n", __DATE__);
    printf("The file is %s\n", __FILE__);
    printf("The time is %s\n", __TIME__);
    printf("The line number is %d\n", __LINE__);
    printf("The ANSI is %d\n", __STDC__);

printf("\n----------------\n");
printf(mkhash(this is using # operator));
    return 0;
}

/*
FOUR PHASES OF C FILE EXECUTION

1) Pre processing
    removal of comments
    expansion of macros
    expansion of include files

2) Compilation
    Generating assembly level instruction

3) Assembly
    .exe file is made. functions like printf are not resolved. assembly level instruction are converted to machine code

4) linking
    resolve function calls. links function implementation.

C PREPROCESSOR
begins with #
#define
defining a macro

#include
includes standard directories

#undef
undefining a macro

#ifdef
true if macro is defined

#ifndef
true if macro is undefined

#if
checks if any compile time condtition is true

#else
#elif

#include
fetches the other files in the same file
#include <directory.h>
#include abc.h
the angular brackets are put when we need to input from standard directory
without angular brackets the file is searched only in the current folder


#define
used to define preprocessor variables. the preprocessor directive can be used to globally replace a var with a number

#define pi 3.14
#ifdef pi
printf("Pi is defined")
#endif
prints the string when pi is defined

#undefdebug
undefines debug

#define square(x) x*x

__time__
__Date__
__file__


#define fun2(s) #s
printf(fun2(hello buddy));
        same as
printf("hello buddy");
this fun2 can be used with printf without the quotes


multiline macros
#define MACRO(num, str) {\
            printf("%d", num);\
            printf(" is");\
            printf(" %s number", str);\
            printf("\n");\
           }
                    OR
#define MACRO(num, str) ({\
            printf("%d", num);\
            printf(" is");\
            printf(" %s number", str);\
            printf("\n");\
           })
           

           
*/