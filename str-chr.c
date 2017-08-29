/*This program is to strchr*/
#include <stdio.h>
#include <stdio_ext.h>

char *str_chr(const char *s, int c);

int main(int argc, char *argv[] )
{
		char str[100], c, *ptr;
		printf("Enter a string: ");
		scanf("%[^\n]",str);

		__fpurge(stdin);

		printf("Enter char to search: ");
		scanf("%c", &c );

		ptr = str_chr(str,c);

		/*if pointer is NULL it will result in segmentation fault*/
		if( ptr != NULL)
		printf("%s\n",ptr);

		return 0;
}

char *str_chr(const char *s, int c)
{
		int i = 0;

		while( s[i] != '\0' )
		{
				if( s[i] == c )
				break;
				else
				i++;
		}

		if(s[i] == '\0')
		return NULL;
		else
		return (char *)&s[i]; //string is constant so we need to typecast it

}
