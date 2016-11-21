// 10104 - Euclid Problem
// 09.12.2011
#include<stdio.h>
long int x, y, d;
void extEuclid(long int m, long int n);
int main()
{
    long int a, b;

    while(scanf("%ld %ld", &a, &b)!=EOF)
    {
        extEuclid(a,b);
        printf("%ld %ld %ld\n", x, y, d);
    }

    return 0;
}
void extEuclid(long int m, long int n)
{
    long int c;
    if(n == 0)
    {
        x = 1;
        y = 0;
        d = m;
        return;
    }
    extEuclid(n,m%n);
    c = x - (m/n)*y;
    x = y;
    y = c;
}
