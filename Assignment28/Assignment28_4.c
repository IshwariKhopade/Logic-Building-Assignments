//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : Assignment28_4.c
//  Description : Write application which accepts file name from user and display size of file.
//  Input : Demo.txt
//  Output : Display all data of file.
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

    fd = open(fName, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to Open file");
        return -1;
    }
    else
    {
        printf("File opened Succesfully \n");
        while ((iRet = read(fd, Buffer, BUFFER_SIZE)) != 0)
        {
            iSum = iSum + iRet;
        }
        printf("File size is : %d bytes \n", iSum);

        close(fd);
    }

    return 0;
}
