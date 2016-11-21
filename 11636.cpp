#include<stdio.h>
#include<math.h>

int main()
{
	double N,i,ces=1,paste,count;
	while(	scanf("%lf",&N)==1)
	{
		if(N<0)
		{
			break;
		}

		paste=0;
		count=0;
		
	for( i=0 ;; i++)
	{
		paste=pow(2,i);
		
	
	if( paste >= N )
		{
		count=i;
		break;
		}
	}
	printf("Case %.0lf: %.0lf\n",ces,count);
	ces++;
	}
	

	return 0;
}