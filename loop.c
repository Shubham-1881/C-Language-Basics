#include<stdio.h>
void print(char arr[]);
int main()
{
    char fname[] = "Shubham";
    char lname[] = "Kanani";
    print(fname);
    print(lname);
    return 0;
}
void print(char arr[])
{
    for(int i=0; arr[i] != '\0' ;i++) 
    {
        printf("%c", arr[i]);
    }
    printf("\n");
}
// condition in loop is 'run the loop till the element is not equal to "\o". '