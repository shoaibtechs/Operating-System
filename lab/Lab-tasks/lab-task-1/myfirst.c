#include <stdio.h>
#include <stdlib.h>


int main()
{
    char name[20];
    printf("Enter name: ");
    scanf("%s", name);
    printf("Your name is %s.", name);

    system("mkdir test ");
    system("ls");
    system("rmdir test");
    return 0;
}