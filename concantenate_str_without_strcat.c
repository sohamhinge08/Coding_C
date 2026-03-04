#include <stdio.h>
#include <string.h>
int main()
{
    char str1[30],str2[20];
    int i,j;
    printf("enter string 1: ");
    gets(str1);
    printf("enter string 2: ");
    gets(str2);
    i=0;
    while(str1[i] != '\0')
    {
        i++;
    }    
    j=0;
    while(str2[j] != '\0')
    {   
        str1[i]=str2[j];
        i++;
        j++;
    }
    str1 [i]= '\0';
    printf("conctenated string is: %s", str1);
    return 0;
}