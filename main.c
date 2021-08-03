/***********************************
project:LIBRARY MANAGMENT SYSTEM   *
AUTHOR: KIGAA ,GODFREY             *
DATE: AUGUST                       *
COMPLIER:C99                       *
LICENSE;MIT                        *
***********************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int action;
    printf("COMMUNITY LIBRARY SYTEM!\n");
    printf("WELCOME SIR GODFREY & SIR KIGAA\n");
    //Nvigation system
    do{
          printf("1. Add user\n");
    printf("2. Add book\n");
    printf("3. exit");
    printf("Action(1-3:");
    scanf("%d",&action);

//validate
    if(action<1 || action> 3)
        {
        printf("Invalid action!!!\n");
        system("cls");

    }while(action <1 || action >3);
    execute_action(action);


    return 0;
    }


}
