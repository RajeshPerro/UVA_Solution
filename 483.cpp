#include<stdio.h>
#include<string.h>

int main()
{
	int i, j, k, length;
	char word[30000], tempArray[30000];
   while(gets(word))
	{		
		length = strlen(word);
		for(i = 0, j = 0; i < length; i++)
		{
			
			if(word[i] != ' ')
			{
				tempArray[j] = word[i];
				j++;
			}

			else
			{
				for(k = j-1; k >= 0; k--)
					printf("%c", tempArray[k]);

				printf(" ");
				j = 0;
			}
		}

		for(k = j-1; k >= 0; k--)
			printf("%c", tempArray[k]);
		
		printf("\n");
	}
	return 0;
}
