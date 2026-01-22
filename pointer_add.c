#include <stdio.h>
int main() 
{
    int a, b;
    int *p, *q;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    p = &a;
    q = &b;
    printf("Sum = %d\n", *p + *q);
    return 0;
}
