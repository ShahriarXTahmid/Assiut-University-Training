#include <stdio.h>
int main()
{
    long long int n, m, rem1, rem2, sum;
    scanf("%lld %lld", &n, &m);

    rem1 = n % 10;
    rem2 = m % 10;
    sum = rem1 + rem2;

    printf("%lld", sum);

    return 0;
}