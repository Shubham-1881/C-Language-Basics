#include<stdio.h>
#include<string.h>
typedef struct complex{
    int real;
    int image;
} comp ;
int main()
{
    comp C1 = {8,5};
    comp *ptr = &C1;
    printf("The Final Sum is...\n");
    printf("%d for Real No. and %d for Imaginery No. : \n", ptr->real, ptr->image);
}