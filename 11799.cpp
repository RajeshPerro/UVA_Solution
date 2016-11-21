#include<stdio.h>
int main()
{
	int T,i,N,j,A[10050],c;
	scanf("%d",&T);
	for(i=1;i<=T;i++)
	{    c=0;
		scanf("%d",&N);
		for(j=0;j<N;j++)
		{  
			scanf(" %d",&A[j]);
			if(A[j]>=c)
			{
				c=A[j];
			}
		}
		printf("Case %d: %d\n",i,c);
	}
	return 0;
}
