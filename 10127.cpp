#include<stdio.h>
#include<math.h>

int main()
{
	long double a,n,i;
	while(scanf("%Lf",&n)!=EOF)
	{
		a=1;
		for(i=1;;i++)
		{
		if((fmodl(a,n))==0)
		{
			break;
		}
		else
		{
		a=(a*10)+1;
		a=fmodl(a,n);
		}
		}
		printf("%.0Lf\n",i);
		
	}
	return 0;
}