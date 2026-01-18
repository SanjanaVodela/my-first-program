#include <stdio.h>
#include <string.h>
int main() 
{
    char s1[50], s2[50];
    printf("Enter first string: ");
    scanf("%s", s1);
    printf("Enter second string: ");
    scanf("%s", s2);
    if (strcmp(s1, s2) == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");
    return 0;
}
