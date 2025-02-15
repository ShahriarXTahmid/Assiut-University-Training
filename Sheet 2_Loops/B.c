
#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if (a > 1)
    {
        for (int i = 2; i <= a; i = i + 2)
        {
            printf("%d\n", i);
        }
    }
    else
    {
        printf("-1");
    }
 
    return 0;
}