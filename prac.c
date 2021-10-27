#include <stdio.h>
#include <stdlib.h>
struct day{
char *ch;
float *f;
int length;
};
int main()
{
    struct day a[3];

    int n = 0;
int j=0;
for(int i=0;i<3;i++){
    a[i].ch = (char *)malloc(20 * sizeof(char));
     printf("Enter day %d: ",i+1);
     scanf("%s", a[i].ch);
    //printf("%s",a[i].ch);
    while((a[i].ch[j])!='\0')
    {
        j++;
    }
    n=j;
   // printf("n is: %d",n);
        if (a[i].ch[j] == '\0')
        {
            n = j;
            a[i].ch = (char *)realloc(a[i].ch, n * sizeof(char));
        }
        a[i].length=n;
        //printf("Length is %d",a[i].length);
    a[i].f=(float *)malloc(n*sizeof(float));

    for(int k=0;k<n;k++){
        scanf("%f",&(a[i].f[k]));
 }   }

for(int i=0;i<3;i++){
    printf("User %d\n",i+1);
    for(j=0;j<a[i].length;j++){
        printf("%f\n",a[i].f[j]);
    }
}
    return 0;
}