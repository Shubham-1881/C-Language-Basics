#include<stdio.h>
#include<math.h>
int IsSquare(int x);
int main()
{
    int x, y;
    printf("Enter the value of x:");
    scanf("%d", &x);
    y = IsSquare(x);
    printf("The final answer is:%d\n", y);
}
int IsSquare(int x)
{
    int y;
    y = pow(x,2);
    return y;
}