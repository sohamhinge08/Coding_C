#include <stdio.h>
int main()
{
    int A[2][2],B[2][2],C[2][2];
    int i,j,k;
    printf("enter the elements for matrix 1: ");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("enter the elements for matrix 2: ");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            C[i][j]=0;
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            for(int k=0;k<2;k++)
            {
                C[i][j]=C[i][j]+A[i][j]*B[i][j];
            }
        }
    }
    printf("the resultant matrix is: \n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}