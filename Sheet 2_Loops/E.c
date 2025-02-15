#include <stdio.h>
int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int ary[n];

    for (int k = 0; k < n; k++)
    {
        scanf("%lld", &ary[k]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - 1); j++)
        {
            if (ary[j] > ary[j + 1])
            {
                int temp = ary[j];
                ary[j] = ary[j + 1];
                ary[j + 1] = temp;
            }
        }
    }
    printf("%lld", ary[n-1]);

    return 0;
}