#include<stdio.h>
  
enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun};
enum year{Jan, Feb, Mar, Apr, May, Jun, Jul, 
          Aug, Sep, Oct, Nov, Dec};
  
  enum day {sunday = 1, monday, tuesday = 5,
          wednesday, thursday = 10, friday, saturday};


int main()
{
    enum week day;
    day = Wed;
    printf("%d\n",day);
 
 
   int i;
   for (i=Jan; i<=Dec; i++)      
      printf("%d ", i);

    printf("\n%d %d %d %d %d %d %d", sunday, monday, tuesday,
            wednesday, thursday, friday, saturday);
    return 0;
} 