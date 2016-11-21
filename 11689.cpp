#include<stdio.h>

int main()
{
	long int T,i,e,f,c,sum,total_bottle,x;
		while(scanf("%ld",&T)==1)
		{

			for(i=1;i<=T;i++)
			{
				scanf("%ld%ld%ld",&e,&f,&c);
				total_bottle=e+f;
				sum=0;
				for(;;)
				{
					x=total_bottle/c;
					sum+=x;
					total_bottle=x+total_bottle%c;
					if( total_bottle < c )
					{
						break;
					}
				}
				printf("%ld\n",sum);

			}
		}
	return 0;
}