#include<stdio.h>
int sum(int x, int y);
int main()
{
    int a, b;
    printf("Enter first number:");
    scanf("%d", &a);
    printf("Enter second number:");
    scanf("%d", &b);
    printf("Final answer is %d\n", sum(a,b));
}
int sum(int x, int y)
{
    return x + y;
}