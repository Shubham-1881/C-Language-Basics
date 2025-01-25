#include<stdio.h>
#include<math.h>
int main()
{
    int a, b;
    printf("Enter the value of a :");
    scanf("%d", &a);
    printf("Enter the value of b :");
    scanf("%d", &b);
    if(a>b)
    {
        printf("The smaller no is :%d \n", b);
    }
    else
    {
        printf("The smaller no is :%d \n", a);
    }
    return 0;
}
/*  WE CAN ALSO USE TERNARY OPERATOR WHEN WE HAVE ONLY ONE LINE TO PRINT
    (condition) ? doThis if True : doThis if False;
    IT GOES LIKE THIS AFTER LINE 9
    (a>b) ? printf("%d", b) : printf("%d", a);
        ? means check if
        : means nahi to (otherwise)
*/