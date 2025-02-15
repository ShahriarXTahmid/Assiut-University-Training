#include <stdio.h>
void gcd(int n1, int n2)
{
    int i, GCD;
    for (i = 1; i <= n1 && i <= n2; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            GCD = i;
        }
    }
    printf("%d", GCD);
}
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    gcd(x, y);
    return 0;
}