#include<cstdio>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstring>
#include<cstdlib>

using namespace std;

int main()
{
	int a,b,c;
	while(scanf("%d %d %d",&a,&b,&c)!= EOF)
	{
		if(a==0 && b==0 && c==0)
		{
			break;
		}
		if(a<(b+c)&&b<(a+c)&&c<(a+b))
		{
			if((a*a)==(b*b)+(c*c)||(b*b)==(a*a)+(c*c)||(c*c)==(a*a)+(b*b))
			{
				printf("right\n");
			}
			else
			{
			printf("wrong\n");
			}
		}
		else
			printf("wrong\n");
	}
return 0;	
}