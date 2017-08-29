#include <stdio.h>

#define MAX_LENGTH 100

/*function prototype*/
char *str_cpy(char *dest, const char *src);

int main(int argc, char *argv[] )
{
	char src[MAX_LENGTH],dest[MAX_LENGTH], *ptr;

	printf("Enter a string: ");
	scanf("%[^\n]s",src);

	/*strcpy will return base address of destination string
		it takes source and destination as input*/
	ptr = str_cpy(dest,src);

	printf("%s\n", dest);
	printf("%s\n", ptr);

	return 0;
}

char *str_cpy(char *dest, const char *src)
{
	int i = 0;
	while( src[i] != '\0' )
	{
			dest[i] = src[i];
			i++;
	}

	return dest;
}
