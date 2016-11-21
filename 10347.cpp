#include<stdio.h>
#include<math.h>
int main()
{
    double s,a,b,c,area;
    int ar;
    while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF)
    {
             if(a+b>c && a+c>b && b+c>a)
             {
               s=(a+b+c)/2;
               area=sqrt(s*(s-a)*(s-b)*(s-c));        
               area=(4*area)/3;
             }
             else
               area=-1.000;
    
               printf("%.3lf\n",area);
                  
                     
    }
    
    



return 0;    
}
