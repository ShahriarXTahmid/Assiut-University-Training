#include <stdio.h>
#include <string.h>

int main()
{
    int cases;
    scanf("%d", &cases);

    while (cases--)
    {
        char value[101];
        scanf("%s", value);

        int size = strlen(value);
        if (size > 10)
        {
            printf("%c%d%c\n", value[0], size - 2, value[size - 1]);
        }
        else
        {
            printf("%s\n", value);
        }
    }

    return 0;
}