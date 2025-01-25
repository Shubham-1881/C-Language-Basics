#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter the value of a :");
    scanf("%d", &a);
    printf("Enter the value of b :");
    scanf("%d", &b);
    (a>b) ? printf("%d \n", b) : printf("%d \n", a);
    return 0;
}
//  (condition) ? doThis if True : doThis if False;