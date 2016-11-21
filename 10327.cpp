#include<cstdio>
#include<algorithm>
#include<math.h>

using namespace std;

int main()
{
	int n,j,i,c,flag,input[10001];
	while(scanf("%d",&n)!=EOF)
	{
		flag=1;
		c=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&input[i]);
		}
		for(i=0;i<n && (flag==1);i++)
		{
			flag=0;
			for(j=0;j<n-1;j++)
			{
				if(input[j] > input[j+1])
				{
					swap(input[j],input[j+1]);
					flag=1;
					c++;
				}

			}
		}
		printf("Minimum exchange operations : %d\n",c);
	}
	return 0;
}