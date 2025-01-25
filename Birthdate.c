#include <stdio.h>
int main() 
{
    int date, year, month;
    
    printf("Enter your date: ");
    scanf("%d", &date);
    
    printf("Enter your month (1-12): ");
    scanf("%d", &month);
    
    printf("Enter your year: ");
    scanf("%d", &year);

    printf("The Final Date is: %d ", date);

    switch (month) 
    {
        case 1: printf("January "); break;
        case 2: printf("February "); break;
        case 3: printf("March "); break;
        case 4: printf("April "); break;
        case 5: printf("May "); break;
        case 6: printf("June "); break;
        case 7: printf("July "); break;
        case 8: printf("August "); break;
        case 9: printf("September "); break;
        case 10: printf("October "); break;
        case 11: printf("November "); break;
        case 12: printf("December "); break;
        default: break;
    }
    printf("%d\n", year);
    return 0;
}
/*
    Here take input of date, month, year from the user;
    then print date with one space after, apply switch, then print year;
    BOOM, you will get the output like
    "12 March 2016"
*/