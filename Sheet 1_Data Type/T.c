#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int array[] = {a, b, c};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    printf("%d\n%d\n%d\n", array[0], array[1], array[2]);
    printf("\n");
    printf("%d\n%d\n%d\n", a, b, c);

    return 0;
}