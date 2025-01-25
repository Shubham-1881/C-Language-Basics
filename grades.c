#include<stdio.h>
int main()
{
    int x;
    printf("Enter the marks of the students:");
    scanf("%d", &x);
    if(x >= 90 && x <= 100)
    printf("A+ \n");

    else if(x >= 70 && x < 90)
    printf("A \n");
    
    else if(x >= 30 && x < 70)
    printf("B \n");

    else if(x < 30)
    printf("C \n");

    else 
    printf("INVALID NUMBER \n");
    return 0;
}