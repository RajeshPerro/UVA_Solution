#include<stdio.h>

int main()
{

  long long int  a,b,max,i,j,n,c,e,f;
  while( scanf("%lld%lld",&a,&b)!=EOF)
    {
        e=a,f=b;

        if(e>f)
        {   
              c=e;
              e=f;
              f=c;   
   
              max=0; 
              for(i=e;i<=f;i++)
              { 
                  n=i,j=1;
                  while(n!=1)
                  {
                    if(n%2==0)         
                    n=n/2;
                    else
                    n=3*n+1;
                    j++;
                  }               
                  max=(max>j)?max:j;               
              }
              printf("%lld %lld %lld\n",a,b,max);
          }

        else
          {   
 
              max=0; 
              for(i=e;i<=f;i++)
              { 
                  n=i,j=1;
                  while(n!=1)
                  {
                      if(n%2==0)         
                      n=n/2;
                      else
                      n=3*n+1;
                      j++;
                  }               
                  max=(max>j)?max:j;               
                   
              }

              printf("%lld %lld %lld\n",a,b,max);
      }

}
//getch(); 
return 0;   
}
