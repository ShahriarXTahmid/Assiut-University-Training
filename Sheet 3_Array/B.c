#include <stdio.h>
int main()
{
    long long int n, pos = 0, m;
    scanf("%lld", &n);
    long long int a[n];
    for (long long int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }
    scanf("%lld", &m);
    for (long long int i = 0; i < n; i++)
    {
        if (m == a[i])
        {
            pos = i;
            break;
        }
        else
        {
            pos = -1;
        }
    }
    printf("%lld", pos);

    return 0;
}