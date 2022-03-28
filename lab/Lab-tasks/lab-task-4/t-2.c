#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( )  {
	
	char command[20];
	while(strcmp(command, "exit") != 0)
{	printf("\nENTER COMMAND \n");

   
  scanf("%s",command);
  

 if( strcmp(command, "listdirectory") == 0 )
  {
     printf("print - it worked");
     system("ls");
  }
  
 else if(strcmp(command, "date") == 0 )
  {
     printf("print - it worked");
     system("date");
  }
  else if(strcmp(command, "process") == 0 )
  {
     printf("print - it worked");
     system("ps");
  }
  else if(strcmp(command, "exit") == 0 )
  {
     system("exit");
  }
  else
  {
     printf("print - did not work");
  }
}
}