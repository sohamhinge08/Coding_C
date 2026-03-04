#include <stdio.h>
int main()
{
    int N;
    printf("the size of array: \n");
    scanf("%d",&N);
    int arr[N];
    printf("enter the number in array:");
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(int i=1;i<N;i++)
    {
        if( arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("the largest number is:%d",max);
    return 0;
}