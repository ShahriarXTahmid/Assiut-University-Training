#include <stdio.h>
#include <string.h>
int main()
{
    char x[1000001], y[1000001];
    scanf("%s %s", x, y);

    printf("%zu %zu\n", strlen(x), strlen(y));
    printf("%s%s\n", x, y);

    char temp = x[0];
    x[0] = y[0];
    y[0] = temp;

    printf("%s %s\n", x, y);

    return 0;
}