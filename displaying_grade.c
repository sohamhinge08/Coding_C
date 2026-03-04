#include <stdio.h>
int main()
{ 
    int a;
    printf("enter your marks '0-100' to obtain grade ");
    scanf("%d",&a);
    if (a< 0 || a> 100) {
    printf("Invalid marks entered.\n");
    return 1;
}

    switch (a/10)
    {
    case 10:
    case 9:
        printf("the grade is A",a>=90);
        break;
    case 8:
        printf("the grade is B",a>=80 && a<90);
        break;
    case 7:
        printf("the grade is C",a>=70 && a<80);
        break;
    case 6:
        printf("the grade is D",a>=60 && a<70);
        break;
    default:
        printf("you have failed bro and the grade is F");
    }
return 0;
}