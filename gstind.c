#include<stdio.h>
int main()
{
    float price[3], final, total, afterprice[3];
    printf("Enter the price of Bread: ");
    scanf("%f", &price[0]);
    printf("Enter the price of Jam: ");
    scanf("%f", &price[1]);
    printf("Enter the price of Butter: ");
    scanf("%f", &price[2]);
    afterprice[0] = price[0] + (price[0]*.18);
    afterprice[1] = price[1] + (price[1]*.18);
    afterprice[2] = price[2] + (price[2]*.18);
    printf("Final price of Bread: %.2f\n", afterprice[0]);
    printf("Final price of Jam: %.2f\n", afterprice[1]);
    printf("Final price of Butter: %.2f\n", afterprice[2]);
    total = afterprice[0] + afterprice[1] + afterprice[2];
    printf("The final amount is : %.2f\n", total);
    printf("Abki bar 400 par...\n");
}