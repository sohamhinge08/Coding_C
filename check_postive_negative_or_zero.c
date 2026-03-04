#include <stdio.h>
int main()
{
     int a;
     printf("enter any integer you want :");
     scanf("%d", &a);
     if(a>0)
     {
        printf("the integer is positive");
     }
     else if(a<0)
     {
        printf("the integr is negative");
     }
     else
     {
        printf("the integer is zero");
     }
return 0;
}
