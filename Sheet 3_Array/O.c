#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    long long int a[100];
    a[0] = 0;
    a[1] = 1;
    for (int i = 2; i < 100; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
    }
    printf("%lld", a[n - 1]);

    return 0;
}