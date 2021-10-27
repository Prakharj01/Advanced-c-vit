#include <stdio.h>

int divisible(int[], int);

int divisible(int arr[], int t)
{
    int max = 0;
    for (int i = 0; i < t; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    int a[4];
    int l[4] = {0, 0, 0, 0};
    int t = 0, max=-5;
    for (int i = 0; i < 4; i++)
    {
        scanf("%d \n", &a[i]);
    }

for(int i=0;i<4;i++){
        if (a[i] % 2 == 0 && a[i] % 3 == 0 && a[i] % 5 == 0)
        {
            l[t] = a[i];
            t++;
        }
    }

    if (t >= 1)
    {
        max = divisible(l, t);
    }
    else{
        max=l[0];
    }
    printf("%d\n", max);
    return 0;
}