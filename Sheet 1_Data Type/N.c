#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);

    int ascii;
    ascii = (int)ch;

    if (ascii >= 64 && ascii <= 90)
    {
        ascii = ascii + 32;
        printf("%c", ascii);
    }

    else if (ascii >= 97 && ascii <= 122)
    {
        ascii = ascii - 32;
        printf("%c", ascii);
    }
    return 0;
}