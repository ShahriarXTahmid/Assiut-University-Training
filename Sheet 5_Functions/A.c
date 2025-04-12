#include <stdio.h>
int sumof(int a, int b)
{
    return a + b;
}

int main()
{
    int a, b, sum;
    scanf("%d %d", &a, &b);
    sum = sumof(a, b);
    printf("%d", sum);

    return 0;
}