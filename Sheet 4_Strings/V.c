#include <stdio.h>
#include <string.h>
int main()
{
    char str[1001];
    scanf("%s", str);
    int length = strlen(str);

    for (int i = 0; i < length; i++)
    {
        if (i + 4 < length &&
            str[i] == 'E' &&
            str[i + 1] == 'G' &&
            str[i + 2] == 'Y' &&
            str[i + 3] == 'P' &&
            str[i + 4] == 'T')
        {
            printf(" ");
            i += 4;
        }
        else
        {
            printf("%c", str[i]);
        }
    }

    return 0;
}