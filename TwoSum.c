
/**
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Output: Because nums[0] + nums[1] == 9, we return [0, 1].

 * Note: The returned array must be malloced, assume caller calls free().
 
 A brute force way in C
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int i, j;
    int *result = (int*) malloc(2*sizeof(int));
    *returnSize = 2;
    for(i = 0; i < numsSize;i++)
    {
        for (j =i+1;j<numsSize; j++)
        {
            if (nums[i]+ nums[j]==target){
                result[0] = i;
                result[1] = j;
            }
        }
    }
    return result;
}
