#include <stdio.h>
#include <math.h>
int main()
{
    int x, count = 0;
    scanf("%d", &x);
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            count++;
            break;
        }
    }
    if (count == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}