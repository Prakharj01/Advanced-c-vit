#include<stdio.h>
int main()
{
    
    int g=125;
    float h=9.3426789;
    char a[50]="Just checking the output of the statement";
    printf("%d--%5d--%05d",g,g,g);
    printf("\n%f--%.2f",h,h);
    printf("\n--%50s--\n--%-50s--\n",a,a);
    int m;
    int n;


    m=printf("%d",g);
    printf("\nThe number of characters in g(125) is :%d",m);
    n=printf("%f",h);
    printf("\nThe number of characters in h is :%d",n);

    printf("\nRounding off");
    
    return 0;
}

/*
#include<math.h>
ceil()
floor()
sqrt()
log10(100)
log(10)
exp(2)=e power(2)



*/