#include <stdio.h>

/*function prototype*/
int str_len(const char *str);

int main(int argc, char *argv[] )
{
		char str[100];

		printf("Enter a string: ");
		/*to get all characters except newline. if only
		%s is there string after space will not be
		considered*/
		scanf("%[^\n]s", str);

		/*length of string excluding null character*/
		printf("length of string is: %d\n", str_len(str) );

		return 0;
}

/*const shows that input string will not get modified*/
int str_len(const char *str)
{
		int i = 0;
		while( str[i] != '\0' )
				i++;

		return i;
}
