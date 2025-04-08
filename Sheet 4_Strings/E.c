#include <stdio.h>
#include <string.h>
int main()
{
    char x[1000001];
    scanf("%s", x);

    int count = 0;
    for (int i = 0; i < strlen(x); i++)
    {
        count += (x[i] - '0');
    }

    printf("%d", count);
    return 0;
}