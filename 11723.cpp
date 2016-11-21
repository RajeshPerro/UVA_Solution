#include<stdio.h>

int main()
{
	long int R,N,i=1;
	while(scanf("%ld %ld",&R,&N)!=EOF)
	{  
		if(N==0 && R==0)
		{
			break;
		}

	    long int N2=N;

		if((N+(N*26))<R)
		{
			printf("Case %d: impossible\n",i);
		}
		else
		{
			for(long int j=0;;j++)
			{
				N=(N2+(N2*j));
				if( N>R || N==R)
				{
					printf("Case %d: %ld\n",i,j);
					break;
				}
			}
		}
		i++;
	}
	return 0;
}