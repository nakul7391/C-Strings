/*This program is to strncasecmp*/
#include <stdio.h>
#include <stdio_ext.h>
#include <string.h>

/*size_t is 16 bit int most library functions use it
with implications that it can hold any large value*/
int str_n_case_cmp(const char *s1, const char *s2, size_t n);

int main(int argc, char *argv[] )
{
		char str1[100], str2[100];
		size_t bytes;
		printf("Enter a string 1: ");
		scanf("%[^\n]",str1 );

		__fpurge(stdin);

		printf("Enter a string 2: ");
		scanf("%[^\n]", str2 );

		printf("Enter number of bytes to compare: ");
		scanf("%lu",&bytes);

		if(str_n_case_cmp(str1,str2,bytes) == 0 )
				printf("EQUAL\n");
		else
				printf("NOT EQUAL\n");

	return 0;
}


int str_n_case_cmp(const char *s1, const char *s2, size_t n)
{
			size_t i;
			char c1,c2;

			for( i = 0 ; i < n && s1[i] != '\0'; i++ )
			{
					c1 = s1[i];
					c2 = s2[i];

					/*change both to lower case*/
					if( c1 >= 65 && c1 <= 90 )
					c1 = c1 + 32;
					if( c2 >= 65 && c2 <= 90 )
					c2 = c2 + 32;

					if( c1 == c2 )
					continue;
					else
					break;
			}

			return c1 - c2;

}
