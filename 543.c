#include<stdio.h>
#include<conio.h>
#include<math.h>
#define SIZE 10000001
int prime[SIZE + 1];
int main()
{
    int j,i,n,k;
 
    for(i=2;i<=SIZE;i++)
    {
       prime[i]=1;
    }
    for(i=2;i<=sqrt(SIZE);i++)
    {
        if(prime[i]==1)
        {
           for(j = i+i; j <= SIZE; j=j+i )
           {
                 prime[j]=0 ;
                 
                
           }
           
        }        
}
  while( scanf("%d",&n))
       {
        if(n==0)
        break; 
     for(i=2;i<=SIZE;i++)
     {
      if(prime[i]==1)
      j=n-i;
      if(prime[j]==1)
      break;
     }  
   printf("%d = %d + %d\n",n,i,j);
}
getch();   
return 0;    
}

    
