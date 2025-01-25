#include<stdio.h>
float FtoC();
float CtoF();

int main()
{
    int n, x;
    printf("Enter the number; \n1 for Celsius to Fahrenheit,\n2 for Fahrenheit to Celsius : ");
    scanf("%d", &n);
    printf("Enter the value:");
    scanf("%d", &x);
    switch(n)
    {
        case 1 : CtoF(x); break;
        case 2 : FtoC(x); break;
        default : printf("Not Available..."); break;
    }
}

float FtoC(int x)
{
    float C = (x - 32) * (5.0/9.0);
    printf("The Final Answer is : %.2f\n", C);
}

float CtoF(int x)
{
    float F = (x * (9.0/5.0)) + 32;
    printf("The Final Answer is : %.2f\n", F);
}