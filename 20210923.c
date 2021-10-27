#include<stdio.h>
struct st2{
int a2;
float b2;
};

struct st1{
    int a1;
    float b1;
    struct st2 var2;
    struct st2 *ptr;
};

int main()
{
    typedef struct st1 pio;
    pio q1, *ptr1;
    ptr1=&q1;
    ptr1->ptr=&(q1.var2);

    q1.var2.a2=100;
    printf("%d",ptr1->ptr->a2);

    return 0;
}