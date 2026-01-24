#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int *a;
    int n, i, new_size;
    printf("Enter initial size: ");
    scanf("%d", &n);
    a = (int *)malloc(n * sizeof(int));
    printf("Enter elements:\n");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }
    printf("Enter new size: ");
    scanf("%d", &new_size);
    a = (int *)realloc(a, new_size * sizeof(int));
    printf("Array after realloc:\n");
    for (i = 0; i < new_size; i++) 
    {
        printf("%d ", a[i]);
    }
    free(a);
    return 0;
}
