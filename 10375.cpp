#include<stdio.h>
int main()
{
    double p,q,r,s,i,j,k,result,result1,result2,sum1,sum2,sum3,sum4,max1,min1,max2,min2;
    
    while(scanf("%lf %lf %lf %lf",&p,&q,&r,&s)!=EOF)
    {
       sum1=1.0,sum2=1.0,sum3=1.0,sum4=1.0;
      
	   if(p-q>=q)
	   {
			max1=p-q;
			min1=q;
			
	   }
	   else
	   {
			max1=q;
			min1=p-q;
	   
		  
	   }
	   
	     
	   if(r-s>=s)
	   {
			max2=r-s;
			min2=s;
			
	   }
	   
	   else
	   {
			max2=s;
			min2=r-s;
	   
		  
	   }
	   
	   for(i=1,j=max1,k=1;i<=p || k<=q;i++)
       {
          if(j<=p)
		   
		  {
			  sum1*=j;
			  j++;

		  }

		  if(k<=q)
		  {
		  
			sum2*=k;
			k++;
		  
		  }
           
          
       }
      
 
	   result1=sum1/sum2;
  
	   for(i=1,j=max2,k=1;i<=r || k<=s;i++)
       {
          if(j<=r)
		   
		  {
			  sum3*=j;
			  j++;

		  }

		  if(k<=s)
		  {
		  
			sum4*=k;
			k++;
		  
		  }
           
          
       }

	  
      

      
        result2=sum3/sum4;
 
       result=result1/result2;
       printf("%.5lf\n",result); 
     }
    
       
return 0;    
}
