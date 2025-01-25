#include<stdio.h>
int main()
{
    int number[5], i, j;
    int *ptr = &number[0];
    printf("Enter the number of 5 players.\n");
    for(i=0; i<5; i++)
    {
        printf("%d index :", i);
        scanf("%d", &number[i]); // AO (ptr+i);
    }
    for(i=0; i<5; i++)
    {
        printf("%d index = %d\n", i, number[i]); // AO *(ptr+i);
    }
    return 0;
}