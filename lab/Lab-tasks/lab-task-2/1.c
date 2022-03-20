#include<stdio.h>
#include<stdlib.h>
#include<cstring>

int main(int argc,char *argv[]){

if (strcmp(argv[1], "show date")==0)

{
    system("date");
    
}
    
if (strcmp(argv[1], "show directory")==0)
{
        system("ls");
    
}
    return 0;


if (strcmp(argv[1], "make directory")==0)

{
    system("mkdir file");
    
}


}