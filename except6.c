#include<stdio.h>
int main()
{
    int n;
    for(n=1; n<=10; n++)
    {
        if (n == 6)
        continue; //continue is used to skip an output
        else 
        {
            printf("%d \n", n);
        }
    }
    return 0;
}