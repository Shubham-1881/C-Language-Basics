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
    add P[5] ={  {12, 'A', "Surat", "Gujarat"},  // IMPLEMENTATION
                            {14, 'C', "Anand", "Gujarat"},
                            {8, 'B', "Rajkot", "Gujarat"},
                            {95, 'D', "Bardoli", "Gujarat"},
                            {1, 'A', "Surat", "Gujarat"}};
    for(int i=0; i<5; i++)
    {
        printf("Person's House No. : %d\n", P[i].houseno);
        printf("Person's : %c\n", P[i].block);
        printf("Person's : %s\n", P[i].city);
        printf("Person's : %s\n\n", P[i].state);
    }
    return 0;
}