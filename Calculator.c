 #include <stdio.h>
 int main(){
    long int a,b,ans;
    char op;
    printf("Enter the two numbers to get the answer:\n ");
    scanf("%ld",&a);
    scanf("%ld",&b);
    printf("enter the operator between '+,-,*,%,/' : ");
    scanf(" %c",&op);
    switch (op)
    {
        case'+':
        ans=a+b;
        printf("answer= %ld",ans);
        break;

        case'-':
        ans=a-b;
        printf("answer= %ld",ans);
        break;

         case'*':
        ans=a*b;
        printf("answer= %ld",ans);
        break;

         case'%':
        ans=a%b;
        printf("answer= %ld",ans);
        break;

        case'/':
        if(b==0)
        {
            printf("the answer is not defined");
        }
        else
        {
        ans=a/b;
        printf("answer= %ld",ans);
        }
    }
    return 0;
 }