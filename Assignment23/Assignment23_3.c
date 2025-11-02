//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : Assignment23_3.c
//  Description : Write a program which accepts a character from user and displays all characters from that character up to 'a' or 'z'.
//  Author : Ishwari Bharat Khopade.
//  Date : 02/07/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main()
{
    char ch = '\0';
    int i = 0;

    printf("Enter a character:\n");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
    {
        printf("Characters from %c to z are:\n", ch);

        for (i = ch; i <= 'z'; i++)
        {
            printf("%c\t", i);
        }
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("Characters from %c to Z are:\n", ch);

        for (i = ch; i <= 'Z'; i++)
        {
            printf("%c\t", i);
        }
    }
    else
    {
        printf("Entered character is not an alphabet.\n");
    }

    return 0;
}
