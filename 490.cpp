#include<cstdio>
#include<iostream>
#include<cstring>
#include<cstdlib>
#include<algorithm>
 

using namespace std;

int main()
{
	char input[101],output[101][101];
	int i,j,len,row=0,max_len=0;
	freopen("490.txt","r",stdin);
	while(gets(input))
	{
		len=strlen(input);
		for(i=0;i<101;i++)
		{
			if( i < len )
			{
			output[row][i]=input[i];
			}
			else
			{
				output[row][i]=' ';
			}
		
		}
			if(len>max_len)
			{
				max_len=len;
			}

		row++;
	}

for(i=0;i<max_len;i++)
{
	for(j=row-1;j>=0;j--)
	{
		printf("%c",output[j][i]);
	}
	printf("\n");
}

	return 0;
}