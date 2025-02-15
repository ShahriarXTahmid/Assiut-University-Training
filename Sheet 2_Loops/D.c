#include <stdio.h>
int main()
{
    long long int password, x = 1;

    while (x != 0)
    {
        scanf("%lld", &password);
        if (password == 1999)
        {
            printf("Correct");
            x = 0;
        }
        else
        {
            printf("Wrong");
        }
        printf("\n");
    }
    return 0;
}