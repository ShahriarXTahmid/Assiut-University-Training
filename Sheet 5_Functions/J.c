#include <stdio.h>
double Average(double arr[], int size)
{
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        scanf("%lf", &arr[i]);
        sum += arr[i];
    }
    return sum / size;
}

int main()
{
    int size;
    scanf("%d", &size);
    double arr[size];
    printf("%.8lf", Average(arr, size));
    return 0;
}