//STRING COPY
#include<stdio.h>
#include<string.h>
int main()
{
    char newstr[15] = "Hello";
    char oldstr[15] = "Moto";
    strcpy(newstr, oldstr); // here the value of OLDSTR gets copied into NEWSTR
    puts(newstr);
    return 0;
}