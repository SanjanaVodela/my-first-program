#include <stdio.h>
/* Function without arguments and without return value */
void add() 
{
    int a, b;
    printf("Enter two numbers for addition: ");
    scanf("%d %d", &a, &b);
    printf("Sum = %d\n", a + b);
}
/* Function with arguments and return value */
int multiply(int a, int b) 
{
    return a * b;
}
int main() {
    int x, y, result;
    add();   // calling add function
    printf("Enter two numbers for multiplication: ");
    scanf("%d %d", &x, &y);
    result = multiply(x, y);
    printf("Multiplication = %d\n", result);
    return 0;
}
