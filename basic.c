#include<stdio.h>
int main()
{
    int age = 19;
    int *ptr = &age;
    int _age = *ptr;
    printf("%d\n", _age);
    return 0;
}
// Here * represents the value of the address stored in a pointer;
// Here & represents the address of any variable;
// pptr is pointer stored in a pointer 