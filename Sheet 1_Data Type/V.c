#include <stdio.h>
int main()
{
    int a, b;
    char s;
    scanf("%d %c %d", &a, &s, &b);

    switch (s)
    {

    case '<':
    {
        if (a < b)
        {
            printf("Right");
        }
        else
        {
            printf("Wrong");
        }
        break;
    }
    case '>':
    {
        if (a > b)
        {
            printf("Right");
        }
        else
        {
            printf("Wrong");
        }
        break;
    }
    case '=':
    {
        if (a == b)
        {
            printf("Right");
        }
        else
        {
            printf("Wrong");
        }
        break;
    }
    }
    return 0;
}