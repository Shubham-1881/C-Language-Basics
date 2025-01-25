#include<stdio.h>
#include<string.h>
struct Student{
    char Name[50];
    int Roll;
    float CGPA;
};

int main()
{
    struct Student s[3] = { {"Shubham", 55, 6.7652},
                            {"Naitik", 14, 5.4778},
                            {"Henish", 11, 8.5223}
                            };
    
    for(int i=0; i<3; i++)
    {
        printf("Student's Name : %s\n", s[i].Name);
        printf("Student's Roll : %d\n", s[i].Roll);
        printf("Student's CGPA : %.2f\n\n", s[i].CGPA);
    }
    return 0;
}