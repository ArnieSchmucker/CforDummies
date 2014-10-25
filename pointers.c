#include <stdio.h>

int main()
{
	int *p;
	int val;
	val = 5;
	*p = val;
	printf("*p = %d\n", *p);
	printf("val = %d\n", val);
	printf("&p = %p\n", &p);
	printf("&val = %p\n", &val);
	return(0);
}

