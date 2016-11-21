#include<stdio.h>
#include<conio.h>
int main()
{
int n,a[100],avg,sum,c,x,i,l=0;
while (scanf("%d",&n)!=EOF)
{  if(n==0)
     break;
     l++;
     sum=0;
     c=0;
   for(i=0;i<n;i++)    
     {
      scanf("%d",&a[i]);
      sum+=a[i];
     }
       avg=sum/n;
       for(i=0;i<n;i++)              
       {   
         x=a[i];
         while(x>avg)
         {
         c++;
         x--;
         }
       }           
       printf("Set #%d\n",l);
       printf("The minimum number of moves is %d.\n",c);
       printf("\n");                     
}
getch ();
return 0;    
}
