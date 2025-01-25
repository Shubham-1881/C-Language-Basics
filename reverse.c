#include<stdio.h>
int main()
{
    int arr1[6] = {16, 5, 55, 63, 14, 18};
    int arr2[6];
    for(int i=0; i<6; i++)
    {
        int j = 5 - i;
        arr2[j] = arr1[i];
    }
    printf("Original Array.\n");
    for(int i=0; i<6; i++)
    {
        printf("%d\t", arr1[i]);
    }
    printf("\nReversed Array.\n");
    for(int j=0; j<6; j++)
    {
        printf("%d\t", arr2[j]);
    }
    printf("\n");
    return 0;
}