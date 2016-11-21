#include<stdio.h>
//#include<conio.h>
int main()
{
 int n,cig,a,x,b;
while(scanf("%d%d",&n,&b)!=EOF)
 {
     x=n;
    while(x>=b)
     {
      a=x/b;
      x=a+x%b;
      n=a+n;           
     }
   printf("%d\n",n);
 }                
//getch();    
return 0;    
}    
