#include<stdio.h>
int main()
{
    int n, m, i, j, count;
    printf("Initial value of range:");
    scanf("%d", &n);
    printf("Final value of range:");
    scanf("%d", &m);
    for(i=n; i<=m; i++)
    {
        count = 0;
        for(j=1; j<=i; j++)
        {
            if (i%j == 0)
                count++; // [count++] = [count = count + 1]
        }
        if (count == 2)
        printf("%d \n", i);
    }
    return 0;
}
// during nested loop don't fail to connect loops,
// i.e, in outer loop i=n, then in inner loop i connect it by in the condition j<=i;
// in the outer loop we gave the number sequentially given by the user to inner loop;
// in the inner loop we check whether the given number is a prime number or not;
// and while completing the task in the inner loop we put IF ELSE condition whether the given is has more than 2 factor, if so then print the number;