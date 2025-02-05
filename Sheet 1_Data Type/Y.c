#include <stdio.h>
int main() {
    unsigned long long a, b, c, d;
    scanf("%llu %llu %llu %llu", &a, &b, &c, &d);

    unsigned long long result = (a % 100) * (b % 100) % 100;
    result = (result * (c % 100)) % 100;
    result = (result * (d % 100)) % 100;

    printf("%02llu\n", result);
    return 0;
}
