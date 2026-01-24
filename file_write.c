#include <stdio.h>
int main() 
{
    FILE *fp;
    int roll;
    char name[20];
    fp = fopen("student.txt", "w");
    if (fp == NULL) 
    {
        printf("File not opened\n");
        return 0;
    }
    printf("Enter roll and name: ");
    scanf("%d %s", &roll, name);
    fprintf(fp, "%d %s", roll, name);
    fclose(fp);
    printf("Data written to file successfully\n");
    return 0;
}
