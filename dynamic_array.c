#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int *a;
    int n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    a = (int *)malloc(n * sizeof(int));
    if (a == NULL) 
    {
        printf("Memory allocation failed\n");
        return 0;
    }
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }
    printf("Array elements are:\n");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", a[i]);
    }
    free(a);
    return 0;
}
