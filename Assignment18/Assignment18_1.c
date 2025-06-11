//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : Assignment18_1.c
//  Description : Accept N Numbers from user and return difference between summation of even element
//                and summation of odd elements.
//  Input : N : 6
//          Elements : 85, 66, 3, 80, 93, 88
//  Output : 53 (124 - 181) 
//  Author : Ishwari Bharat Khopade.
//  Date : 11/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
int Difference(int Arr[], int iLength)
{
    int iCnt = 0, iSum1 = 0, iSum2 = 0, iDiff = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt]) % 2 == 0)
        {
            iSum1 = iSum1 + Arr[iCnt];
        }
        else
        {
           iSum2 = iSum2 + Arr[iCnt]; 
        }    
    }
    iDiff = iSum1 - iSum2;
    return iDiff;    
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
        printf("Enter Element :  %d ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    iRet = Difference(p, iSize);

    printf("Result is %d", iRet);
    free(p);

    return 0;
}
