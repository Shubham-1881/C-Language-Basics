#include<stdio.h>
#include<string.h>
struct Student{
    int Roll;
    float CGPA;
    char Name[50];
};
int main()
{
    struct Student s1;
    s1.Roll = 14;
    s1.CGPA = 6.7;
    // s1.Name = "Shubham"; IS INVALID
    strcpy(s1.Name, "Shubham"); 
    printf("Student's Name : %s\n", s1.Name);
    printf("Student's Roll : %d\n", s1.Roll);
    printf("Student's CGPA : %.2f\n", s1.CGPA);
    return 0;
}
// STRINGS WHICH DEFINED BY ARRAY NOTATION [ ARR[10] ], CAN'T BE CHANGED DIRECTLY, YOU CAN COPY THOUGH
// IT IS POSSIBLE WITH CHARACTER POINTERS  [ &ARR    ].