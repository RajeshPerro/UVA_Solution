#include<stdio.h>
int main()
{
	long int n,a,k,cube[200],i,j;
	while(scanf("%ld",&a)!=EOF)
	{
		n=a*a*a;
		for(i=2;i<=n;i++)
		{
		
			for(j=0,k=i;;k++,j++)
			{
				
				if(n!=0)
				{
					n-=k*k*k;
			    	cube[j]=k;
				
				}
				break;
		    }
		}
		for(i=0;i<j;i++)	
		printf("%ld ",cube[i]);
		
	}	
return 0;	
}
