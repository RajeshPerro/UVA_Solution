#include<stdio.h>
int main()
{
long int N;
while(scanf("%ld",&N)==1)
{
if(N==0) break;
if(N >=101)
printf("f91(%ld) = %ld\n",N,N-10);
else
printf("f91(%ld) = 91\n",N);
}
return 0;
}