#include<stdio.h>
int main()
{
    int n;
    for(n=5; n<=50; n++)
    {
        if(n%2 == 0)
        continue;
        else 
            printf("%d \n", n);
    }
    return 0;
}
// continue is used to skip an output,
// here we have to print odd numbers thus we continue(skip) even numbers;