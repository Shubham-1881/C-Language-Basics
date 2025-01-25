#include<stdio.h>
#include<string.h>
typedef struct complex{
    int real;
    int image;
} comp ;
int main()
{
    comp C[2];
    comp sum, C0, C1;
    comp *ptr = &sum;
    for(int i=0; i<2; i++)
    {
        printf("Enter value of Real No. for C%d : ", i+1);
        scanf("%d", &C[i].real);
        printf("Enter value of Imaginery No. for C%d : ", i+1);
        scanf("%d", &C[i].image);
    }
    sum.real = C[0].real + C[1].real;
    sum.image = C[0].image + C[1].image;
    printf("\n");
    printf("The Final Sum is...\n");
    printf("%d for Real No. and %d for Imaginery No. : \n", ptr->real, ptr->image);
}