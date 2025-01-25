#include<stdio.h>
int main()
{
    char name[6];
    printf("Enter your name:");
    for(int i = 0; i < 5; i++)
    {
        scanf(" %c", &name[i]);
    }
    name[5] = '\0';
    printf("%s\n", name);
    return 0;
}