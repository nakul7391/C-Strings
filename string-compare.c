/*This program is to compare strings */
#include <stdio.h>
#include <stdio_ext.h>

int str_cmp(const char *s1, const char *s2);

int main(int argc, char *argv[] )
{
	char str1[100], str2[100];

	printf("Enter string 1: ");
	scanf("%[^\n]s",str1);

	/*fpurge will flush the standerd input and clear the buffer*/
	__fpurge(stdin);

	printf("Enter string 2: ");
	scanf("%[^\n]s",str2);

	/*compare strings*/
	if( str_cmp(str1,str2) == 0 )
			printf("EQUAL\n");
	else
			printf("NOT EQUAL\n");

	/*print the difference*/
	printf("diff %d\n", str_cmp(str1,str2) );

	return 0;
}

int str_cmp(const char *s1, const char *s2)
{
	int i = 0;

	while( s1[i] != '\0' )
	{
			if(s1[i] == s2[i] )
			i++;
			else
			break;
	}

	return s1[i] - s2[i];
}
