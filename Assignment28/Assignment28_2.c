//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : Assignment28_2.c
//  Description : Write application which accepts file name from user and create that file.
//  Input : Demo.txt
//  Output : File Created Succefully.
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

    printf("Enter Name of File you want to create:\n");
    scanf("%s", &fName);

    fd = creat(fName, 0777);

    if(fd == -1)
    {
        printf("Unable to create file");
        return -1;
    }
    else
    {
        printf("File created Succesfully");
        close(fd);
    }

    return 0;
}
