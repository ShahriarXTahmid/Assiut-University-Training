#include <stdio.h>
#include <string.h>
int main()
{
    char first[1000000], second[1000000];
    scanf("%s %s", first, second);
    printf("%zu %zu\n", strlen(first), strlen(second));
    printf("%s %s\n", first, second);
    return 0;
}