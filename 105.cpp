#include<stdio.h>
 
int main()
{
        int a[100010],l,w,h,i,j,flag;
        freopen("105.txt","r",stdin);
        for(int t=0;t<100010;t++)
        {
                a[t]=0;
        }
        int min=20000;
        int max=0;
while(scanf("%d %d %d",&w,&h,&l)!=EOF)
{
        
 
        for(i=w;i<=l-1;i++)
        {
                if(l>max)
                        max=l;
                if (l<min)
                        min=l;
 
                if(a[i]<h)
                        a[i]=h;
                else
                        continue;
        }
}
 
        for(flag=0,j=0;j<=max;j++)
        {
            
             
                if(a[j] != a[j+1])
                {
                    if(flag==1)
                    {
                      printf(" ");  
                    }
                    if(flag==0)
                    {
                    flag=1;
                    }
                    
                        printf("%d %d",j+1,a[j+1]);
                        
                       
                }
                
        }
         printf("\n");

         
return 0;
}
