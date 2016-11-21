#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
char text[100];
int tc,i,j,c,length;
while(scanf("%d",&tc)==1)
{
for(j=0;j<=tc;j++)
{
gets(text);
c = 0 ;
length = strlen(text);
for( i = 0 ; i<= length ; i++ )
{
if(text[i]==' '||text[i]=='a'||text[i]=='d'||text[i]=='g'||text[i]=='j'||text[i]=='m'||text[i]=='p'||text[i]=='t'||text[i]=='w')
 c++;
else if(text[i]=='b'||text[i]=='e'||text[i]=='h'||text[i]=='k'||text[i]=='n'||text[i]=='q'||text[i]=='u'||text[i]=='x')
 c+=2;
else if(text[i]=='c'||text[i]=='f'||text[i]=='i'||text[i]=='l'||text[i]=='o'||text[i]=='r'||text[i]=='v'||text[i]=='y')
 c+=3;
else if(text[i]=='s'||text[i]=='z') 
c+=4;
}
if(j!=0)
 printf("Case #%d: %d\n",j,c);
}
}
return 0;
}