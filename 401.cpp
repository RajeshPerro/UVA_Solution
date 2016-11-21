#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int pallindrom(char word[])
{
	int i,j,flag=1;
	for(i=strlen(word)-1,j=0;i>=0,j<strlen(word);i--,j++)
	{
		if(word[j]==word[i])
		{
			//flag=1;
			continue;
		}
		else
		{
		flag=0;
		break;
		}
	}
	if(flag==1)
	return 1;

	else
		return 0;
}

int mirrorpallindrom(char x[])
{
	int length,i,counter;
	length=strlen(x);
	counter=0;

	for(i=0;i<length;i++)
	{
		if(x[i]=='A'||x[i]=='0'||x[i]=='H'||x[i]=='I'||x[i]=='M'||x[i]=='O'||x[i]=='Y'||x[i]=='X'||x[i]=='W'||x[i]=='V'||x[i]=='U'||x[i]=='T'||x[i]=='1'||x[i]=='8')
		{
			counter++;
		}
	}
	if(counter==length)
	return 1;
	else
		return 0;
}
int mirrorstring(char y[])
{
int a=1,i,len;
len=strlen(y);
for(i=0;i<len;i++)
{
if(y[i]=='E')
y[i]='3';
else if(y[i]=='J')
y[i]='L';
else if(y[i]=='S')
y[i]='2';
else if(y[i]=='Z')
y[i]='5';
else if(y[i]=='O')
y[i]='0';
else
continue;
}
a=pallindrom(y);
if (a==1) 
return 1;
else
return 0;
}
int main()
{
	char line[22];
	int len,i,c,mp,ms;
while(gets(line))
{
len=strlen(line);
for(i=0;i<len;i++)
printf("%c",line[i]);
c=pallindrom(line);
if(c==1)
{
mp=mirrorpallindrom(line);
if(mp==1)
printf(" -- is a mirrored palindrome.\n\n");
else 
printf(" -- is a regular palindrome.\n\n");
}
else
{
ms=mirrorstring(line);
if(ms==1) 
printf(" -- is a mirrored string.\n\n");
else 
printf(" -- is not a palindrome.\n\n");
}
}
return 0;
}
