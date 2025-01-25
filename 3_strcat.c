//STRING CONCATENATION
#include<stdio.h>
#include<string.h>
int main()
{
    char jnote[100] = "Hi, I am Carlos Sainz Jr. "; // it is imp to write the size of a first array...
    char knote[] = "I drive for Scuderia Ferrari F1 Team.";
    strcat(jnote, knote);
    puts(jnote);
    return 0;
}
// strcat means string concatenation, concatenation means merging two strings and storing it into one string.
// meaning of syntax, strcat(first string, second string)