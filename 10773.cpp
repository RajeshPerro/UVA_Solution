#include<cstdio>
#include<cmath>
#include<iostream>

using namespace std;

int main()
{
	int T,i;
	double d,v,u,P;
	scanf("%d",&T);
	for(i=1;i<=T;i++)
	{
		scanf("%lf %lf %lf",&d,&v,&u);
		if( u != 0 && v != 0 && u > v )
		{
			P=((d/(sqrt((u*u)-(v*v))))-d/u);
			printf("Case %d: %.3lf\n",i,P);
		}
		else
			printf("Case %d: can't determine\n",i);
	}
	return 0;
}