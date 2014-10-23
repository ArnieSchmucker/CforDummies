

#include <stdio.h>

int main()
{
	int teeny;
	int *t;

	/*initialize variables */
	teeny = 1;
	t = &teeny;
	
	/*use and abuse variables */
	printf("teeny = %d\n",teeny);
	printf("t = %p\n", t);
	printf("*t = %d\n", *t);
	teeny = 64;
	printf("teeny = %d\n", teeny);
	printf("t = %p\n", t);
	printf("*t = %d\n", *t);
	return(0);
}
