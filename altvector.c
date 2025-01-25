#include<stdio.h>
#include<string.h>
typedef struct vector{
    int x;
    int y;
} add ;
// ADD TWO VECTORS, STORE IT INTO ANOTHER VECTOR, v[2] = v[0] + v[1];
int main()
{
    add v0 = {3,4};
    add v1 = {7,8};
    add v2 = {0};
    
    v2.x = v0.x + v1.x;
    v2.y = v0.y + v1.y;
    printf("The Final Sum is...\n");
    printf("%d for X-axis and %d for Y-axis\n", v2.x, v2.y);
    return 0;
}