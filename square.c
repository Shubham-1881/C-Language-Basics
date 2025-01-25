#include<stdio.h>
#include<math.h>
void IsSquare(int x);
int main()
{
    int x, y;
    printf("Enter the value of x:");
    scanf("%d", &x);
    IsSquare(x);
}
void IsSquare(int x)
{
    int y;
    y = pow(x,2);
    printf("The final answer is:%d\n", y);
}