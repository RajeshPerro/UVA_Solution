#include<stdio.h>
#include<math.h>
int main()
    {
    long double n,i,root;
        
        while(scanf("%Lf",&n))
            { 
            if(n==0)
                break;
            root=sqrt(n);
            i=int(root);
        
            if(root==i)
            {
                printf("yes\n");
            }
            else
                printf("no\n");
            }

    return 0;    
    }
