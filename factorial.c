#include<stdio.h>
int main()
{
    int i, n, fact;
    printf("Enter the value:");
    scanf("%d", &n);
    fact = 1;
    for(i=n; i>=1; i--) // [i = i-1] = [i -= 1] =[i--]
    {
        fact = fact * i;
    }
    printf("%d \n", fact);
    return 0;
}