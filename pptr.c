#include<stdio.h>
int main()
{
    float price = 118.00;
    float *ptr = &price;
    float **pptr = &ptr;
    printf("%f\n", **pptr);
    return 0;
}
// Here * represents the value of the address stored in a pointer;
// Here & represents the address of any variable;
// pptr is pointer stored in a pointer 