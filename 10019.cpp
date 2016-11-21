#include<stdio.h>
int main()
{
	int T,i,bc,hc,num,a,x;
		scanf("%d",&T);
	for(i=1;i<=T;i++)
	{   bc=0;
	    hc=0;
		scanf("%d",&num);
		int A=num;
		int B=num;
	 while(A!=0)
	 {
	   a=A%2;       
	   A/=2;
	   if(a==1)
		{   
		 bc++;
		}
	 }
     while(B!=0)
        {
        x=B%10;
        if(x==0)
         hc+=0;
        else if (x==1||x==2||x==4||x==8) 
        hc+=1;
        else if (x==3||x==5||x==6||x==9) 
        hc+=2;
        else if(x==7)
         hc+=3;
        B/=10;
        }  
	printf("%d %d\n",bc,hc);
	}
	return 0;
}
