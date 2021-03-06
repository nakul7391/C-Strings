/*This program is to string case compare ignore the cases */
#include <stdio.h>
#include <stdio_ext.h>

int str_case_cmp(const char *s1, const char *s2 );

int main(int argc, char *argv[] )
{
	char str1[100], str2[100];
	printf("Enter a string 1: ");
	scanf("%[^\n]",str1 );

	__fpurge(stdin);

	printf("Enter a string 2: ");
	scanf("%[^\n]", str2 );

	if(str_case_cmp(str1,str2) == 0 )
		printf("EQUAL\n");
	else
		printf("NOT EQUAL\n");

	return 0;
}

int str_case_cmp(const char *s1, const char *s2)
{
	int i = 0;
	char c1,c2;

	while( s1[i] != '\0' )
	{
		c1 = s1[i];
		c2 = s2[i];

	/*convert both to lowercase if case is different*/
	if(c1 >= 65 && c1 <= 90 )
		c1 = c1 + 32;
	if(c2 >= 65 && c2 <= 90 )
		c2 = c2 + 32;

	if( c1 == c2 )
		i++;
	else
		break;
}

	return c1 - c2;
}
