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
        sleep(2000);
}
}while(action <1 || action >3);
    execute_action (action);
    return 0;
}

void execute_action (int action){
switch(action){
case 1:
    printf("adding user\n");
    break;
case 2:
    printf("adding book\n");
    break;
    case 3:
    close();
    break;
    default :
    printf("sorry i dont no how to execute that");

}
    void close(){
        printf("thank you for using the system");
        sleep(2000);
        exit(0);
}
   return 0;
}








































