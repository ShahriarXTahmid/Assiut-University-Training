#include <stdio.h>
int main()
{
    int temp, num, sum = 0, rem;
    scanf("%d", &num);

    temp = num;
    while (temp != 0)
    {
        rem = temp % 10;
        sum = sum * 10 + rem;
        temp = temp / 10;
    }

    if (num == sum)
    {
        printf("%d\nYES", sum);
    }
    else
    {
        printf("%d\nNO", sum);
    }

    return 0;
}