#include <stdio.h>
long long int binary(long long int num)
{
    long long int bin = 0, rem = 0, place = 1;
    while (num != 0)
    {
        rem = num % 2;
        num = num / 2;
        bin = bin + (rem * place);
        place = place * 10;
    }
    return bin;
}
long long int reverse(long long int n)
{
    long long int rem = 0, sum = 0;
    while (n != 0)
    {
        rem = n % 10;
        sum = sum * 10 + rem;
        n = n / 10;
    }
    return sum;
}
int main()
{
    long long int n, bin, rev;
    scanf("%lld", &n);
    bin = binary(n);
    rev = reverse(bin);
    printf("%lld\n", bin);
    printf("%lld\n", rev);
    if (bin == rev && n % 2 != 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}