#include<stdio.h>
void isTable(int n);

int main()
{
    int n;
    printf("Enter the number, n: ");
    scanf("%d", &n);
    isTable(n); // Argument, Actual Parametre
}

void isTable(int n)  // Parametre, Formal Parametre
{
    int x;
    for (x=1; x<=10; x++)
    {
        printf("%d * %d = %d \n", n, x, n*x);
    }
}