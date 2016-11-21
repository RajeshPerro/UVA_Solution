#include<stdio.h>
#include<string.h>
int main()
{
int i,len;
char a[31];
while(scanf("%s",a)!=EOF)
	{ 
		len=strlen(a);
		for(i=0;i<len;i++)
		{
		if(a[i]=='A'||a[i]=='B'||a[i]=='C')
		  a[i]='2';
		if(a[i]=='D'||a[i]=='E'||a[i]=='F')
		  a[i]='3';
		if(a[i]=='G'||a[i]=='H'||a[i]=='I')
		  a[i]='4';
		if(a[i]=='J'||a[i]=='K'||a[i]=='L')
		  a[i]='5';
		if(a[i]=='M'||a[i]=='N'||a[i]=='O')
		  a[i]='6';
		if(a[i]=='P'||a[i]=='Q'||a[i]=='R'||a[i]=='S')
		  a[i]='7';
		if(a[i]=='T'||a[i]=='U'||a[i]=='V')
		  a[i]='8';
		if(a[i]=='W'||a[i]=='X'||a[i]=='Y'||a[i]=='Z')
		  a[i]='9';            
		 	
		}
	for(i=0;i<len;i++)
	   	{
			printf("%c",a[i]);
		}
		printf("\n");
	}
return 0;
}
