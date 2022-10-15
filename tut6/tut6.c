/* this is a Sample program for passing array to the functions*/
#include <stdio.h>

void PrintMessage(char Data[]);

void PrintMessage_1(char Data[]);

int main(int argc, char const *argv[])
{
    /* code */
    char *Message = "Hello this is Kaushik";
    PrintMessage(Message);
    PrintMessage_1(Message);
    return 0;
}

void PrintMessage(char Data[])
{
    printf("msg is %s\n\n", Data);
}

void PrintMessage_1(char *Data)
{
    printf("msg is %s\n\n", Data);
}