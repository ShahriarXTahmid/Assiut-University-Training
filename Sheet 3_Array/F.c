#include <stdio.h>
void rev(long long int array[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        long long int temp = array[n - 1 - i];
        array[n - 1 - i] = array[i];
        array[i] = temp;
    }
}
int main()
{
    int n, found = 0;
    scanf("%d", &n);
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }
    rev(a, n);
    for (int i = 0; i < n; i++)
    {
        printf("%lld ", a[i]);
    }
    return 0;
}