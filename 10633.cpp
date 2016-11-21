#include<stdio.h>
int main()
{
	unsigned long N,X,Y;
	while(scanf("%llu",&N)==1)
	{
		if(N==0) break;
		X = ( N * 10 ) / 9;
		if( N % 9 == 0 )
		{
			Y = X - 1 ;
			printf("%llu %llu\n",Y,X);
		}
		else
			printf("%llu\n",X);

	}
	return 0;
}