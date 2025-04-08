#include <stdio.h>
#include <string.h>

int main()
{
    int cases;
    scanf("%d", &cases);

    while (cases--)
    {
        char txt1[1001], txt2[1001];
        scanf("%s %s", txt1, txt2);

        int size1 = strlen(txt1);
        int size2 = strlen(txt2);
        int min_size = size1 < size2 ? size1 : size2;

        for (int i = 0; i < min_size; i++)
        {
            printf("%c%c", txt1[i], txt2[i]);
        }

        if (size1 > size2)
        {
            for (int i = min_size; i < size1; i++)
            {
                printf("%c", txt1[i]);
            }
        }
        else
        {
            for (int i = min_size; i < size2; i++)
            {
                printf("%c", txt2[i]);
            }
        }

        printf("\n");
    }

    return 0;
}