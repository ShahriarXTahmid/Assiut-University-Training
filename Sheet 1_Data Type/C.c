#include <stdio.h>
int main()
{
    long long int x, y, sum, multi, sub;
    scanf("%lld %lld", &x, &y);

    sum = x + y;
    multi = x * y;
    sub = x - y;

    printf("%lld + %lld = %lld\n", x, y, sum);
    printf("%lld * %lld = %lld\n", x, y, multi);
    printf("%lld - %lld = %lld\n", x, y, sub);

    return 0;
}