#include <stdio.h>

int main()
{
	short int array[] = {2,3,5,7,9};
	short int *pa;
	int x;
	
	for(x = 0; x < 5; x++)
	{
		pa = &array[x];
		printf("array[%d] at %p = %d\n", x, pa, array[x]);
	}
	pa = array;
	for (x = 0; x < 5; x++)
	{
		printf("array[%d] at %p\n", x, pa);
		pa++;
	}
	return(0);
}
