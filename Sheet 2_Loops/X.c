#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        long long int count = 0, n;
        scanf("%lld", &n);
        while (n != 0)
        {
            int last_digit = n % 2;
            if (last_digit % 2 == 1)
            {
                count++;
            }
            n = n / 2;
        }
        int place = 0, dec = 0;
        for (int j = 1; j <= count; j++)
        {
            dec = dec + (pow(2, place));
            place++;
        }
        printf("%d\n", dec);
    }
    return 0;
}