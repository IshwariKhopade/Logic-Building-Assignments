////////////////////////////////////////////////////////////
//
//  File Name : Assignment1_2.c 
//  Description : Displays "Marvellous" 5 times on screen
//  Author : Ishwari Bharat Khopade
//  Date : 08gcc Assignment1.c -o myexe/05/2025
//  
////////////////////////////////////////////////////////////
#include<stdio.h>

void Display()
{
    int i = 0;
    for(i=1; i<=5; i++)
    {
        printf("Marvellous\n");
    }
}

int main()
{
    Display();
    
    return 0;
}