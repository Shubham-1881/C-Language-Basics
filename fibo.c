#include<stdio.h>
int main()
{
    int n;
    printf("Enter n for fibonacci series. NOTE(n>2): ");
    scanf("%d", &n);
    int Fib[n];
    Fib[0] = 0;
    Fib[1] = 1;
    for(int i=2; i<=n; i++)
    {
        Fib[i] = Fib[i-1] + Fib[i-2];
    }
    printf("The series goes by...\n");
    for(int i=0; i<n; i++)
    {
        printf("%d\t", Fib[i]);
    }
    printf("\n");
    return 0;
}