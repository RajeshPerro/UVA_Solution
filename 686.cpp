#include<stdio.h>
#include<math.h>
#include<string.h>
#define MAX 1000000
int x[MAX+1];
int main()
{
	long int i,j,n,c;

	for( i = 2 ; i <= MAX ; i++ )
	{
		x[i] = 1;
	}
	for( i = 2 ; i <= sqrt(MAX); i++ )
	{
		if( x[i] == 1 )
		{
			for( j = i+i ; j <= MAX ; j = j+i )
			{
				x[j]=0;
			
			}
		}
	}
/*for( int k = 2 ; k <= MAX ; k++)
	{
	if(x[k]==1)
	printf("%d\n",k);
	}
*/
while(scanf("%ld",&n) == 1)
{
	if( n == 0 )
	{
		break;
	}
	 c = 0;

	for(i = 2 ; i <= n/2 ; i++)
	{
		if( x[i] == 1 && x[n-i] == 1)
		{
			c++;
		}
	}
printf("%ld\n",c);
}
	return 0;
}