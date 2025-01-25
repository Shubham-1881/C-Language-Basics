#include<stdio.h>
void Namaste();
void Bonjour();
int main()
{
    char ch;
    printf("Enter your nationality.\n'I' for Indian and 'F' for French.");
    scanf("%c", &ch);
    switch(ch)
    {
    case 'I' : Namaste(); break;
    case 'F' : Bonjour(); break;
    default : printf("Hello!\n"); break;
    }
}
void Namaste()
{
    printf("Namaste\n");
}
void Bonjour()
{
    printf("Bonjour\n");
}