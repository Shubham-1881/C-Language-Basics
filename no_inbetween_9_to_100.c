#include<stdio.h>
int main()
{
    int x;
    printf("Enter the value :");
    scanf("%d", &x);
    printf("%d \n", x>9 && x<100);
    return 0;
}
/*  alternative code after line 7
    int a;
    a = x>9 && x<100;
    printf("%d \n", a);
*/