#include<stdio.h>
#include<conio.h>
int main()
{
int t1,t2,a[1000],i,j,k;
double sum,result,counter,avr;    
scanf("%d",&t1);
for(i=1;i<=t1;i++)
    {
       sum=0;
       counter=0;           
     scanf("%d",&t2);
     for(j=0;j<t2;j++)
         {
         scanf("%d",&a[j]);
         sum=sum+a[j];
         }
         
        avr=sum/t2;
  
     for(k=0;k<t2;k++)    
         if(a[k]>avr)
         counter++;        
 result=(counter*100)/t2;
 printf("%.3lf%%",result);
}   
getch();
return 0;    
}
