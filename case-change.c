/*This program is to replace lower case by upper case and viceversa*/
#include <stdio.h>

int main(int argc, char *argv[] )
{
		char str[100];
		int i = 0;
		printf("Enter a string: ");
		scanf("%s",str);

		while( str[i] != '\0' )
		{
			/*if upper case conver to lowercase*/
			if( str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
			/*if lower case convert to upper case*/
			else if( str[i] >= 97 && str[i] <= 122 )
			str[i] = str[i] - 32;
			i++;
		}

		printf("%s\n",str);

		return 0;
}
