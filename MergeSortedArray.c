// Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
// Output: [1,2,2,3,5,6]

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    nums1Size = m - 1;
    nums2Size = n - 1; //size
    int totalSize = m + n - 1;
    while (nums1Size>=0&&nums2Size>=0)
    {
        if(nums1[nums1Size]>nums2[nums2Size])
            nums1[totalSize--] = nums1[nums1Size--]; //original nums1
        else
            nums1[totalSize--] = nums2[nums2Size--]; // for nums2
    }
    while(nums2Size>=0)
        nums1[totalSize--] = nums2[nums2Size--];
        
}
