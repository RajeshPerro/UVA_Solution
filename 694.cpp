#include<stdio.h>
int main()
{
	long int i=0,end,start,a,b,count;
	while(scanf("%ld %ld", &start, &end))
	{
		if(start == -1 && end == -1)
			return 0;
		
		count=1;
		
		if(start < end)
		{
			a=start;
			b=end;
					
			while(1)
			{
				if(a==1)
				  break;
				else if(a%2 == 0)
					a/=2;
				else
				   a=a*3+1;
				if(a>b)
				 break;
				count++;
				
				 
			}
		}
		
		else
		{
			b=start;
			a=end;
						
			while(1)
			{
				if(a==1)
				  break;
				else if(a%2 == 0)
					a/=2;
				else
				   a=a*3+1;
				if(a>b)
				  break;

				count++;
				
				
			}
		}
	i++;	
	printf("Case %ld: A = %ld, limit = %ld, number of terms = %ld\n",i,start,end,count);
	 
	
	}

return 0;
}
