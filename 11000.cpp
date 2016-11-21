#include<stdio.h>
    long int fac[1000];

    int main()
    {
    long unsigned year,x,y;
    while(scanf("%lu",&year)==1)
    {

    if(year==-1)break;
    else
    {
    long int a,b,c,i;
    a=1;
    fac[0]=1;
    b=2;
    fac[1]=2;
    for(i=2;i<=year+1;i++)
    {
    fac[i]=c=a+b;
    a=b;
    b=c;
    }
    printf("%lu %lu\n",fac[year]-1,fac[year+1]-1);
    }
    }
    return 0;
    }
