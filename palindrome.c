/*This program is to palindrome*/
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[] )
{
		char str[100];
		int i = 0, j = 0, flag = 0;
		printf("Enter a string: ");
		scanf("%s",str);

		/*get the last index of string*/
		j = strlen(str) - 1;

		while(i < j)
		{
				if(str[i++] != str[j--])
				flag = 1;
		}

		if( flag == 0 )
		printf("Palindrome\n");
		else
		printf("Not Palindrome\n");

		return 0;
}
