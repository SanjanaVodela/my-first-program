#include <stdio.h>
int main() 
{
    char str[] = "Hello";
    char *p = str;
    printf("String using pointer:\n");
    while (*p != '\0') 
    {
        printf("%c", *p);
        p++;
    }
    return 0;
}
