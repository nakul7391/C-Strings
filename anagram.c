/*This program is to check string is anagram*/
#include <stdio.h>

int main(int argc, char *argv[] )
{
		char str1[100], str2[100];
		int alpha1[26] = {0}, alpha2[26] = {0}, i = 0, flag = 0;

		printf("Enter first string(lowercase):");
		scanf("%s",str1);

		printf("Enter second string(lowercase): ");
		scanf("%s",str2);

		/*get number of characters*/
		while( str1[i] != '\0' && str2[i] != '\0')
		{
				alpha1[str1[i] - 97]++;
				alpha2[str2[i] - 97]++;
				i++;
		}

		for( i = 0; i < 26; i++ )
		{
				if(alpha1[i] != alpha2[i])
				flag = 1;
		}

		if( flag == 0 )
		printf("Anagram\n");
		else
		printf("Not Anagram\n");

		return 0;
}
