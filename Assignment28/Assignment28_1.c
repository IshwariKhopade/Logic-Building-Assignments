//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : Assignment28_1.c
//  Description : Write application which accepts file name from user and open that file in read mode.
//  Input : Demo.txt
//  Output : File Opened Succefully.
//  Author : Ishwari Bharat Khopade.
//  Date : 13/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
    int fd = 0;
    char fName[20] = {'\0'};

    printf("Enter Name of File you want to open:\n");
    scanf("%s", &fName);

    fd = open(fName, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file");
        return -1;
    }
    else
    {
        printf("File opened Succesfully");
        close(fd);
    }

    return 0;
}
