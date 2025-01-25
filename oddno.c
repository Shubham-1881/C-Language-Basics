#include<stdio.h>
int main()
{
    int k;
    printf("Enter the no. of array elements : ");
    scanf("%d", &k);
    int arr[k], n=0;

    printf("Enter the value of array elements.\n");
    for(int i=0; i<k; i++)
    {
        printf("%d index :", i);
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<k; i++)
    {
        if (arr[i]%2 == 1)
        {
            n++;
        }
        else if (arr[i]==1)
        {
            n++;
        }
    }
    printf("Total no. of odd no. are : %d\n", n);
    return 0;
}