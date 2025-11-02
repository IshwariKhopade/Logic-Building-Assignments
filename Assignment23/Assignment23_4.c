//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : Assignment23_4.c
//  Description : Write a program which accepts a character from user and displays whether it is a special symbol or not.
//  Author : Ishwari Bharat Khopade.
//  Date : 02/07/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main()
{
    char ch = '\0';

    printf("Enter a character:\n");
    scanf("%c", &ch);

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        printf("Entered character is an alphabet.\n");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("Entered character is a digit.\n");
    }
    else
    {
        printf("Entered character is a special symbol.\n");
    }

    return 0;
}
