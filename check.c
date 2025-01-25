#include<stdio.h>
void check(char word[30]);
int main()
{
    char word[30];
    printf("Enter any word: ");
    scanf("%[^\n]", word);  // %[^\n] IS USED TO TAKE MULTI VALUE INPUT IN STRING...
    check(word);
    return 0;
}
void check(char word[30])
{
    int total = 0;
    char letter[3];
    printf("Enter the character here: ");
    scanf(" %c", &letter);      //  SPACE IS USED BEFORE %c AS IT REMOVES WHITESPACE AND ERRORS
    letter[1] = '\0';
    char cc = 'u'; 
    for(int i=0; word[i]!= '\0' ; i++)
    {
        if(word[i] == *letter)
        {
        total++;
        }
    }    
    printf("Total time character present in a word is : %d\n", total);
}