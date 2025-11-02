//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : Assignment28_5.c
//  Description : Write application which accepts file name from user and 1 string from user.
//                Write that string at the end of file.
//  Input : Demo.txt
//          HelloWorld
//  Output : write Hello world at end of Demo.txt file.
//  Author : Ishwari Bharat Khopade.
//  Date : 13/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

#define BUFFER_SIZE 1024

int main()
{
    int fd = 0, iRet = 0, iSum = 0;
    char fName[20] = {'\0'};
    char Buffer[BUFFER_SIZE] = {'\0'};

    printf("Enter Name of File you want to open:\n");
    scanf("%s", &fName);

    printf("Enter the string to write at the end of file (one word only):\n");
    scanf("%s", Buffer);

    fd = open(fName, O_WRONLY | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to Open file");
        return -1;
    }
    else
    {
        printf("File opened Succesfully \n");
        iRet = write(fd, Buffer, strlen(Buffer));
        printf("%d bytes gets written succeffully \n", iRet);
        

        close(fd);
    }

    return 0;
}
