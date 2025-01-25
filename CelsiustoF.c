#include<stdio.h>
float Fahr();

int main()
{
    int x;
    printf("Enter the no. of Celsius:");
    scanf("%d", &x);
    float final = Fahr(x);
    printf("The Fahrenheit is : %f\n", final);
}

float Fahr(int x)
{
    float n = (x * (9.0/5.0)) + 32;
    return n;
}