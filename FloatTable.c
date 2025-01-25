#include<stdio.h>
int main()
{
    float n, x, a;
    printf("Enter the value:");
    scanf("%f", &n);
    for(x=1; x<=10; x++)
    {
        printf("%f * %f = %f \n", n, x, n*x);
        // a = n * x;
        // printf("%.2f * %d = %f \n", n, x, a);
    }
    return 0;
}