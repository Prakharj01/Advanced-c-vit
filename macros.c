#include <stdio.h>
#define message(a,b)  printf(#a " and " #b "\n");

#define tokenpaster(n) printf("token"#n "= %d ",token##n);
int main() {
	//predefined macros
   printf("File :%s\n", __FILE__ );
   printf("Date :%s\n", __DATE__ );
   printf("Time :%s\n", __TIME__ );
   printf("Line :%d\n", __LINE__ );
   printf("ANSI :%d\n", __STDC__ );

	message(ramesh,suresh);
	message(bread, butter);
	int token34=42;
	tokenpaster(34);

}