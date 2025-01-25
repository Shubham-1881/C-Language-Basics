#include<stdio.h>
void doTable(int table[][10], int n, int number);
int main()
{
    int table[2][10];
    doTable(table, 0, 2);
    doTable(table, 1, 3);

    for(int i=0; i<10; i++)
    {
        printf("%d\t", table[0][i]);
    }
    printf("\n");
    for(int i=0; i<10; i++)
    {
        printf("%d\t", table[1][i]);
    }
    printf("\n");
    return 0;
}

void doTable(int table[][10], int n, int number)
{
    for(int i=0; i<10; i++)
    {
        table[n][i] = number * (i+1);
    }
}