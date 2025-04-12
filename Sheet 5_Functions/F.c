#include <stdio.h>
#include <math.h>
long long int equation(int a, int b)
{
    long long int sum = 0;
    for (int i = 2; i < b; i = i + 2)
    {
        sum = sum + pow(a, i);
    }
    return sum;
}
int main()
{
    long long int a, b, sum;
    scanf("%lld %lld", &a, &b);
    sum = equation(a, b);
    printf("%lld", sum);

    return 0;
}
