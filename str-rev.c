/*This program is to reverse the string */
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[] )
{
		char str[100], c;
		int idx1 = 0, idx2;
		printf("Enter a string: ");
		scanf("%s",str);

		/*get last index*/
		idx2 = strlen(str) - 1;

		/*swap values*/
		while( idx1 < idx2 )
		{
				c = str[idx1];
				str[idx1] = str[idx2];
				str[idx2] = c;
				idx1++;
				idx2--;
		}

		printf("%s\n",str);

		return 0;
}
