#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
char input[22];
int i,j,a[22],len;
while(gets(input))
{
for(int j=0;j<22;j++)a[j]=0;
len=strlen(input);
for(i=0;i<len;i++)
{
if(input[i]=='B'||input[i]=='F'||input[i]=='P'||input[i]=='V')
a[i]=1;
if(input[i]=='C'||input[i]=='G'||input[i]=='J'||input[i]=='K'||input[i]=='Q'||input[i]=='S'||input[i]=='X'||input[i]=='Z')
a[i]=2;
if(input[i]=='D'||input[i]=='T')
a[i]=3;
if(input[i]=='L')
a[i]=4;
if(input[i]=='M'||input[i]=='N')
a[i]=5;
if(input[i]=='R')
a[i]=6;
if(i>0 && a[i]==a[i-1])
continue;
else if(a[i]!=0)
printf("%d",a[i]);
}
printf("\n");
}
return 0;
}