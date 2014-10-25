#include <stdio.h>

int main()
{
	FILE *myfile;
	myfile = fopen("alive.txt", "w");
	if (!myfile)
	{
		puts("Some kind of file error!");
		return(1);
	}
	fprintf(myfile, "I create a file.  It's alive!\n");
	fclose(myfile);
	return(0);
}
