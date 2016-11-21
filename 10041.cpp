#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<algorithm>

using namespace std;

int main()
{
	int T,array[40000],r,i,j,k,l,valu,mini;
	while ( scanf("%d",&T)!= EOF)
	{   
		
		for( i=1; i<=T; i++ )
		{
		scanf("%d",&r);
		for(j=1;j<=r;j++)
		{
			scanf("%d",&array[j]);


		}
		sort(array,array+r);
		for(k=1;k<=r;k++)
		{
			valu=0;
			for(l=1;l<=r;l++)
			{
				valu+=abs(array[l]-array[k]);
			}
		
		if(k==1)
		{
			mini=valu;
		}
		if(valu<mini)
		{
			mini=valu;
		}
		}
		printf("%d\n",mini);
		}
	}
	return 0;
}