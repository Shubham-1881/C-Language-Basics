#include<stdio.h>
int main()
{
    char Name[18];
    fgets(Name, 18, stdin);
    puts(Name);
    // scanf("%s", Name);
    // printf("Your name is: %s\n", Name);
    return 0;
}
// Here fgets and puts are used to take input and output of multi-strings value
// Syntax of fgets, fgets(string name, string size, 'stdin');
// Syntax of puts, puts(string name);