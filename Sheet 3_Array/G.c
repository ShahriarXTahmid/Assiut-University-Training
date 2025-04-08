#include <stdio.h>
int main()
{
    int n, found = 0;
    scanf("%d", &n);
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0, j = n - 1; i < n; i++, j--)
    {
        b[i] = a[j];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            found = 1;
            break;
        }
    }
    if (found == 1)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
    return 0;
}