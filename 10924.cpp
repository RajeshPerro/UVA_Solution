#include<stdio.h>
#include<string.h>
int main()
	{
		char word[20];
		int i,l,sum,j,c;
		while(scanf("%s",word)!=EOF)
		{
		 	//gets(word);
		 	l=strlen(word);
			for(sum=0,i = 0 ; i <  l ; i++)
			{      
				if(word[i]>= 'a' && word[i] <= 'z')
				   {
					sum= sum + word[i] - 96;
				   }
				if(word[i]>='A' && word[i]<='Z')
				  {
					sum = sum + word[i]-38;
				  }
				
			}
			//printf("%d\n",sum);
		for(c=0,j=2;j<sum;j++)
			{
				if(sum % j == 0)
				{
				c++;	
				break;
				}
			}
		if(c==0)
		{
		printf("It is a prime word.\n");
		}
		else
		{
		printf("It is not a prime word.\n");		
		}
	}	
	return 0;
	}
