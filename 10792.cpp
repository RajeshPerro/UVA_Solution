#include<stdio.h>
#include<math.h>
int main()
{
    int i, j, testCase, t, r, d, h1;
    double h2, a, b, c, ab;
    scanf("%d", &testCase);
    for(t = 1; t <= testCase; t++)
    {
        scanf("%d%d%d", &r, &d, &h1);
        ab = 2 * sqrt(pow(r,2) - pow(r-d,2));
        a = asin((r-h1)/double(r));
        b = asin((r-d)/double(r));
        h2 = h1 + ab*sin(a-b) + pow(10,-9);
        printf("Case %d: %0.4lf\n",t, h2);
    }

    return 0;
}
