#include<stdio.h>
int g=4;
static int v=69;
void func();
int main()
{
    int b;
    static r=28;
    g=5;
    v=58;
    printf("g(main) = %d\n",g);
    func();

        for(int i=0;i<4;i++){
            func();
            printf("\n");        }
    return 0;
}

void func(){
    int d=0;
    static int m=6;
    printf("g(func) = %d\t\t",g);
    printf("v(func) = %d\t\t",v);

    printf("%d--------%d",d++,v++);


    //printf("%d",r);
}

/*
changing the value in one function will change the value all over
static defined in a particular function cannot be accessed in other function




*/