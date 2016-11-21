#include<stdio.h>
int main()
{
int T,i,S,D,a,b;
scanf("%d",&T);
for(i=1;i<=T;i++)
{
scanf("%d%d",&S,&D);
a=S+D;
b=S-D;
if(((a%2)||(b%2)||b<0))
{
printf("impossible\n");
}
else
{
printf("%d %d\n",a/2,b/2);
}
}
return 0;
}