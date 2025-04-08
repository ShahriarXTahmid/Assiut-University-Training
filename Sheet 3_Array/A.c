#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    if (sum < 0)
    {
        sum = sum*(-1);
    }
    printf("%lld\n", sum);
    return 0;
}