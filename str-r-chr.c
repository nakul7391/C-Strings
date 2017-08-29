/*This program is to strchr*/
#include <stdio.h>
#include <stdio_ext.h>

char *str_r_chr(const char *s, int c);

int main(int argc, char *argv[] )
{
		char str[100], c, *ptr;
		printf("Enter a string: ");
		scanf("%[^\n]",str);

		__fpurge(stdin);

		printf("Enter char to search: ");
		scanf("%c", &c);

		ptr = str_r_chr(str,c);

		/*to prevent segmentation fault*/
		if( ptr != NULL)
		printf("%s\n",ptr);
		return 0;
}

char *str_r_chr(const char *s, int c)
{
		int i = 0;

		/*get string length*/
		while( s[i] != '\0' )
		i++;

		i = i - 1;//last index one less than string length
		/*search form last index*/
		while(i >= 0)
		{
				if(s[i] == c )
				break;
				else
				i--;
		}

		if(i < 0)
		return NULL;
		else
		return (char *)&s[i];
}
