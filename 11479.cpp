#include<stdio.h>
int main()
{
	long int tc,i,a,b,c,big;
	while(scanf("%ld",&tc)==1)
	{  
		for(i=1;i<=tc;i++)
		{   big=0;
			scanf("%ld%ld%ld",&a,&b,&c);
			if(a>big)
				big=a;
			if(b>big)
				big=b;
			if(c>big)
				big=c;
			if((a+b+c-big) <= big)
			 printf("Case %ld: Invalid\n",i);
			else if(a==b && a==c)
			 printf("Case %ld: Equilateral\n",i);
			else if (a==b ||a==c || b==c)
			printf("Case %ld: Isosceles\n",i);
			else if(a!=b && b!=c && c!=a)
			printf("Case %ld: Scalene\n",i);
		}

	}
return 0;
}