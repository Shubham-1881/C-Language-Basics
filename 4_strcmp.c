// STRING COMPARE
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[15] = "hhht";
    char str2[15] = "hhha";
    printf("%d\n", strcmp(str1, str2)); // here the value of STR1 gets compared with STR2
    return 0;
}
// here the comparison is done on the basis of ASCII value stored in an array
// "0" means the strings (values) are equal 
// positive means the FIRST > SECOND (compares in terms of ASCII values)
// negative means the FIRST < SECOND (compares in terms of ASCII values)