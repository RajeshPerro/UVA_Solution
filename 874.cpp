#include<stdio.h>
int main()
{
	long double n;
	int i;
	while(scanf("%Lf",&n)!=EOF)
	{
		for(i=1;;i++)
		{
			if(i%2==1)
			{
				n=n/9;
			}
			else
			{
				n/=2;
			}
			if(n<=1)
			{
				break;
			}
		}
		if(i%2==0)
			printf("Ollie wins.\n");
		else
			printf("Stan wins.\n");
	}

	return 0;
}