
#import <stdio.h>

int main()
{
	char string[] = "Is it supposed to smell that way?";
	char *s;

	/*initialize variables*/
	s = string;
	
	while (*s != '\0')
	{
		putchar(*s);
		s++;
	}
	return(0);
}



