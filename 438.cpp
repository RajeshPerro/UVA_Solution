#include<stdio.h>
#include<math.h>
#include<conio.h>
#define PI 3.141592653589793
int main()
	{
	  double x1,x2,x3,y1,y2,y3,area,radius,s,a,b,c,circum;
	  freopen("438.txt","r",stdin);
      while(scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3)!=EOF)
       {
              a=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
              b=sqrt(pow((x2-x3),2)+pow((y2-y3),2));
              c=sqrt(pow((x3-x1),2)+pow((y3-y1),2));
              s=(a+b+c)/2;
              area=sqrt(s*(s-a)*(s-b)*(s-c));
              radius=a*b*c/(4*area);
              circum=2*PI*radius;
           
              printf("%0.2lf\n",circum);  
      }
   
		
	getch();
	return 0;	
	}
