#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
	{
		long double num,n2;
	 long  n1,i;
		while(scanf("%Lf",&num)!=EOF)
			{      
				if(num==0)
				break;
				//for(i=1;i<=num;i++)
				while(num)
				{   //i=1;
					n1=long(sqrt(num));
					n2=sqrt(num);
					if(n1==n2)
					{
						printf("yes\n");
					}
					else
					{
						printf("no\n");
					}
					//i++;
				}
		   	  	
			
			}	
	getch();
	return 0;	
	}
