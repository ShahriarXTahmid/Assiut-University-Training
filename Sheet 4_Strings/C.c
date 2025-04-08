#include <stdio.h>
#include <string.h>

int main()
{
    char x[1000001], y[1000001];
    scanf("%s %s", x, y);

    int size_x = strlen(x);
    int size_y = strlen(y);
    int size_min = size_x < size_y ? size_x : size_y;
    int flag = 0;

    for (int i = 0; i < size_min; i++)
    {
        if (y[i] > x[i])
        {
            printf("%s\n", x);
            flag = 0;
            break;
        }
        else if (y[i] < x[i])
        {
            printf("%s\n", y);
            flag = 0;
            break;
        }
        else
        {
            flag = -1;
        }
    }

    if (flag == -1)
    {
        if (size_x < size_y)
        {
            printf("%s\n", x);
        }
        else
        {
            printf("%s\n", y);
        }
    }

    return 0;
}