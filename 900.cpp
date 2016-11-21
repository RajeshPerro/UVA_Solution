#include<stdio.h>
int main()
{
	long int n,sum,x,y;
	while(scanf("%ld",&n)!=EOF)
	{
		if(n==0)
		{
			break;
		}
		sum=0;
		x=0;
		y=1;
		for(int i=1;i<=n;i++)
		{
		sum=x+y;
		x=y;
		y=sum;
		}
	printf("%ld\n",sum);
	}
	
	return 0;
}