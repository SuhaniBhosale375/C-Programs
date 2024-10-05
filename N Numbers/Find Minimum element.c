#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[],int iSize)
{
    int iCnt = 0, iMin = Arr[iCnt];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] <= iMin)
        {
            iMin = Arr[iCnt];
        }
    }

    return iMin;
}

int main()
{
    int *ptr = NULL;
    int iRet = 0, iCnt = 0,iLength = 0;

    printf("Enter the number of elemnts that we want to store :");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements : \n");

    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Minimum(ptr , iLength);

    printf("Minimum element in array : %d",iRet);

    free(ptr);

    return 0;

}