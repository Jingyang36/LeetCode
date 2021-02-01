// Input: nums = [0,0,1,1,1,2,2,3,3,4]
// Output: 5, nums = [0,1,2,3,4]
// Explanation: Your function should return length = 5, with the first five elements of nums being modified to 0, 1, 2, 3, and 4 respectively. It doesn't matter what values are set beyond the returned length.
/*
两个指针， i,j一，慢一快，快的和慢的一样数字，j动；i,j不同，把j的数放在i后面，然后i，j加一， i = j
结果i+1
*/
int removeDuplicates(int* nums, int numsSize){
	if (numsSize == 0)
	{
		return 0;
	}
		
	int i = 1;
	for (int j = 1; j < numsSize; j++)
	{
		if (nums[j] != nums[i-1])
		{
			nums[i++] = nums[j];
		}
	}
	return i;
}



/////////////////////////
// Given a sorted array nums, remove the duplicates in-place such that duplicates appeared at most twice and return the new length.
// Input: nums = [1,1,1,2,2,3]
// Output: 5, nums = [1,1,2,2,3]
// Explanation: Your function should return length = 5, with the first five elements of nums being 1, 1, 2, 2 and 3 respectively. It doesn't matter what you leave beyond the returned length.

int removeDuplicates(int* nums, int numsSize){
    	if (numsSize == 0)
	{
		return 0;
	}
		
	int i = 1;
	for (int j = 1, dup1=0, dup2; j < numsSize; j++)
	{
		if (!(dup2 = nums[j] == nums[i-1])||!dup1)
		{
            dup1 = dup2;
			nums[i++] = nums[j];
		}
	}
	return i;

}
