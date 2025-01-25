#include<stdio.h>
void Square();
void Rectangle();
void Circle();
int main()
{
    char ch;
    printf("Enter 'C' for Circle, \n      'S' for Square, \n      'R' for Rectangle \nto find the area. ");
    scanf("%c", &ch);
    switch(ch)
    {
        case 'C' : Circle(); break;
        case 'R' : Rectangle(); break;
        case 'S' : Square(); break;
        default : printf("Invalid letter.\n");
    }
}
void Circle()
{
    int n;
    printf("Enter the value of Radius.");
    scanf("%d", &n);
    printf("%f\n", 3.14 * n * n);
}

void Rectangle()
{
    int p, q;
    printf("Enter the value of longer side.");
    scanf("%d", &p);
    printf("Enter the value of shorter side.");
    scanf("%d", &q);
    printf("%d\n", 2 * (p + q));
}

void Square()
{
    int x;
    printf("Enter the value of a side.");
    scanf("%d", &x);
    printf("%d\n", 4 * x);
}