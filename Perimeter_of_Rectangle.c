#include<stdio.h>
int main()
{
    float a, b;
    printf("Enter the value of the a : ");
    scanf("%f", &a);

    printf("Enter the value of the b : ");
    scanf("%f", &b);
    
    printf("The Perimeter of Rectangle is : %f \n", 2 * (a + b));
    return 0;
    /*  It can also be represented as after line 6;
        float p = 2 * (a + b);
        printf("The Perimeter of Rectangle is : %f \n", p);
    */
}