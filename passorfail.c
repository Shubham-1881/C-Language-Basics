#include<stdio.h>
int main()
{
    int x;
    printf("Enter the marks of the student:");
    scanf("%d", &x);
    (x >= 30) ? printf("Pass \n") : printf("Fail \n");
    return 0;
}
//  Condition for Ternary Operator;
//  1. if else condition is must;
//  2. only one command should be applied;
//
//  Syntax for Ternary Operator;
//  (condition) ? doThis ifTrue : doThis ifFalse ;