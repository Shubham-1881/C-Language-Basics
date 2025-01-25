#include<stdio.h>
void GST(float n);

int main()
{
    float n;
    printf("Enter the value of n :");
    scanf("%f", &n);
    GST(n);
    return 0;
} 

void GST(float n)
{
    n = n + (0.18 * n);
    printf("The Final amount is : %f\n", n);
}