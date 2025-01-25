// STRING LENGTH
#include<stdio.h>
#include<string.h>
void pass(char name[25]);

int main()
{
    char name[25];
    fgets(name, 25, stdin);
    // int count = 0;
    // for(int i = 0; name[i] != '\0'; i++)
    // {
    //     count++;
    // }
    // count = count - 1;
    // printf("The length of the user's name is : %d\n", count);
    pass(name);
    return 0;
}
void pass(char name[25])
{
    int a = strlen(name);
    a--; // HERE a-- IS USED BECAUSE STRLEN() FUNCTION DOESN'T REMOVE THE NULL CHARACTER BY ITSELF.
    printf("%d\n", a);
}