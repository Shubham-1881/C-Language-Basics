#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("Motorola.txt", "r");
    char ch[150];
    fscanf(fptr, "%[^\n]", ch); // scaning means reading data or taking an input
    printf("%s\n", ch);
    fclose(fptr);
    return 0;
}