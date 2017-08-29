#include <stdio.h>
#include <stdio_ext.h>

#define MAX_LENGTH 100

char *str_cat(char *dest,const char *src);

int main(int argc, char *argv[] )
{
	char src[MAX_LENGTH], dest[MAX_LENGTH], *ptr;

	printf("Enter source string: ");
	scanf("%[^\n]", src);

	/*fpurge is required to clear the buffer because
	new line will be considered as string*/
	__fpurge(stdin);

	printf("Enter destination string: ");
	scanf("%[^\n]", dest);

	ptr = str_cat(dest,src);

	printf("%s\n",dest);
	return 0;
}

char *str_cat(char *dest, const char *src)
{
	int i = 0, j = 0;
	/*move index to last char of dest*/
	while(dest[i] != '\0')
	i++;

	/*insert chars one by one*/
	while( src[j] != '\0' )
	{
			dest[i++] = src[j++];
	}

	dest[i] = '\0';

	return dest;
}
