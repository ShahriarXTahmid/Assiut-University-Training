#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000001];
    char test[] = "hello";
    char temp[6] = {0};
    int index = 0;

    scanf("%s", str);

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == test[index])
        {
            temp[index] = str[i];
            index++;
            if (index == 5)
                break;
        }
    }

    if (strcmp(temp, test) == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}