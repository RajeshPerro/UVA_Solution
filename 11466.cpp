#include<stdio.h>
#include<math.h>
#define SIZE 10000000
#define siz 5000000

int primeNumber[siz];
long long int  primeList[1000000];
int generatePrime(void);

int main()
{
    long long int  n, number, LPD, pf;
    int i, count, top;

    top = generatePrime();

    while(scanf("%lld", &number))
    {
        if(number == 0)
            return 0;
        if(number < 0)
            number = number*(-1);

		count = i = 0;
		n = number;
		pf = primeList[i];

		while( pf*pf <= number && n != 1 && i < top -1)
		{

			if( n % pf == 0)
			{
				count++;
				while( n % pf == 0)
				{
					n /= pf;
				}
				LPD = pf;
			}
			pf = primeList[++i];
		}

        if(n !=1)
        {
            LPD = n;
            count++;
        }

        if(count > 1)
            printf("%lld\n", LPD);
        else
            printf("-1\n");

    }

    return 0;
}

int generatePrime(void)
{
    long long int i, j, k;


    for( i = 2; i <= SIZE >> 1; i++ )
        primeNumber[i] = 0;

    for( i = 3; i <= sqrt(SIZE); i += 2 )
     {
        if( primeNumber[i>>1] == 0 )
        {

            for( j = i * i; j <= SIZE; j += i + i )

                primeNumber[j>>1] = 1;
        }

    }
    k = 0;
    primeList[k++] = 2;
    for(i = 3; i <= SIZE; i += 2)
    {
        if(primeNumber[i >>1] == 0)
            primeList[k++] = i;
    }
    return k;
}
