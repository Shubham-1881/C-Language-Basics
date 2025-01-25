// house no, block, city, state 5 people
#include<stdio.h>
#include<string.h>
typedef struct address{ // TYPEDEF IS USED TO GIVE NICKNAME TO STRUCT 
    int houseno;
    char block;
    char city[15];
    char state[15];
} add ;                 // HERE 'add' IS USED AS SHORTCUT NAME;
int main()
{
    add P[5];
    for(int j=0; j<5; j++)
    {
        printf("Enter the value of person %d\n", j+1);
        printf("Enter person's House no. : ");
        scanf("%d", &P[j].houseno);
        printf("Enter person's Block : ");
        scanf(" %c", &P[j].block);
        printf("Enter person's City : ");
        scanf("%s", P[j].city);
        printf("Enter person's State : ");
        scanf("%s", P[j].state);
    }
    printf("\n");
    for(int i=0; i<5; i++)
    {
        // printf("Person %d's House No. : %d\n", i+1, P[i].houseno);
        // printf("Person %d's : %c\n", i+1, P[i].block);
        // printf("Person %d's : %s\n", i+1, P[i].city);
        // printf("Person %d's : %s\n\n", i+1, P[i].state);
        printf("Person %d's House Address : %d, %c, %s, %s\n", i+1, P[i].houseno, P[i].block, P[i].city, P[i].state);
    }
    return 0;
}