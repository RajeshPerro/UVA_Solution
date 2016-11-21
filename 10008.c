#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
	int tc;
	char line[400];
	while(scanf("%d\n",&tc)==1)
	{
		int i,max=0,c[26],j,k,l;
		for(j=0;j<26;j++)
			{
				c[j]=0;
			}
	 for(i=1;i<=tc;i++)
	 {
			gets(line);
			 l=strlen(line);
			for(k=0;k<l;k++)
			{
			    char x=toupper(line[k]);
                   //printf("X= %c ",x);
				if(x >= 'A' && x <= 'Z')
				{
					c[x-65]++;
				}
			}
	 }
		for(j=0 ; j < 26 ; j++)
		{
			if( c[j] > max)
			{
				max=c[j];
			}
		}
		for(;;)
		{
			for(i=0;i<26;i++)
			{
			if(c[i]==max)
			printf("%c %d\n",i+65,max);
			}
			max--;
			if(max==0)
			break;
		}
	}
	return 0;
}
