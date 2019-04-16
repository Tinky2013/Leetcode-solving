/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    *returnSize=0;
    for(int i=0;i<numsSize;i++)
    {
        int m=abs(nums[i])-1;
        if(nums[m]>0)
        {
            nums[m]=-nums[m];
            (*returnSize)++;
        }
        else
        {}
    }
    *returnSize = numsSize-(*returnSize);
    int *res=(int *)malloc(sizeof(int) * (*returnSize));
    int k=0;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]>0){
            res[k]=i+1;
           
            k++;
        }
    }
    return res;
}
