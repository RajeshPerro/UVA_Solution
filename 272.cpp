 #include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,n,t,f,l,k, newLine = 0;
    //freopen("488.txt","r",stdin);
    //freopen("out.txt", "w", stdout );
    scanf("%d",&t);
    for( l = 0; l < t; l++ )
    {
        scanf("%d",&n);
        scanf("%d",&f);
        
        for( k = 0; k < f; k++ )
        {
            if( newLine )  printf("\n");
            else newLine = 1; 
            
            for( i = 1; i <= n; i++ )
            {
                 for( j = 1; j <= i; j++ )
                 {
                      printf("%d",i);
                 }
                 printf("\n");
            }
            for( i = n-1; i >= 1; i-- )
            {
                 for( j=1 ; j <= i; j++ )
                 {
                     printf("%d",i);                    
                 }                 
              //   if( i > 1 )
                     printf("\n");  
            }
       }
    }
  
  
    getch();
    return 0;    
}
