#include<cstdio>
#include<algorithm>
#include<cstdlib>
#include<cstring>
#define R 1000010

using namespace std;

int main()
{
	char input[R],chk;
	int T=0,n,i,x,y,j,flag;
	while(scanf("%s",input)!=EOF)
	{
		T++;
	//	gets(input);

		scanf("%d",&n);

		printf("Case %d:\n",T);

		for(i=1;i<=n;i++)
		{
			scanf("%d %d",&x,&y);
			if(x>y)
			{
				swap(x,y);
			}

			chk=input[x];

			flag=0;

			for(j=x;j<=y;j++)
			{
				if(chk==input[j])
				{
					flag=1;
				}
				else
				{
					flag=0;
					break;
				}

			}
		
			if(flag)
			{
				printf("Yes\n");
			}
			else
			{
				printf("No\n");
			}
		}

	}
	return 0;
}
