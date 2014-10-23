
#include <stdio.h>
int main()
{
	char c;
	short int i;
	long x;
	float f;
	double d;
	char temp[8];

	puts("Variable sizes:");
	printf("Character variable c = %lu location %p\n", sizeof(c), &c);
	printf("Short Integer variable i = %lu location %p\n", sizeof(i), &i);
	printf("Long Integer variable x = %lu location %p\n", sizeof(x), &x);
	printf("Float variable f = %lu location %p\n", sizeof(f), &f);
	printf("Double variable d = %lu location %p\n", sizeof(d), &d);
	printf("Array temp[8] = %lu location %p\n", sizeof(temp), temp);
	return(0);
}
