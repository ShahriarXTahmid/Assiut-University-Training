#include <stdio.h>
#include <math.h>
int main()
{
    int i, n, count = 0;
    scanf("%d", &n);

    for (i = 2; i <= n; i++)
    {
        count=0;
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}