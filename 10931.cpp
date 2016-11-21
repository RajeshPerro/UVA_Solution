#include<stdio.h>

int main()
{
	long int a[50],x,N,i,count,j;
	while(scanf("%ld",&N)!=EOF)
	{
		if(N==0)
		{
			break;
		}
		count=i=0;
		while(N)
		{
			x=N%2;
			a[i++]=x;
			N=N/2;
			if(x==1)
			{
				count++;
			}
		}
		printf("The parity of ");
		for(j=i-1;j>=0;j--)
		{
			printf("%ld",a[j]);
		}
		printf(" is %ld (mod 2).\n",count);
	}
	return 0;
}