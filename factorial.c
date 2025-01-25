#include<stdio.h>
int fact(int n);

int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    int total = fact(n);
    printf("The final value is:%d\n", total);
}

int fact(int n)
{
    if(n == 1)
    {
        return 1;
    }
    int total1 = fact(n-1);
    int total = total1 * n;
    return total;
}