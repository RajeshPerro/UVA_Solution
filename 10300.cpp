 #include<stdio.h>
int main()
{
    long int i,j,t,area,farmer,animal,en_friend,premium;
    while(scanf("%ld",&t)!=EOF)
    {
        for(i=0;i<t;i++)
        {
           premium=0;                 
           scanf("%ld",&farmer);
           for(j=0;j<farmer;j++)           
           {
                                   
              scanf("%ld %ld %ld ", &area, &animal, &en_friend);                                                   
              premium+=(area*en_friend);
                                   
          }
          printf("%ld\n",premium);             
        }    
   
    }
    return 0;
}
