//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : Assignment23_5.c
//  Description : Write a program which accepts a character from user and displays its Decimal, Octal and Hexadecimal value.
//  Author : Ishwari Bharat Khopade.
//  Date : 18/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main()
{
    char ch = '\0';

    printf("Enter a character:\n");
    scanf("%c", &ch);

    printf("Character: %c\n", ch);
    printf("Decimal Value: %d\n", ch);
    printf("Octal Value: %o\n", ch);
    printf("Hexadecimal Value: %X\n", ch);

    return 0;
}
