#include<stdio.h>

int main()
{
    int T,i,N,P,Q,j,sum,A,c;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        sum=0;
        c=0;
        
    scanf("%d%d%d",&N,&P,&Q);
    for(j=1;j<=N;j++)
    {
        scanf("%d",&A);
        sum+=A;
        if( j <= P && sum <= Q)
        {
            c++;
        }
    }
    printf("Case %d: %d\n",i,c);
    }
 
   return 0; 
}
