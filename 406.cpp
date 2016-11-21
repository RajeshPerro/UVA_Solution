#include<stdio.h>
#include<math.h>
void createPrime(long int *pNumber, long int n);
int main()
{
	long int primeNumber[10000], primeList[1000];
	long int i, j, N , C, length, end, mid, count;
	while(scanf("%ld %ld", &N, &C)!= EOF)
	{
		createPrime(primeNumber, N);
		for(i = 1, count = 0; i <= N; i++)
		{
			if(primeNumber[i] == 1)
			{
				primeList[count] = i;
				count++;
			}
		}
		
		if(count%2 == 0)
		{
			mid = (count/2) - C;
			end = C * 2;
			
			if(end > count)
			{
				end = count;
				mid = 0;
			}
		}
		
		else
		{
			mid = (count/2) - C + 1;
			end = (C*2) - 1;
			
			if(end > count)
			{
				end = count;
				mid = 0;
			}
		}
		
		printf("%d %d:", N, C);
		for(i = 1; i <= end ; i++, mid++)
		{
			printf(" %d",primeList[mid]);
		}
		
		printf("\n\n");
		
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
