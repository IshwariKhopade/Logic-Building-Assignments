//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : Assignment28_3.c
//  Description : Write application which accepts file name from user and read all data from that file 
//                and display contents on screen.
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

int main()
{
    int fd = 0, iRet = 0;
    char fName[20] = {'\0'};
    char Buffer[] = {'\0'};

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
        while (iRet = read(fd, Buffer, 10) != 0)
        {
            printf("%s" , Buffer);
            memset(Buffer, '\0', 10);
        }
        close(fd);
    }

    return 0;
}
