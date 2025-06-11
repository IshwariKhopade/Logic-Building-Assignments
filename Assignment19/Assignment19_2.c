//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : Assignment19_2.c
//  Description : Accept N Numbers from user and return difference between frequency of even and odd numbers.
//  Input : N : 7
//          Elements : 85, 66, 3, 80, 93, 88, 90
//  Output : 1 (4-3) 
//  Author : Ishwari Bharat Khopade.
//  Date : 11/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int CountEven(int Arr[], int iLength)
{
    int iCnt = 0, iEvenCount = 0, iOddCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEvenCount++;
        }
        else
        {
            iOddCount++;
        }    
    }
    return iEvenCount - iOddCount;    
}
int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter Number of Elements:\n");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Enter %d elements\n", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter Element  %d :", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    iRet = CountEven(p, iSize);

    printf("Result is %d", iRet);

    free(p);

    return 0;
}
