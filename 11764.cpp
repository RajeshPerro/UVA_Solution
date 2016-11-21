#include<stdio.h>

int main()
{
	int test,input[100],i,jump,t;
 scanf("%d",&test);
 for(t=1;t<=test;t++)
	{	
		int low=0,high=0;
		scanf("%d",&jump);
		
		for(i=0;i<jump;i++)
		{
		scanf("%d",&input[i]);
		}
		
		for(int j=0;j<jump-1;j++)
		{
			if(input[j+1] < input[j])
			{
				low++;
			}
			else if(input[j+1] > input[j])
			{
				high++;
			}
			
		}
		
	printf("Case %d: %d %d\n",t,high,low);
	}

	return 0;

}
