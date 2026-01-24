#include <stdio.h>
struct student 
{
    int roll;
    float marks;
};
int main() 
{
    struct student s;
    struct student *p;
    p = &s;
    printf("Enter roll and marks: ");
    scanf("%d %f", &p->roll, &p->marks);
    printf("Roll: %d\n", p->roll);
    printf("Marks: %.2f\n", p->marks);
    return 0;
}
