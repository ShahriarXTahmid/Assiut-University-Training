#include <stdio.h>
int main()
{
    int n, count = 0;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= 10)
        {
            printf("A[%d] = %d\n", i, a[i]);
        }
        else
        {
           continue;
        }
        count++;
    }

    return 0;
}