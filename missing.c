int missingNumber(int* nums, int numsSize)
{
    /* 'esum' stores the estimated sum of the range.
       'asum' stores the actual sum of the range.  */
    int i,esum=0,asum=0;
    for(i=1;i<=numsSize;i++)
    {
        esum=esum+i;
    }
    for(i=0;i<numsSize;i++)
    {
        asum=asum+nums[i];
    }
    if(esum!=asum)
    {
        return (esum-asum);
    }
    else
    {
        return -9999;
    }
}
#include<stdio.h>
int main()
{
    int nsize;
    printf("Enter the size of the list\n");
    scanf("%d",&nsize);
    int num[nsize];
    int i;
    for(i=0;i<nsize;i++)
    {
        printf("Enter the number\n");
        scanf("%d",&num[i]);
    }
    int r=missingNumber(num,nsize);
    if(r==-9999)
    {
        printf("The range is complete\n");
    }
    else
    {
        printf("The missing number is%d \n",r);
    }
    return 0;
}