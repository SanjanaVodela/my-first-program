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
    printf("Student Records:\n");
    while (fscanf(fp, "%d %s", &roll, name) != EOF) 
    {
        printf("Roll: %d Name: %s\n", roll, name);
    }
    fclose(fp);
    return 0;
}
