#include<stdio.h>

/*
    Row     4
    Coloum  4

    1   *   *   *   
    *   2   *   *
    *   *   3   *
    *   *   *   4
   
*/

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {    
        for(j = 1; j <= iCol; j++)
        {
           if(i == j)
           {
                printf("%d\t",i);
           }
           else
           {
                printf("*\t");
           }
        }
        printf("\n"); 
    }    
}

int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Enter number of Rows :\n");
    scanf("%d",&iValue1);

    printf("Enter number of colums  :\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}
