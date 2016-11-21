#include<stdio.h>
#include<string.h>

int main()
{
	int i, j, length;
	char input[100] = {"1234567890-=WERTYUIOP[]\\SDFGHJKL;'XCVBNM,./"};
	char output[100] = {"`1234567890-QWERTYUIOP[]ASDFGHJKL;ZXCVBNM,."};
	char str[100000];

	while(gets(str))
	{
		length = strlen(str);
		for(i = 0; i < length; i++)
		{
			if(str[i] != ' ')
			{
				for(j = 0; j < strlen(input); j++)
				{
					if(str[i] == input[j])
						break;
				}

				printf("%c", output[j]);
			}

			else
				printf(" ");
		}
		printf("\n");
	}

	return 0;
}
