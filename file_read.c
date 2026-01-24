#include <stdio.h>
int main() 
{
    FILE *fp;
    int roll;
    char name[20];
    fp = fopen("student.txt", "r");
    if (fp == NULL) 
    {
        printf("File not found\n");
        return 0;
    }
    fscanf(fp, "%d %s", &roll, name);
    printf("Roll: %d\n", roll);
    printf("Name: %s\n", name);
    fclose(fp);
    return 0;
}
