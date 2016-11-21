#include<stdio.h>
#include<string.h>
#define size 1000000
int main()
{
	int i,length,count,flag1,flag2;
	char st[size];
	while(gets(st))
	{
		
		length=strlen(st);
		count=0;
		if((st[0]>='A' && st[0]<='Z') ||(st[0]>='a' && st[0]<='z'))
			count++;
		for(i=1;i<length;i++)
		{
			flag1=0,flag2=0;
		
			if((st[i]>='A' && st[i]<='Z') ||(st[i]>='a' && st[i]<='z'))
				flag1=1;		
		
			if((st[i-1]>='A' && st[i-1]<='Z') ||(st[i-1]>='a' && st[i-1]<='z'))
				flag2=1;
		
			if(flag2==0 && flag1==1)
				   count++;
							
		}
		
		printf("%d\n",count);
	}
	
	
return 0;
}
