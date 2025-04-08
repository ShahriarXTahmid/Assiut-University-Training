#include <stdio.h>
#include <string.h>
int main()
{
    int size;
    scanf("%d", &size);

    char str[size + 1];
    scanf("%s", str);

    char temp = str[0];
    int counter = 1;

    for (int i = 1; i < size; i++)
    {
        if (str[i] != temp)
        {
            counter++;
            temp = str[i];
        }
    }

    printf("%d", counter);
    return 0;
}