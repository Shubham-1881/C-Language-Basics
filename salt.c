#include<stdio.h>
#include<string.h>
void salting(char pass[]);
int main()
{
    char pass[50] ;
    salting(pass);
    return 0;
}
void salting(char pass[])
{
    char salt[] = "123";
    char newpass[100];
    printf("Enter your password: ");
    scanf("%[^\n]", pass);      
    strcpy(newpass, pass);
    strcat(newpass, salt);
    printf("after salting...\n");
    puts(newpass);
}
// %[^\n] IS USED TO TAKE MULTI VALUE INPUT (STRING) FROM THE USER IN C. 