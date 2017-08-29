/*This program is to strstr */
#include <stdio.h>
#include <stdio_ext.h>

char *str_str(const char *haystack, const char *needle );

int main(int argc, char *argv[] )
{
		char str1[100], str2[100], *ptr;
		printf("Enter a string 1: ");
		scanf("%[^\n]",str1 );

		__fpurge(stdin);

		printf("Enter a string 2: ");
		scanf("%[^\n]", str2 );

		ptr = str_str(str1, str2);
		if( ptr != NULL )
		printf("%s\n",ptr);

		return 0;
}

char *str_str(const char *haystack, const char *needle )
{
		int i = 0, j = 0, count = 1, index, needle_len = 0;

		while(needle[i++] !='\0');
		needle_len++;

		i = 0;
		while( haystack[i] != '\0' )
		{
			//first char matches
			if ( haystack[i] == needle[0] )
			{
					i++;
					index = i - 1;
					for ( j = 1; needle[j] != '\0'; j++,i++ )
					{
							if ( haystack[i] == needle[j] )
										count++;
					}
					//exit condition///
					if ( count == needle_len )
					{
							return (char*)&haystack[index];
					}
					count = 1;
					i = index;
			}
			i++;
		}

		return NULL;
}
