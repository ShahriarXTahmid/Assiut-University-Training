#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n, digit, a, b, result = 0;
    bool lucky;
    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++)
    {
        n = i;
        lucky = true;
        while (n != 0)
        {
            digit = n % 10;
            if (digit != 4 && digit != 7)
            {
                lucky = false;
                break;
            }
            n = n / 10;
        }
        if (lucky == true)
        {
            printf("%d ", i);
            result++;
        }
    }
    if (result == 0)
    {
        printf("-1");
    }
    return 0;
}