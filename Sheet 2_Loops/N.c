#include <stdio.h>

int main()
{
    char s;
    int i, j, n, x[1000];
    scanf("%c", &s);
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }
    switch (s)
    {
    case '+':
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < x[i]; j++)
            {
                printf("+");
            }
            printf("\n");
        }
        break;
    case '-':
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < x[i]; j++)
            {
                printf("-");
            }
            printf("\n");
        }
        break;
    case '*':
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < x[i]; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        break;
    case '/':
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < x[i]; j++)
            {
                printf("/");
            }
            printf("\n");
        }
        break;
    }

    return 0;
}
