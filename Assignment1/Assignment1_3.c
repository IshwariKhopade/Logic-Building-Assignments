////////////////////////////////////////////////////////////////
//  
//  File Name : Assignment1_3.c
//  Description : Used to Print 5 to 1 Numbers on Screen
//  Author : Ishwari Bharat Khopade
//  Date : 08/05/2025
//
//////////////////////////////////////////////////////////////

#include<stdio.h>

void Display()
{
    
    int i = 5;
    while(i>=1)
    {
        printf("%d\n", i);
        i--;
    }
}
int main()
{
    Display();

    return 0;
}