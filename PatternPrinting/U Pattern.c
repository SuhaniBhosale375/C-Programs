#include<stdio.h>

int main()
{
    int R = 0, C = 0;
    int i = 0,j = 0;

    printf("Enter Row Number :\n");
    scanf("%d",&i);

    printf("Enter Column Number :\n");
    scanf("%d",&j);

    for(R = 1; R <= i; R++)
    {
        for(C = 1; C<= j; C++)
        {
           if((C == 2 && R < j) || (C == j - 1 && R < j ) || (R == j && (C < i - 1)&& C > 2))
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }

}