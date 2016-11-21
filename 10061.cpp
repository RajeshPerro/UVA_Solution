#include<stdio.h>
int fact( int n)
			{
				if(n==1)
    			{
				return n;
    			}

				return  n*fact(n-1);   
			}
int main()
{
 long int n,b,result,a,i,x,c;
while(scanf("%ld%ld",&n,&b)!=EOF)
	{     
		i=0;
		c=0;
		result=fact(n);
		x=result;
		//printf("%d",result);
		//if(b==10)
			
				while(result)
				{
				  a=result%b;
				  result/=b;
				  if(a==0)
			 	  c++;
			  	  i++;
				}	 
				
			
		printf("%ld %ld\n",c,i);
	}
return 0;
}
