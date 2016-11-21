#include<stdio.h>
#include<conio.h>
int main()
{ 
int t,i,n,m,c,age[100],j;
scanf("%d",&t);
for(m=1;m<=t;m++)    
  {
      scanf("%d",&n);                  
      for(j=0;j<n;j++)
         {
          scanf("%d",&age[j]);                
         }    
    c=n/2;       
    printf("Case %d: %d\n",m,age[c]);
  }
getch();    
return 0;    
}
