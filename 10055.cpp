#include<stdio.h>
int main()
{
    double a,b;
    while(scanf("%lf%lf",&a,&b)!=EOF)
    {
      if(a<=b)
      printf("%.0lf\n",b-a);                        
      else
      printf("%.0lf\n",a-b);                        
    }
    
return 0;    
}
