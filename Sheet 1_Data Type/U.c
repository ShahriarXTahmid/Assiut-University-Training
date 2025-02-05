#include <stdio.h>
int main()
{
    float n;
    scanf("%f", &n);

    if (n == (int)n)
    {
        printf("int %d", (int) n);
    }

    else
    {
        int a = (int)n;
        float dec = n - a;
        printf("float %d %.3f", a, dec);
    }

    return 0;
}