#include <stdio.h>
int main()
{
    long long int n, m, sum = 0;
    while (scanf("%lld %lld", &n, &m))
    {
        long long int max = 0, min = 0;

        if (n <= 0 || m <= 0)
        {
            break;
        }
        max = (n > m) ? n : m;
        min = (n < m) ? n : m;
        for (int i = min; i <= max; i++)
        {
            printf("%d ", i);
            sum = sum + i;
        }
        printf("sum =%lld\n", sum);
        sum = 0;
    }
    return 0;
}