#include<stdio.h>
int main()
{
    int isMonday = 0;
    int isRaining = 1;
    printf("%d \n", isMonday || isRaining);
    return 0;
}
//  alternate code for line 7, 
//  printf("%d \n", isMonday || isRaining == 1);
//  || stands for OR operator