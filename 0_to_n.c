#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    // for(int x=0; x<=n; x++)
    // { printf("%d \n", x); }
    int x = 0;
    while (x<=n)
    {
        printf("%d \n", x);
        x++;
    }
    return 0;
}
/*
    Syntax for While Loop;
    
    initialisation ;
    while(condition)
    {
        doThis;
        updation;
    }
*/