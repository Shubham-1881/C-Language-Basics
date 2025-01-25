#include<stdio.h>
int main()
{
    int marks[5] = {70, 80, 90, 100, 120}, i;
    int *ptr = marks; // OR, int *ptr = &marks[0]; 
    for(i=0; i<5 ; i++)
    {
        printf("%d\n", *ptr);
        ptr++;
    }
    return 0;
}