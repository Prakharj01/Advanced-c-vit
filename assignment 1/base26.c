#include<stdio.h>
#include<math.h>
int main(){
    
    int n;
    scanf("%d",&n);
    float index=n/26.0;
    printf("%f\n",index);
    int firstplace=(int)index;
    printf("%d\n",firstplace);
    char charone=(char)(97+firstplace);
    printf("%c",charone);

    int secondplace= n -(26*firstplace);
    printf("%d",secondplace);
    char secondchar=(char)(97+secondplace);
    printf("%c",secondchar);
    
    
    
    
    return 0;
}
