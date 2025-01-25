#include<stdio.h>
int main()
{
    char star = '^';
    char *ptr = &star;
    printf("%p\n", ptr); // %p shows the address in hexadecimal value
    printf("%u\n", ptr); // %u shows the address in decimal value
    ptr++;
    printf("%p\n", ptr);
    printf("%u\n", ptr);
    return 0;
}