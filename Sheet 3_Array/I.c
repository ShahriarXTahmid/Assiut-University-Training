#include <stdio.h>
int main()
{
    long long int t, n;
    scanf("%lld", &t);
    for (long long int k = 1; k <= t; k++)
    {
        scanf("%lld", &n);
        long long int a[n], b[n];
        for (long long int i = 0; i < n; i++)
        {
            scanf("%lld", &a[i]);
        }

        for (long long int i = 0; i < n; i++)
        {
            for (long long int j = i + 1; j < n; j++)
            {
                b[i] = a[i] + a[j] + (j - i);
            }
        }
        long long int min = b[0];
        for (long long int i = 1; i < n; i++)
        {
            if (min > b[i])
            {
                min = b[i];
            }
        }
        printf("%lld", min);
    }
    return 0;
}