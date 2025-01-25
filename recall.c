#include<stdio.h>
#include<string.h>
struct student{
    char name[50];
    int roll;
    float cgpa;
};
int main()
{
    struct student s1 = {"Shubham", 55, 6.7652};
    struct student *ptr = &s1;
    printf("Student's ID : %d\n", (*ptr).roll);  // OR  ptr->roll
    return 0;
}
// RECALL WITH THE HELP OF POINTER IN STRUCTURE