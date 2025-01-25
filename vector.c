#include<stdio.h>
#include<string.h>
typedef struct vector{
    int x;
    int y;
} add ;
// ADD TWO VECTORS, STORE IT INTO ANOTHER VECTOR, v[2] = v[0] + v[1];
int main()
{
    add v[3];
    add v0, v1, v2;
    for(int i=0; i<2; i++)
    {
        printf("Enter value of x in vector %d : ", i+1);
        scanf("%d", &v[i].x);
        printf("Enter value of y in vector %d : ", i+1);
        scanf("%d", &v[i].y);
    }
    v2.x = v[0].x + v[1].x;
    v2.y = v[0].y + v[1].y;
    printf("\n");
    printf("The Final Sum is...\n");
    printf("%d for X-axis and %d for Y-axis\n", v2.x, v2.y);
    return 0;
}