#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the first number\n");
    scanf("%d",&a);
    printf("Enter the second number\n");
    scanf("%d",&b);
    int sum,diff,pro,que;
    sum=a+b;
    diff=a-b;
    pro=a*b;
    printf("Sum= %d\n",sum);
    printf("Diffrence= %d\n",diff);
    printf("Product= %d\n",pro);
    if(b==0)
    {
        printf("The Quotient is Undefined\n");
    }
    else
    {
        que=a/b;
        printf("Quotient= %d\n",que);
    }
    return 0;
}