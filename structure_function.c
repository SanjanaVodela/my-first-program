#include <stdio.h>
struct student 
{
    int roll;
    float marks;
};
void display(struct student s) 
{
    printf("Roll: %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);
}
int main() 
{
    struct student s1;
    printf("Enter roll and marks: ");
    scanf("%d %f", &s1.roll, &s1.marks);
    display(s1);
    return 0;
}
