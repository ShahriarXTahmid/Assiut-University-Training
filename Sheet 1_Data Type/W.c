#include <stdio.h>
#include <math.h>
int main()
{
    int a, b;
    long long int c;
    char s, q;

    scanf("%d %c %d %c %lld", &a, &s, &b, &q, &c);

    if (a >= 0 && a <= 100 && b >= 0 && b <= 100 && c >= -pow(10, 5) && c <= pow(10, 5))
    {

        switch (s)
        {
        case '+':
        {
            if (a + b == c)
            {
                printf("Yes");
            }
            else
            {
                printf("%d", a + b);
            }
            break;
        }
        case '-':
        {
            if (a - b == c)
            {
                printf("Yes");
            }
            else
            {
                printf("%d", a - b);
            }
            break;
        }
        case '*':
        {
            if (a * b == c)
            {
                printf("Yes");
            }
            else
            {
                printf("%d", a * b);
            }
            break;
        }
        }
    }

    return 0;
}