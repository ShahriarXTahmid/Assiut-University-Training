#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int compare_chars(const void *a, const void *b)
{
    return (*(char *)a - *(char *)b);
}

int main()
{
    char str[1000001], smallest[1000001];
    scanf("%s", str);
    strcpy(smallest, str);

    int length = strlen(str);
    char split_1[1000001], split_2[1000001], merge[2000001];

    for (int i = 0; i < length - 1; i++)
    {
        strncpy(split_1, str, i + 1);
        split_1[i + 1] = '\0';
        strcpy(split_2, str + i + 1);

        qsort(split_1, strlen(split_1), sizeof(char), compare_chars);
        qsort(split_2, strlen(split_2), sizeof(char), compare_chars);

        strcpy(merge, split_1);
        strcat(merge, split_2);

        if (strcmp(merge, smallest) < 0)
        {
            strcpy(smallest, merge);
        }
    }

    printf("%s", smallest);
    return 0;
}