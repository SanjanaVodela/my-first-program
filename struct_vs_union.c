#include <stdio.h>
struct student 
{
    int roll;
    float marks;
    char grade;
};
union data 
{
    int roll;
    float marks;
    char grade;
};
int main() 
{
    printf("Size of structure: %lu\n", sizeof(struct student));
    printf("Size of union: %lu\n", sizeof(union data));
    return 0;
}
