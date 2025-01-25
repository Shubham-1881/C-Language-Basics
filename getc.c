#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("Motorola.txt", "w");
    char ch[15];
    fputc('N', fptr);
    fputc('o', fptr);
    fputc('t', fptr);
    fputc('h', fptr);
    fputc('i', fptr);
    fputc('n', fptr);
    fputc('g', fptr);
    fclose(fptr);
    return 0;
}