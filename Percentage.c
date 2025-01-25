#include<stdio.h>
float Per();

int main()
{
    float x = Per();
    printf("The Final Result is : %.2f\n", x);
}

float Per()
{
    float a, b, c;
    printf("Enter the marks of Science : ");
    scanf("%f", &a);
    printf("Enter the marks of Maths : ");
    scanf("%f", &b);
    printf("Enter the marks of Sanskrit : ");
    scanf("%f", &c);
    float x = (a + b + c)/3.0;
    return x;
}