#include<stdio.h>
#include<math.h>
int main()
{
	long int a,b,num1,num2,c,i,sqre;
	while(scanf("%ld%ld",&a,&b)==2)
	{
		if( a == 0 && b == 0 ) break;
       num1=sqrt(a);
	   num2=sqrt(b);
	   for(c=0,i=num1;i<=num2;i++)
	   {
		   sqre=pow(i,2);
		   if(sqre >= a && sqre <= b)
			   c++;
		   if( sqre > b)
			   break;   
	   }
	   printf("%ld\n",c);
	}
return 0;
}