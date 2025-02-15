#include <stdio.h>
int main()
{
    long long int n, i, t;
    scanf("%lld", &t);
    for (i = 1; i <= t; i++)
    {
        long long int fact = 1;
        scanf("%lld", &n);
        for (int j = 1; j <= n; j++)
        {
            fact = fact * j;
        }
        printf("%lld\n", fact);
    }
    return 0;
}