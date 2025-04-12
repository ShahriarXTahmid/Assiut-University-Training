#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool isPrime(long long num)
{
    if (num == 1)
    {
        return false;
    }
    for (int i = (int)sqrt(num); i >= 2; i--)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
 
int main()
{
    int cases;
    scanf("%d", &cases);
    while (cases--)
    {
        long long num;
        scanf("%lld", &num);
        if (isPrime(num))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}