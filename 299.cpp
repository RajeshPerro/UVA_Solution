#include<stdio.h>
#include<conio.h>
int main()
{
int a[100],i,j,tc1,tc2,k,l,m,c;
scanf("%d",&tc1);
for(i=1;i<=tc1;i++)
  {
     c=0;
     scanf("%d",&tc2);
     for(j=0;j<tc2;j++)
       {  
        scanf("%d",&a[j]);               
       }
       
     for(k=0;k<tc2;k++)
      {
         for(l=0;l<tc2-1;l++)
         {
          if(a[l]>a[l+1]) 
            {                   
              m=a[l];  
              a[l]=a[l+1];
              a[l+1]=m;       
              c++;
            }
                      
         } 
      }
      
       
   printf("Optimal train swapping takes %d swaps.\n",c);                
  }    
    
getch ();    
return 0;    
}
