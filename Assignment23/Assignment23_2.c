//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : Assignment23_2.c
//  Description : Write a program which accepts a character from user and displays its corresponding upper case character.
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

    if (ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;   // Convert lowercase to uppercase
        printf("Corresponding Uppercase Character is: %c\n", ch);
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("Entered character is already Uppercase: %c\n", ch);
    }
    else
    {
        printf("Entered character is not an alphabet.\n");
    }

    return 0;
}
