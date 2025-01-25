#include<stdio.h>
// Declaration of Function
void Namaste();
void Bonjour();

int main()
{
    char ch;
    printf("Enter your Nationality.\n'I' for Indian and 'F' for French.\n");
    scanf("%c", &ch);
    if(ch == 'I')
    Namaste(); // Function Call
    else if(ch == 'F')
    Bonjour(); // Function Call
    else
    printf("Why are you Gay?\n");
    return 0;
}
void Namaste() // Function Definition
{
    printf("Namaste.\n");
}
void Bonjour() // Function Definition
{
    printf("Bonjour.\n");
}