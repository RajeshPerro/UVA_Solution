#include<stdio.h>
//#include<conio.h>
int main()
	{
		int value,a,sum,i=0,num[100],k,j;
		//freopen("382.txt","r",stdin);
		   
    while(1)
    {
	   scanf("%d",&num[i]);
	   a=num[i];
       i++;
	   if(a==0)
	   break; 	
		
	}
	printf("PERFECTION OUTPUT\n");
		for(j=0;j<i;j++)
			{
	          	sum=0;
	          	k=1;
	          	value=num[j];
	          	if(value==0)
	          		{
						printf("END OF OUTPUT\n");
						break;
					}
				while(k<=value/2)
					{
						if(value%k==0)
						sum+=k;
						k++;
					}		
	          	if(value==sum)
	          	printf("%5d  PERFECT\n",value);
	          	if(value>sum)
	          	printf("%5d  DEFICIENT\n",value);
	          	if(value<sum)
	          	printf("%5d  ABUNDANT\n",value);
	          	
			}

	//getch();
	return 0;
	}
