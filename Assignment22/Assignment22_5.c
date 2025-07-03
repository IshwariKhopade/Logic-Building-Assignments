//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : Assignment22_5.c
//  Description : Write a program which display ASCII table. Table contains Symbol, Decimal, Hexadecimal and 
//                octal Representation of every member from 0- 255.
//  Author : Ishwari Bharat Khopade.
//  Date : 02/07/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void DisplayShedule(char ch)
{
    if(ch == 'A' || ch == 'a')
    {
        printf("Your exam is at 7 a.m");
    }
    else if(ch == 'B' || ch == 'b')
    {
        printf("Your exam is at 8:30 a.m");
    }
    else if(ch == 'C' || ch == 'c')
    {
        printf("Your exam is at 9:30 a.m");
    }
    else if(ch == 'D' || ch == 'd')
    {
        printf("Your exam is at 10:30 a.m");
    }
    else
    {
        printf("Invalid Division");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your Division:\n");
    scanf("%c", &cValue);

    DisplayShedule(cValue);

    return 0;
}
