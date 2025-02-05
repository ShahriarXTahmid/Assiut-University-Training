#include <stdio.h>
int main()
{
    long long int a, b, c, max, min;
    scanf("%lld %lld %lld", &a, &b, &c);

    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    min = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);

    printf("%lld %lld", min, max);
    return 0;
}
