#include<stdio.h>
int main()
{
    float radius;
    printf("Enter the value of radius : ");
    scanf("%f", &radius);
    
    float area = 3.14 * radius * radius ;
    printf("The Area of Circle is : %f \n", area);
    return 0;
    /*  It can also be represented as after line 6;
        printf("The Area of Square is : %f \n", radius * radius * 3.14);
    */
}