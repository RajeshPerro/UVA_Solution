#include<stdio.h>
#include<math.h>
int main()
{

	long long int t,low,high,count,max,min,k,i,j,temp,a,b,e,f;
	while(scanf("%lld",&t)!=EOF)
	{
		for(k=0;k<t;k++)
		{
			scanf("%lld %lld",&e,&f);
			max=0,min=0;
			a=e,b=f;
			if(a<b)
			{
				for(i=a;i<=b;i++)	
				{
					count=0;
					for(j=1;j<=sqrt(i);j++)	
					{
						if(i%j==0)
						count+=2;	
					
						if(i==j*j)
						count-=1;	
			   		}
				
					if(count>max)
					{
						max=count;
						min=i;	
					}
				
				}
			
			}
		
		
			else
			{
				temp=a;
				a=b;
				b=temp;
		
				for(i=a;i<=b;i++)	
				{
					count=0;
					for(j=1;j<=sqrt(i);j++)	
					{
						if(i%j==0)
					    count+=2;	
					
						if(i==j*j)
						count-=1;
					}
				
					if(count>max)
					{
						max=count;
						min=i;	
					}
				
				}
			
			}	
		
    		printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",e,f,min,max);	
		}
  }
return 0;	
}
