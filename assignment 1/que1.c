#include<stdio.h>
int main()
{
    double n,sum,x=1;
    sum=1;
    printf("Enter n: ");
    scanf("%lf",&n);
    for(int i=0;i<n;i++){
    sum+=(i*x);
    }
    printf("%lf\n",sum);
    double sum2=1;
    for(int i=0;i<n;i++){
        sum2+=((i/(i+1))*x);
    }
    printf("%lf",sum2);

    return 0;
}