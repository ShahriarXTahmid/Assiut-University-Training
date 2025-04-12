#include <stdio.h>
void swap(int *num1, int *num2)
{
    int box = *num1;
    *num1 = *num2;
    *num2 = box;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    swap(&a, &b);
    printf("%d %d", a, b);

    return 0;
}