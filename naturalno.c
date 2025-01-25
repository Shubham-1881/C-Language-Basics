#include<stdio.h>
int main()
{
    int x;
    printf("Enter the value of X:");
    scanf("%d", &x);

    if(x >= 1)
    printf("given no. is a natural no. \n");
    else
    printf("given no. is NOT a natural no. \n");
    return 0;
}