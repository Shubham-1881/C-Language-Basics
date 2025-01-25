#include<stdio.h>
int main()
{
    int n;
    do
    {
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("%d", n);
        if (n % 2 == 0)
        {
            printf(", The number is even.\n");
        }
        else if (n % 2 == 1)
        {
            printf(", The number is odd.\n");
            break;
        }
    } while (1);
    return 0;
}
// here do while loop is used, because here while running loop we have to take every input from the user. 