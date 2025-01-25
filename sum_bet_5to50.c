#include<stdio.h>
int main()
{
    int i, n, sum;
    sum = 0;
    for(i=5; i<=50; i++)
    {
        sum = sum + i;
    }
    printf("%d \n", sum);
    return 0;
}