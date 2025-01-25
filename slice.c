#include<stdio.h>
#include<string.h>
void slice(char str[], int n, int m);
int main()
{
    char str[50] = "Philadelphia 6ers";
    int n = 12, m = 5;
    slice(str, 8, 4);
    return 0;
}
void slice(char str[], int n, int m)
{
    char newstr[50];
    int i, j;
    for(i=m, j=0; i<=n; i++, j++)
    {
        newstr[j] = str[i];
    }
    newstr[j]='\0';  // DONE TO TERMINATE THE STRING.
    puts(newstr);
}
//IF NOT USED LINE 19 THEN THE PROGRAM WILL RUN UNTIL EVERY SPACE IN AN ARRAY GETS USED OR EXECUTED.
