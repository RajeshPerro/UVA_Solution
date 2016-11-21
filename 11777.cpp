#include<stdio.h>
#include<algorithm>

using namespace std;

int main()
{
int t,t1,t2,f,a,c[5],i,j,c_avg,total;
scanf("%d",&t);
for(i=0;i<t;i++)
{
scanf("%d %d %d %d %d %d %d",&t1,&t2,&f,&a,&c[0],&c[1],&c[2]);
sort(c,c+3);
c_avg=(c[1]+c[2])/2;
total=t1+t2+f+a+c_avg;

if(total>=90)
printf("Case %d: A\n",i+1);
if(total>=80 && total<90)
printf("Case %d: B\n",i+1);
if(total>=70 && total<80)
printf("Case %d: C\n",i+1);
if(total>=60 && total<70)
printf("Case %d: D\n",i+1);
if(total<60)
printf("Case %d: F\n",i+1);

}
return 0;
}
