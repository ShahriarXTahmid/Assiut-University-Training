#include <stdio.h>
void print(int n, char ch)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%c ", ch);
    }
}
int main()
{
    int n, t;
    char ch;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %c", &n, &ch);
        print(n, ch);
        printf("\n");
    }

    return 0;
}