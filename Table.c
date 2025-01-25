#include<stdio.h>
int main()
{
    int n, x, a;
    printf("Enter the number:");
    scanf("%d", &n);
    for(x=1; x<=10; x++)
    {
            printf("%d * %d = %d \n", n, x, n*x);
            // a = n * x;
            // printf("%d * %d = %d \n", n, x, a);
    }
    return 0;
}