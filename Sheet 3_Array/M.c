#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    int max = a[0], min = a[0];
    int max_pos = 0, min_pos = 0;
    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
            max_pos = i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
            min_pos = i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i == max_pos)
        {
            printf("%d ", min);
        }
        else if (i == min_pos)
        {
            printf("%d ", max);
        }
        else
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}