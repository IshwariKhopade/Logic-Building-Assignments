//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : Assignment23_1.c
//  Description : Write a program which display ASCII table. Table contains Symbol, Decimal, Hexadecimal and 
//                octal Representation of every member from 0- 255.
//  Input : —
//  Output : Display ASCII Table
//  Author : Ishwari Bharat Khopade.
//  Date : 02/07/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main()
{
    int i = 0;

    printf("-----------------------------------------------------------\n");
    printf("  ASCII TABLE (0 - 255)\n");
    printf("-----------------------------------------------------------\n");
    printf(" Decimal\tHex\tOctal\tSymbol\n");
    printf("-----------------------------------------------------------\n");

    for (i = 0; i <= 255; i++)
    {
        if (i < 32 || i == 127)     // Non-printable characters
        {
            printf(" %3d\t\t%02X\t%03o\tNon-printable\n", i, i, i);
        }
        else                        // Printable characters
        {
            printf(" %3d\t\t%02X\t%03o\t%c\n", i, i, i, i);
        }
    }
    printf("-----------------------------------------------------------\n");

    return 0;
}
