#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int *a;
    int n, i;
    printf("Enter size: ");
    scanf("%d", &n);
    a = (int *)calloc(n, sizeof(int));
    if (a == NULL) 
    {
        printf("Memory allocation failed\n");
        return 0;
    }
    printf("Array elements (default values):\n");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", a[i]);
    }
    free(a);
    return 0;
}
