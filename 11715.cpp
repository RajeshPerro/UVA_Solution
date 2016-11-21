#include<stdio.h>
#include<math.h>

int main()
{
	double u,v,s,t,a;
	int chk;
	for(int i=1;;i++)
	{
		scanf("%d",&chk);

		if(chk==0)
		{
			break;
		}

		if(chk==1)
		{
			scanf("%lf %lf %lf",&u, &v, &t);
				//s and a
			a=((v-u)/t);
			s=((u*t)+((0.5)*(a*(t*t))));
			printf("Case %d: %.3lf %.3lf\n",i,s,a);
		}
		else if(chk==2)
		{
			scanf("%lf %lf %lf",&u, &v, &a);
			//s and t
			t=((v-u)/a);
			s=((u*t)+((0.5)*(a*(t*t))));
			printf("Case %d: %.3lf %.3lf\n",i,s,t);

		}
		else if(chk==3)
		{
			scanf("%lf %lf %lf",&u, &a, &s);
			//v and t
			v=sqrt((u*u)+(2*a*s));
			t=((v-u)/a);
			printf("Case %d: %.3lf %.3lf\n",i,v,t);
		}

		else if(chk==4)
		{
			scanf("%lf %lf %lf",&v, &a, &s);
			//u and t
			u=sqrt((v*v)-(2*a*s));
			t=((v-u)/a);
			printf("Case %d: %.3lf %.3lf\n",i,u,t);

		}
	}
	return 0;
}