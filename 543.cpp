#include<stdio.h>
#include<math.h>
#define size 100000
int main()
{
        
    long int i,j,k,n,a[size],b,c,e,f;
          
          for(i=0;i<size;i++)
              a[i]=1;
          for(i=2;i<=sqrt(size);i++)
          {
              if(a[i]==1)
              {
                 for(j=i+i;j<size;j+=i)
                  {
                     a[j]=0;
                  }          
              }
                   
           }
         
    while(scanf("%ld",&n))
    {
   
          if(n == 0)
             break;
     
                    
          for( i = 2; i <= n; i++ )
          {
               if( a[i] )
               {
                   j = n - i;
                   if( a[j] )    
                       break;
               }
          }
          printf("%ld = %ld + %ld\n",n,i,j);
          
  }
   

return 0;
   }
