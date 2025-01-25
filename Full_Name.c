#include<stdio.h>
int main ()
{
    char Fname[15], Mname[15], Lname[15]; 
    printf("Enter your First Name : ");
    scanf("%s", &Fname);

    printf("Enter your Middle Name : ");
    scanf("%s", &Mname);

    printf("Enter your Last Name : ");
    scanf("%s", &Lname);

    printf("Entered Name: %s %s %s \n", Fname, Mname, Lname);
    return 0;
    //  Here %s is used because it invokes string and %c invokes the first character only
    //  Here " %s %s %s " is used to represent Fname, Mname, Lname respectively
}