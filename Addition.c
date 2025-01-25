#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter the value of a : ");
    scanf("%d", &a);
    
    printf("Enter the value of b : ");
    scanf("%d", &b);
    
    int sum = a + b;
    printf("The sum is : %d \n", sum);
    return 0;
    //  We can also use a + b directly in the line 12 instead of sum, Thus
    /*  It can also be represented by this after line 9,
    
        printf("The sum is : %d \n", a + b);
        return 0;
    */
}