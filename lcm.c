#include <stdio.h>
int main() 
{
    int a, b, i, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    while(1)
    {
        if (i % a == 0 && i % b == 0) 
        {
            lcm = i;
            break;
        }
        i++;
    }
    printf("LCM = %d\n", lcm);
    return 0;
}
