#include <stdio.h>
int main()
{   int N,min;
    int arr[N];
    printf("enter how much number should be stored: ");
    scanf("%d",&N);
    printf("the elments of the arrray is: ");
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    for(int i=1;i<N;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("the smallest number is: %d",min);
    return 0;
}