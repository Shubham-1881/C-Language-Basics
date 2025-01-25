#include<stdio.h>
void count(char word[30]);
int main()
{
    char word[30];
    printf("Enter any word: ");
    scanf("%[^\n]", word);  // %[^\n] IS USED TO TAKE MULTI VALUE INPUT IN STRING...
    count(word);
    return 0;
}
void count(char word[30])
{
    int total = 0;
    char cc = 'u';      // USED TO FIND THE ASCII VALUES
    for(int i=0; word[i]!= '\0' ; i++)
    {
        if(word[i] == 97  || word[i] == 65 // other way // word[i] == 'a' || word[i] == 'A'
        || word[i] == 101 || word[i] == 69 
        || word[i] == 73  || word[i] == 105 
        || word[i] == 111 || word[i] == 79 
        || word[i] == 117 || word[i] == 85)
        // ABOVE LINE HAS OR OPERATOR WITH ALL THE ASCII VALUE,
        // OF SMALL AND CAPITAL LETTER OF VOWEL
        {
        total++;
        }
    }    
    printf("Total vowels in a word is : %d\n", total);
}