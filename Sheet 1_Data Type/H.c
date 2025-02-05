#include <stdio.h>
#include <math.h>
int main()
{
    int A, B;
    scanf("%d %d", &A, &B);

    printf("floor %d / %d = %d\n", A, B, (int)floor((double)A / B));
    printf("ceil %d / %d = %d\n", A, B, (int)ceil((double)A / B));
    printf("round %d / %d = %d\n", A, B, (int)round((double)A / B));

    return 0;
}