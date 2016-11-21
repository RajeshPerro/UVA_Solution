#include<stdio.h>
#include<math.h>
void createPrime(long int *pNumber, long int n);
int main()
{
	 long int primeNumber[100002], primeList[100010];
	long int i, j, N,T,count;
	scanf("%d",&T);
	for(j=1;j<=T;j++)
	{
		scanf("%d",&N);
		createPrime(primeNumber, N);
		for(i = 1, count = 0; i <= N; i++)
		{
			if(primeNumber[i] == 1)
			{
				primeList[count] = i;
				count++;
			}
        }
        for(i=0;i<N;i++)
        {
		   if(primeList[i] < N && primeList[i]*2 > N)
			{
				printf("%d\n",primeList[i]);
				break;
			}
        }
	
	}
	return 0;
}


void createPrime(long int *pNumber, long int n)
{
	int i, j;
	for(i = 1; i <= n; i++)
		pNumber[i] = 1;
	
	for(i = 2; i <= sqrt(n); i++)
	{
		for(j = i+i; j <= n; j += i)
		{
			if(pNumber[j] == 1)
			{
				if(j%i == 0)
				{
					pNumber[j] = 0;
				}
			}
		}
	}
}
