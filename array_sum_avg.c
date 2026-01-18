#include <stdio.h>
int main() 
{
    int a[10], i, n, sum = 0;
    float avg;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    avg = sum / (float)n;
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);
    return 0;
}
