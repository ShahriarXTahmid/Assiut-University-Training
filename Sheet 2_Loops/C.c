#include <stdio.h>
#define max 1000000
int x[max];

int main()
{
    signed int n;
    int i, j;
    int even =0, odd =0, positive =0, negative = 0;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }

    for (j = 0; j < n; j++)
    {
        if (x[j] % 2 == 0)
        {
            even++;
        }
        else 
        {
            odd++;
        }
        if (x[j] > 0)
        {
            positive++;
        }
        else if (x[j] < 0)
        {
            negative++;
        }
    }

    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);
    return 0;
}