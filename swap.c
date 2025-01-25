#include<stdio.h>
int swap();

int main()
{
    int a, b;
    printf("Enter the value of a:");
    scanf("%d", &a);
    printf("Enter the value of b:");
    scanf("%d", &b);
    printf("before swapping, value of a and b are: %d and %d\n", a, b);
    swap(a, b);
    return 0;
}
// Call by Value Function
int swap(int a, int b)
{
    int c = a;
    a = b;
    b = c;
    printf("after swapping, value of a and b are: %d and %d\n", a, b);
}