#include<stdio.h>
int main()
{
    int n, i, count = 0;
    printf("Enter the value:");
    scanf("%d", &n);
    // 0 and 1 are not prime numbers;
    for(i=1; i<=n; i++)
    {
        if (n%i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    printf("%d, is a prime number.\n", n);
    else
    printf("%d, is not a prime number.\n", n);
    return 0;
}
// for prime numbers, there are only 2 factors, 1 and the no. itself;
// thus any extra factor will make that number non-prime number;
// thus non-prime number would have more than 2 factors;