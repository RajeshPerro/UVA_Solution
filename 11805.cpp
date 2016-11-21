#include<stdio.h>
//#include<conio.h>
int main ()
{
int tc, n,k,p,i,l;
scanf("%d",&tc);
for(i=1;i<=tc;i++)
   {
   scanf("%d%d%d",&n,&k,&p);
   for(l=1;l<=p;l++)
      {             
       k++;
       if(k>n)
       k=1;
       }
   printf("Case %d: %d\n",i,k);   
   }    
//getch();    
return 0;    
}

