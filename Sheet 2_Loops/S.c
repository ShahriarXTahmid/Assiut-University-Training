#include <stdio.h>
int main()
{
    int x, y, sum = 0, test;
    for(scanf("%d", &test); test!=0; test--)
    {
        scanf("%d %d", &x, &y);
        int min = (x < y) ? x : y;
        int max = (x > y) ? x : y;
        for (int i = min + 1; i <= max - 1; i++)
        {
            if (i % 2 != 0)
            {
                sum = sum + i;
            }
        }
        printf("%d\n", sum);
        sum = 0;
    }
    return 0;
}