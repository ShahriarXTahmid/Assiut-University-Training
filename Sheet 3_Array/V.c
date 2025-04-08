#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n, m, *arr, i;

  scanf("%d %d", &n, &m);

  arr = (int *)malloc(n * sizeof(int));

  int freq[m + 1];
  for (i = 1; i <= m; i++)
    freq[i] = 0;

  for (i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  for (i = 0; i < n; i++)
    freq[arr[i]]++;

  for (i = 1; i <= m; i++)
    printf("%d\n", freq[i]);

  free(arr);

  return 0;
}