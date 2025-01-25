#include<stdio.h>
int main()
{
    int A;
    printf("Enter the value of A : ");
    scanf("%d", &A);
    int X;
    X = A % 2 == 0; 
    printf("%d \n", X);
    return 0;
}
//Modulus(%) returns the remainder after operation
// '==' checks whether the value is equal or not