int sumArray(int* nums,int numsSize)
{
    int i,sum=0;
    for(i=0;i<numsSize;i++)
    {
        sum=sum+nums[i];
    }
    return sum;
}
#include<stdio.h>
int main()
{
    int size,i;
    printf("Enter the size of array\n");
    scanf("%d",&size);
    int num[size];
    for(i=0;i<size;i++)
    {
        printf("Enter the number\n");
        scanf("%d",&num[i]);
    }
    printf("The sum of every integer in the array is:%d \n",sumArray(num,size));
    return 0;
}