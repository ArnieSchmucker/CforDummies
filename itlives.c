#include <stdio.h>

int main()
{
	FILE *myfile;
	char c;
	myfile = fopen("alive.txt", "r");
	if (!myfile)
	{
		puts("alive.txt not found");
		return(1);
	}
	
	do
	{
		c = fgetc(myfile);
		putchar(c);
	}
	while (c != EOF);
	fclose(myfile);
	return(0);
}
