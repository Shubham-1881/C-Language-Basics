
#include<stdio.h>
int main()
{
    int n, m;
    printf("Enter no. of array element: ");
    scanf("%d", &n);

    int arr1[n];
    printf("Enter values of array element: \n");

    for(int i=0; i<n; i++)
    {
        printf("%d index :", i);
        scanf("%d", &arr1[i]);
    }

    int arr2[n];
    for(int i=0; i<n; i++)
    {
        int j = (n-1) - i;
        arr2[j] = arr1[i];
    }

    printf("Original Array.\n");
    for(int i=0; i<n; i++)
    {
        printf("%d\t", arr1[i]);
    }
    
    printf("\nReversed Array.\n");
    for(int j=0; j<n; j++)
    {
        printf("%d\t", arr2[j]);
    }
    printf("\n");
    return 0;
}