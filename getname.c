#include <stdio.h>

int main()
{
	char name[64];
	char *n;
	printf("Enter your name: ");
	gets(name);
	n = name;
	while(putchar(*n++));
	putchar('\n');
	return(0);
}
