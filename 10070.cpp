#include<stdio.h>
#include<conio.h>
int main()
	{
	int y;
	while(scanf("%d",y)!=EOF)
	 	{
			if(y>=2000)
				{
					 if(y%4==0||y%400==0&&y%100==0)
					printf("This is leap year.\n");
					else if(y%15==0)
					printf("This is huluculu festival year.\n");
					break;
				//	else if(y%55==0)
					//printf("This is Bulukulu festival year.\n");
				//	break;
				//	else
				//	printf("This is an ordinary year.");
		     	}
				else
					printf("This is an ordinary year.");
				
		}	
	getch();	
	return 0;	
	}
