#include <stdio.h>
int main()
{
    long long int x, num, test, rem;
    scanf("%lld", &test);
    for (int i = 0; i < test; i++)
    {
        scanf("%lld", &x);
        num = x;
        if (x == 0)
        {
            printf("0 ");
        }
        else
        {
            while (num != 0)
            {
                rem = num % 10;
                num = num / 10;
                printf("%lld ", rem);
            }
        }
        printf("\n");
    }
    return 0;
}