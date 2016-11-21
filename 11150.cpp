#include<stdio.h>
int main()
{
	long int n,half,total;
	while(scanf("%ld",&n)==1)
	{
		 half=n/2;
		 total= half +n;
		printf("%ld\n",total);
	}

return 0;
}