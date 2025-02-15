#include <stdio.h>
int main()
{
    int n, reminder;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        reminder = n % i;
        if (reminder == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}