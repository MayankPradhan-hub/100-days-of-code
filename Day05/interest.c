/*Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76
*/
#include<stdio.h>
#include<math.h>
int main()
{
    float p,rate;
    int time;
    float SI,CI;
    printf("Enter the principal\n");
    scanf("%f",&p);
    printf("Enter the rate\n");
    scanf("%f",&rate);
    printf("Enter the time in years\n");
    scanf("%d",&time);
    SI=(p*rate*time)/100.0;
    CI=(float)(p*pow((1+rate/100.0),time))-p;
    printf("Simple interest=%0.2f, Compound interest=%0.2f\n",SI,CI);
    return 0;
}