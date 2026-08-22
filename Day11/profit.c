/*Q22: Write a program to find profit or loss percentage given cost price and selling price.
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include<stdio.h>
int main()
{
    int sp,cp;
    printf("Enter the Cost price and Selling price seperated by a comma\n");
    scanf("%d,%d",&cp,&sp);
    if(sp>cp)
    {
        float P=sp-cp;
        printf("Profit %0.2f\n",(P/cp)*100.0);
    }
    else
    {
        float L=cp-sp;
        printf("Loss %0.2f\n",(L/cp)*100.0);
    }
}