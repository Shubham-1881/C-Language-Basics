#include<stdio.h>
int main()
{
    int x, n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    x = (n/2)*(2 + (n-1));
    printf("The sum of n is: %d \n", x);
    return 0;
}