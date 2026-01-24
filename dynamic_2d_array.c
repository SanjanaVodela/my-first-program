#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int **a;
    int i, j, r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    a = (int **)malloc(r * sizeof(int *));
    for (i = 0; i < r; i++) 
    {
        a[i] = (int *)malloc(c * sizeof(int));
    }
    printf("Enter elements:\n");
    for (i = 0; i < r; i++) 
    {
        for (j = 0; j < c; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Matrix:\n");
    for (i = 0; i < r; i++) 
    {
        for (j = 0; j < c; j++) 
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < r; i++) 
    {
        free(a[i]);
    }
    free(a);
    return 0;
}
