#include<stdio.h>
int main()
{
    int x, n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    int sum = 0;
    for(x = 0; x <= n; x++)
    {
        sum += x;  // sum = sum + x;
    }
    printf("The sum of 1 to n is: %d \n", sum);
    return 0;
}
//    firstly initialise your pre defined values like sum = 0;