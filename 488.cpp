#include<stdio.h>
#include<conio.h>
int main()
{
     int i,j,k,t,am,fe,m,flag=0;
     scanf("%d",&t);
    
      
     for(m=0;m<t;m++)
     {
          scanf("%d%d",&am,&fe);  
          for(k=0;k<fe;k++)
          {
                    if(flag==1)
                    printf("\n");
                    else
                    flag=1;
                 for(i=1;i<=am;i++)             
                 {               
                      for(j=0;j<i;j++)                          
                      printf("%d",i);
                      printf("\n");               
                  }
          
                 for(i=i-2;i>=1;i--)             
                   {
                         for(j=0;j<i;j++)                          
                         printf("%d",i);
                         printf("\n");             
                   }              
                          
             }
     }
     
getch();     
return 0;     
}
