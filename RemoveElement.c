/*
Input: nums = [0,1,2,2,3,0,4,2], val = 2
Output: 5, nums = [0,1,4,0,3]
Explanation: Your function should return length = 5, with the first five elements of nums containing 0, 1, 3, 0, and 4. Note that the order of those five elements can be arbitrary. It doesn't matter what values are set beyond the returned length.

two pointer move p1,p2 start from 0,0 not 0,1, replace i, not i+1
*/

int removeElement(int* nums, int numsSize, int val){
    if (numsSize == 0)
	{
		return 0;
	}
		
	int i = 0;
	for (int j =0; j < numsSize; j++)
	{
		if (nums[j] != val)
		{
			nums[i] = nums[j];
            i++;
		}
	}
	return i;
}

