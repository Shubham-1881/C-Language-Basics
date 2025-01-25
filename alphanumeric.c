#include<stdio.h>
int main()
{
    int x, n;
    char ch;
    printf("Enter the value of n:");
    scanf("%d", &n);
    for(x = 1, ch = 'A'; x<=n && ch <= 'Z'; x++, ch++)
    {
        printf("%d \n%c \n", x, ch);
    }
    return 0;
}