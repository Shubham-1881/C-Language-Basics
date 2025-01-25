#include<stdio.h>
int main()
{
    int n;
    do
    {
        printf("Enter value: ");
        scanf("%d", &n);
        printf("%d", n);
        if (n % 7 != 0)
        {
            printf(", Not divisible by 7.\n");
        }
        else if (n % 7 == 0)
        {
            printf(", Divisible by 7.\n");
            break;
        }
    }while(1);
    return 0;
}