#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int *a, n, i, sum = 0;
    printf("Enter size: ");
    scanf("%d", &n);
    a = (int *)malloc(n * sizeof(int));
    if (a == NULL) 
    {
        printf("Memory allocation failed\n");
        return 0;
    }
    printf("Enter elements:\n");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("Sum = %d\n", sum);
    free(a);
    return 0;
}
