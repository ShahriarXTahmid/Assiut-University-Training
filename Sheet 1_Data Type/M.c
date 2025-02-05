#include <stdio.h>
int main()
{
    char a;
    int ascii;
    scanf("%c", &a);

    ascii = (int)a;
    if (ascii >= 48 && ascii <= 57)
    {
        printf("IS DIGIT\n");
    }
    
    else if (ascii >= 64 && ascii <= 90)
    {
        printf("ALPHA\nIS CAPITAL");
    }

    else if (ascii >= 97 && ascii <= 122)
    {
        printf("ALPHA\nIS SMALL");
    }

    return 0;
}