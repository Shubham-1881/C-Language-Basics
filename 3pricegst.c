#include<stdio.h>
int main()
{
    float price[3], final, total;
    printf("Enter the price of Bread: ");
    scanf("%f", &price[0]);
    printf("Enter the price of Jam: ");
    scanf("%f", &price[1]);
    printf("Enter the price of Butter: ");
    scanf("%f", &price[2]);
    total = price[0] + price[1] + price[2];
    printf("The final amount is : %.2f\n", total + (total*(0.18)));
    printf("Abki bar 400 par...\n");
}