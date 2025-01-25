#include<stdio.h>
int Sum(int n);

int main()
{
    int n;
    printf("enter the value of n:");
    scanf("%d", &n);

    int sum = Sum(n);
    printf("%d\n", sum);
    return 0;
}

int Sum(int n)
{
    if(n == 1)
    {
        return 1;
    }
    int sum1 = Sum(n-1);
    int sum = sum1 + n;
    return sum;
}