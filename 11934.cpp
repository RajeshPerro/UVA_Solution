#include<cstdio>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstring>
#include<cstdlib>

using namespace std;

int main()
{
        int  a,b,c,d,L,i,sum,count,X;
	
		while(scanf("%d %d %d %d %d",&a,&b,&c,&d,&L)!=EOF)
		{
            count=0;
            sum=0;
            X=0;
            if( a==0 && b==0 && c==0 && d==0 && L==0 )
            {
                break;
            }
		for(i=0;i<=L;i++)
		{
			X=(a*(i*i))+(b*i);
		
			sum=X+c;
		
			if((sum%d)==0)
			{
				count++;
			}
		
		}
	printf("%d\n",count);
    }
	return 0;
}
