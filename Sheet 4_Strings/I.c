#include <stdio.h>
#include <string.h>
int main()
{
    char txt[1000001];
    scanf("%s", txt);

    int length = strlen(txt);
    for (int i = 0; i < length / 2; i++)
    {
        if (txt[i] != txt[length - 1 - i])
        {
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");
    return 0;
}