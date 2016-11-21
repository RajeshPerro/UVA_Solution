#include<stdio.h>
#include<math.h>
int main()
{

    double i,area,a,b,c,s,r;
    int rn;
  
    
    while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF)
    {
        if(a==0.0 || b==0.0 || c==0.0)
        r=0.0;
        
        else
        {
           s=(a+b+c)/2;
           area=s*(s-a)*(s-b)*(s-c);
           area=sqrt(area);
           r=area/s;
           
       }
       printf("The radius of the round table is: %.3lf\n",r);
    

    }


return 0;
}
 
