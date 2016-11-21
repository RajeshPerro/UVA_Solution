#include<stdio.h>
int main()
{
	int cases,t,n;
    double a0,a_last,c;
	scanf("%d",&cases);
	int flag=0;
	for(t=0;t<cases;t++)
	{
		if(flag)
		{
			printf("\n");
		}
		flag=1;
		scanf("%d",&n);
		int i,n1=n;
		scanf("%lf%lf",&a0,&a_last);
		
		double sum=0;
		for(i=0;i<n;i++)
		{
			scanf("%lf",&c);
			sum+=(n1--)*c;
		}
		double X=(n*a0+a_last-2*sum)/(n+1);
		printf ("%.2f\n",X);
	}
return 0;
}