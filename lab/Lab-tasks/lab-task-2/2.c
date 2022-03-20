#include<stdio.h>
#include<stdlib.h>
#include<cstring>

int main(){

 

    printf("press 1 for date\n");
    printf("press 2 for make directory\n");
    printf("press 3 for make file\n");
    int i;
    
    scanf("%d",&i);

    if(i==1)

    {

        system("date");    
    
    }


     if(i==2)

    {

        system("mkdir file2");    
    
    }




     if(i==3)

    {

        system("touch file2.c");    
    
    }


    

    

    return 0;
}