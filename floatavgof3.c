#include<stdio.h>
int main()
{
    float a, b, c;
    printf("Enter the value of a :");
    scanf("%f", &a);
    
    printf("Enter the value of b :");
    scanf("%f", &b);
    
    printf("Enter the value of c :");
    scanf("%f", &c);
    
    printf("The Average of a, b, c is : %f \n", (a+b+c)/3);
    return 0;
}