#include <stdio.h>
int main()
{
    int a, b;
    char s;
    scanf("%d %c %d", &a, &s, &b);

    switch (s)
    {
    case '+':
        printf("%d", a + b);
        break;

    case '-':
        printf("%d", a - b);
        break;

    case '*':
        printf("%d", a * b);
        break;
        
    case '/':
        printf("%d", a / b);
        break;
    }

    return 0;
}
