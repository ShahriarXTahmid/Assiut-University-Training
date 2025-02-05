#include <stdio.h>
int main()
{
    int n, first;
    scanf("%d", &n);

    if (n > 999 && n <= 9999)
    {
        first = n;
        while (first >= 10)
        {
            first = first / 10;
        }
        if (first % 2 == 0)
        {
            printf("EVEN\n");
        }
        else
        {
            printf("ODD\n");
        }
    }

    return 0;
}