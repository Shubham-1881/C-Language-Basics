#include<stdio.h>
int main()
{
    float side;
    printf("Enter the value of the side : ");
    scanf("%f", &side);
    
    printf("The Area of Square is : %f \n", side * side * side);
    return 0;
    /*  It can also be represented as after line 6;
        float area = side * side * side ;
        printf("The Area of Square is : %f \n", area);
    */
}