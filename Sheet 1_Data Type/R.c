#include <stdio.h>
int main()
{
    int days, years, months;
    scanf("%d", &days);

    years = days / 365;
    months = (days % 365) / 30;
    days = days - ((years * 365) + (months * 30));

    printf("%d years\n", years);
    printf("%d months\n", months);
    printf("%d days\n", days);
    return 0;
}