#include<stdio.h>
int main()
{
    int n, i, count = 0;
    printf("Enter the value:");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        if (n%i == 0)
        {
            count++; // [count++] = [count = count + 1]
        }
    }
    if (count == 2)
    printf("%d, is a prime number.\n", n);
    else 
    printf("%d, is a non-prime number.\n", n);
    return 0;
}