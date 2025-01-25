#include<stdio.h>
int main()
{
    int a, n, d, x;
    printf("Enter the value of first number:");
    scanf("%d", &a);

    printf("Enter the value of nth term:");
    scanf("%d", &n);
    
    printf("Enter the difference:");
    scanf("%d", &d);

    x = a + (n-1) * d;
    printf("The value of nth term is :%d \n", x);
    return 0;
}