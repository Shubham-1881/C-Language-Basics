#include<stdio.h>
#include<string.h>
struct Student{
    char Name[50];
    int Roll;
    float CGPA;
};

int main()
{
    struct Student s1 = {"Shubham", 55, 6.7652};
    struct Student s2 = {"Naitil", 14, 5.4778};
    struct Student s3 = {"Henish", 11, 8.5223};
    
    // Student 1
    printf("Student's Name : %s\n", s1.Name);
    printf("Student's Roll : %d\n", s1.Roll);
    printf("Student's CGPA : %.2f\n\n", s1.CGPA);
    //Student 2
    printf("Student's Name : %s\n", s2.Name);
    printf("Student's Roll : %d\n", s2.Roll);
    printf("Student's CGPA : %.2f\n\n", s2.CGPA);
    //Student 3
    printf("Student's Name : %s\n", s3.Name);
    printf("Student's Roll : %d\n", s3.Roll);
    printf("Student's CGPA : %.2f\n\n", s3.CGPA);
    return 0;
}