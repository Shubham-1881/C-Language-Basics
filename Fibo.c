#include<stdio.h>
int Fibo();

int main()
{
    int n;
    printf("Enter the amount of n : ");
    scanf("%d", &n);
    int x = Fibo(n);
    printf("The final answer is : %d\n", x);
}

int Fibo(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else if(n == 1)
    {
        return 1;
    }
    int Fib1 = Fibo(n-1);
    int Fib2 = Fibo(n-2);
    int Fib = Fib1 + Fib2;
    return Fib;
}