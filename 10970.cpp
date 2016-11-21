#include<stdio.h>
//#include<conio.h>
int main()
	{
		int m,n,result;
		while(scanf("%d%d",&m,&n)!=EOF)
		{
			result=(m*n)-1;
			printf("%d\n",result);
		}
	//getch();	
	return 0;	
	}
