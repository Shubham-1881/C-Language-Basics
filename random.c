#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("Motorola.txt", "r");
    if (fptr == NULL) {
        printf("File not found or unable to open.\n");
        return 1;
    }
    char ch[150];
    fscanf(fptr, "%[^\n]", ch);
    printf("%s\n", ch);
    fclose(fptr);
    return 0;
}