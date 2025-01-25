#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character:");
    scanf("%c", &ch);
    
    if(ch >= 'A' && ch <= 'Z')
    printf("given character is in uppercase. \n");
    else if(ch >= 'a' && ch <= 'z')
    printf("given character is in lowercase. \n");
    else
    printf("given character is not an Alphabet. \n");
    return 0;
}
// every letter in an alphabet are associated with unique ASCII values;
// doesn't matter if its lowercase or uppercase;
// for ex. ASCII value of 'a' is 97, whereas for 'A' its 65;
// thus if I use char variable in conditions like;
// (ch >= 'a') OR (ch >= '97')
// both are same.
// ASCII stand for American Standard Code for Information Interchange.