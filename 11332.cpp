#include<stdio.h>

long int R(long int);

int main()
{
   long	int n,X;
	while(scanf("%ld",&n)==1)
	{
		if(n==0)
		{
		break;
		}
	 while(n>9)
		{
		  X=R(n);
		  n=X;
		}
		printf("%ld\n",n);
		
	}
	return 0;
}

long int R(long int a)
{
long int sum=0,y;
while(a)
{
y=a%10;
a/=10;
sum+=y;
}
//printf("sum=%ld\n",sum);
return sum;
}