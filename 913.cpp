#include<stdio.h>
#include<math.h>
int main()
{
	long int N,odd_num,sum;
	while(scanf("%ld",&N)!=EOF)
	{
		sum=0;
		odd_num=(N*(N+2))/2;
		sum+=3*odd_num-6;
		printf("%ld\n",sum);
	}
	return 0;
}